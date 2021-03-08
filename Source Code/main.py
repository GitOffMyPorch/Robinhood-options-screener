import robin_stocks.robinhood as r


def login(login_credentials_file):
    with open(login_credentials_file) as reader:
        login_list = reader.readlines()
        for n in range(len(login_list)):
            login_list[n] = login_list[n].strip("\n")
        login_var = r.login(login_list[0], login_list[1], "80000")
        print(login_var)


def get_stocks():
    stocks = r.get_top_100()
    tickers = []
    for number in range(len(stocks)):
        for element in stocks[0]:
            if element == "symbol":
                tickers.append(stocks[number][element])
    return tickers


def get_stocks_from_file(file_name):
    with open(file_name) as reader:
        stock_list = reader.readlines()
        for n in range(len(stock_list)):
            stock_list[n] = stock_list[n].strip("\n")
        return stock_list


def filter_stocks_by_price(tickers, price_to_filter):
    tickers_under_price = {}
    for ticker in tickers:
        new_tickers = r.get_quotes(tickers)
        for new_ticker in new_tickers:
            if float(new_ticker["last_trade_price"]) <= price_to_filter:
                local_ticker = new_ticker["symbol"]
                tickers_under_price[local_ticker] = new_ticker["last_trade_price"]
    print(tickers_under_price)
    return tickers_under_price


def delta_probability_strike_price_finder(tickers_under_price, exp_date, call_or_put):
    delta_and_win_percent = {}
    for ticker in tickers_under_price:
        try:
            strike_price = str(round(float(tickers_under_price.get(ticker)), 1))
            while True:
                try:
                    option_data = r.find_options_by_expiration_and_strike(
                        ticker, exp_date, strike_price, call_or_put
                    )
                    if call_or_put == "put":
                        if (float(strike_price) % 0.5) == 0:
                            strike_price = str(round(float(strike_price) - 0.50, 1))
                            if float(option_data[0]["delta"]) >= -0.15:
                                break
                        else:
                            strike_price = str(round(float(strike_price) - 0.10, 1))
                    if call_or_put == "call":
                        if (float(strike_price) % 0.5) == 0:
                            strike_price = str(round(float(strike_price) + 0.50, 1))
                            if float(strike_price) >= float(
                                (5 * float(tickers_under_price.get(ticker)))
                            ):
                                break
                            if float(option_data[0]["delta"]) <= 0.15:
                                break
                        else:
                            strike_price = str(round(float(strike_price) + 0.10, 1))
                except IndexError:
                    if float(strike_price) <= 0.0:
                        break
                    continue
            print(option_data)
            delta_and_win_percent[ticker] = [
                option_data[0]["last_trade_price"],
                option_data[0]["delta"],
                option_data[0]["strike_price"],
                tickers_under_price[ticker],
            ]
        except AttributeError:
            print("could not get options")
        except IndexError:
            print("excluded from screening because price is too high")
    print(delta_and_win_percent)
    return delta_and_win_percent


def print_option_data(delta_and_win_percent):
    for stock in delta_and_win_percent:
        percent_win = round(
            (
                float(delta_and_win_percent[stock][0])
                / float(delta_and_win_percent[stock][3])
            )
            * 100,
            2,
        )
        probability = abs(round(float(delta_and_win_percent[stock][1]) * 100, 2))
        strike = round(float(delta_and_win_percent[stock][2]), 2)
        option_price = round(float(delta_and_win_percent[stock][0]), 2)
        price = round(float(delta_and_win_percent[stock][3]), 2)

        print(
            str(stock)
            + ":  Percent Win - "
            + str(percent_win)
            + "% Probability Lose - "
            + str(probability)
            + "% "
            + " Strike - "
            + str(strike)
            + " Option Price - "
            + str(option_price)
            + " Price - "
            + str(price)
        )


login("credentials")
get_stocks_or_pull_stocks = input(
    "Would you like to pull stocks from a file or use Robinhood's top 100? (1 for pull from file 2 for top 100)"
)
if get_stocks_or_pull_stocks == "2":
    list_of_stocks = get_stocks()
elif get_stocks_or_pull_stocks == "1":
    list_of_stocks = get_stocks_from_file("tickers_to_search")
else:
    print("An Error Has Occurred")
price_to_filter_by = input(
    "What is the maximum share price for the stocks you are looking for?"
)
filtered_stocks = filter_stocks_by_price(list_of_stocks, float(price_to_filter_by))
strike_to_filter_by = input(
    "What is the date of expiry of the options you are looking for? (follow the format YYYY-MM-DD)"
)
calls_or_puts = input("Are you looking for calls or puts? (1 for calls 2 for puts)")
if calls_or_puts == "1":
    options_data = delta_probability_strike_price_finder(
        filtered_stocks, strike_to_filter_by, "call"
    )
elif calls_or_puts == "2":
    options_data = delta_probability_strike_price_finder(
        filtered_stocks, strike_to_filter_by, "put"
    )
else:
    print("An Error Has Occurred")
print_option_data(options_data)
input("Press enter to quit")
