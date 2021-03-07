# Robinhood-options-screener
Screens options data to find the best options to sell for theta-gangers, works for cash-secured-puts and covered-calls. 

* Gets the "percent win" which is the percent return on the money it would require to secure a put or cover a call (Ex: premium received / cash required to buy 100 shares or secure a put = percent win). 
* Gets the probability of the trade going south i.e. "Probability Lose" using delta as a probability indicator. 
* Gets the strike price of the option to sell. 
* Gets the option contract price per share. 
* Gets the price of the stock. 
* Gets the ticker symbol of the stock to sell a call/put on.

# Modifications
If you want to modify the code or extend the usage beyond what is provided here then you will need to download the Source Code file. This project requires the "robin_stocks" library be added so that the Robinhood API can be accessed. This should be relatively simple to do with the command "pip install robin-stocks". You can visit the robin stocks github page here: https://github.com/jmfernandes/robin_stocks and the documentation here: https://robin-stocks.readthedocs.io/en/latest/

# Usage
If you simply want to use the program without messing with the source code simply download a .zip file of the whole project. You can then extract that (to your Desktop for example) and delete everything except what is contained within the "Standalone Screener v2" folder. You will need to provide your credentials to login into your Robinhood account. 

Go into /Standalone Screener v2/main.dist/ folder and then look for a file called "credentials" open it with a text editor and replace the first line with your email and the second with your password, once you save this the program should be able to log you into Robinhood.

Go into /Standalone Screener v2/main.dist/ again and look for the file "main.exe". Double click it and it should open a terminal window asking for a verification code, It should send you an email or a text with your code. Put that code in and the program should work for about the next 24 hours. 

One last thing, there is a file in /Standalone Screener v2/main.dist/ called "tickers_to_search" if you put ticker symbols in this file with a new line separating each one you can select an option while running the program to use this file instead of Robinhood's top 100 stocks as candidates for selling puts or calls.
