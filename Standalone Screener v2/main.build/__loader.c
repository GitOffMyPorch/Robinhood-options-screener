
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 598 > 0
static unsigned char *bytecode_data[598];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langrussianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$fernet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_der(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$cmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$decode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$encode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$poly1305(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_cipheralgorithm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$constant_time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$hmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf$scrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$pkcs7(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$ssh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$certificate_transparency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$general_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini$account(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini$authentication(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini$crypto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini$orders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$gemini$urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$account(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$authentication(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$crypto(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$export(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$markets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$options(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$orders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$profiles(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$stocks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$robinhood$urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$accounts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$authentication(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$markets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$orders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$stocks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_robin_stocks$tda$urls(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, },
    {"_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_cffi_backend", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_msi", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_overlapped", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"abc", NULL, 0, 5299, NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 1, 17036, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 2, 2319, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 3, 27029, NUITKA_BYTECODE_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, },
    {"chardet", modulecode_chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, },
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, },
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, },
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, },
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, },
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, },
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, },
    {"chardet.enums", modulecode_chardet$enums, 0, 0, },
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, },
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, },
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, },
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, },
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, },
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, },
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, },
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, },
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, },
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, },
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, },
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, },
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, },
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, },
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, },
    {"chardet.langrussianmodel", modulecode_chardet$langrussianmodel, 0, 0, },
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, },
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, },
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, },
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, },
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, },
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, },
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, },
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, },
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, },
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, },
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, },
    {"chardet.version", modulecode_chardet$version, 0, 0, },
    {"codecs", NULL, 4, 33921, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 5, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"contextlib", NULL, 6, 20194, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 7, 6952, NUITKA_BYTECODE_FLAG},
    {"cryptography", modulecode_cryptography, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.__about__", modulecode_cryptography$__about__, 0, 0, },
    {"cryptography.exceptions", modulecode_cryptography$exceptions, 0, 0, },
    {"cryptography.fernet", modulecode_cryptography$fernet, 0, 0, },
    {"cryptography.hazmat", modulecode_cryptography$hazmat, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat._der", modulecode_cryptography$hazmat$_der, 0, 0, },
    {"cryptography.hazmat._oid", modulecode_cryptography$hazmat$_oid, 0, 0, },
    {"cryptography.hazmat._types", modulecode_cryptography$hazmat$_types, 0, 0, },
    {"cryptography.hazmat.backends", modulecode_cryptography$hazmat$backends, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.interfaces", modulecode_cryptography$hazmat$backends$interfaces, 0, 0, },
    {"cryptography.hazmat.backends.openssl", modulecode_cryptography$hazmat$backends$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.openssl.aead", modulecode_cryptography$hazmat$backends$openssl$aead, 0, 0, },
    {"cryptography.hazmat.backends.openssl.backend", modulecode_cryptography$hazmat$backends$openssl$backend, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ciphers", modulecode_cryptography$hazmat$backends$openssl$ciphers, 0, 0, },
    {"cryptography.hazmat.backends.openssl.cmac", modulecode_cryptography$hazmat$backends$openssl$cmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.decode_asn1", modulecode_cryptography$hazmat$backends$openssl$decode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dh", modulecode_cryptography$hazmat$backends$openssl$dh, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dsa", modulecode_cryptography$hazmat$backends$openssl$dsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ec", modulecode_cryptography$hazmat$backends$openssl$ec, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed25519", modulecode_cryptography$hazmat$backends$openssl$ed25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed448", modulecode_cryptography$hazmat$backends$openssl$ed448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.encode_asn1", modulecode_cryptography$hazmat$backends$openssl$encode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hashes", modulecode_cryptography$hazmat$backends$openssl$hashes, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hmac", modulecode_cryptography$hazmat$backends$openssl$hmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ocsp", modulecode_cryptography$hazmat$backends$openssl$ocsp, 0, 0, },
    {"cryptography.hazmat.backends.openssl.poly1305", modulecode_cryptography$hazmat$backends$openssl$poly1305, 0, 0, },
    {"cryptography.hazmat.backends.openssl.rsa", modulecode_cryptography$hazmat$backends$openssl$rsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.utils", modulecode_cryptography$hazmat$backends$openssl$utils, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x25519", modulecode_cryptography$hazmat$backends$openssl$x25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x448", modulecode_cryptography$hazmat$backends$openssl$x448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x509", modulecode_cryptography$hazmat$backends$openssl$x509, 0, 0, },
    {"cryptography.hazmat.bindings", modulecode_cryptography$hazmat$bindings, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings._openssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings._padding", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings.openssl", modulecode_cryptography$hazmat$bindings$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings.openssl._conditional", modulecode_cryptography$hazmat$bindings$openssl$_conditional, 0, 0, },
    {"cryptography.hazmat.bindings.openssl.binding", modulecode_cryptography$hazmat$bindings$openssl$binding, 0, 0, },
    {"cryptography.hazmat.primitives", modulecode_cryptography$hazmat$primitives, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives._asymmetric", modulecode_cryptography$hazmat$primitives$_asymmetric, 0, 0, },
    {"cryptography.hazmat.primitives._cipheralgorithm", modulecode_cryptography$hazmat$primitives$_cipheralgorithm, 0, 0, },
    {"cryptography.hazmat.primitives._serialization", modulecode_cryptography$hazmat$primitives$_serialization, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric", modulecode_cryptography$hazmat$primitives$asymmetric, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dh", modulecode_cryptography$hazmat$primitives$asymmetric$dh, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.dsa", modulecode_cryptography$hazmat$primitives$asymmetric$dsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ec", modulecode_cryptography$hazmat$primitives$asymmetric$ec, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed25519", modulecode_cryptography$hazmat$primitives$asymmetric$ed25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed448", modulecode_cryptography$hazmat$primitives$asymmetric$ed448, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.padding", modulecode_cryptography$hazmat$primitives$asymmetric$padding, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.rsa", modulecode_cryptography$hazmat$primitives$asymmetric$rsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.utils", modulecode_cryptography$hazmat$primitives$asymmetric$utils, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x25519", modulecode_cryptography$hazmat$primitives$asymmetric$x25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x448", modulecode_cryptography$hazmat$primitives$asymmetric$x448, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers", modulecode_cryptography$hazmat$primitives$ciphers, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.ciphers.aead", modulecode_cryptography$hazmat$primitives$ciphers$aead, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.algorithms", modulecode_cryptography$hazmat$primitives$ciphers$algorithms, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.base", modulecode_cryptography$hazmat$primitives$ciphers$base, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.modes", modulecode_cryptography$hazmat$primitives$ciphers$modes, 0, 0, },
    {"cryptography.hazmat.primitives.constant_time", modulecode_cryptography$hazmat$primitives$constant_time, 0, 0, },
    {"cryptography.hazmat.primitives.hashes", modulecode_cryptography$hazmat$primitives$hashes, 0, 0, },
    {"cryptography.hazmat.primitives.hmac", modulecode_cryptography$hazmat$primitives$hmac, 0, 0, },
    {"cryptography.hazmat.primitives.kdf", modulecode_cryptography$hazmat$primitives$kdf, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.kdf.scrypt", modulecode_cryptography$hazmat$primitives$kdf$scrypt, 0, 0, },
    {"cryptography.hazmat.primitives.padding", modulecode_cryptography$hazmat$primitives$padding, 0, 0, },
    {"cryptography.hazmat.primitives.serialization", modulecode_cryptography$hazmat$primitives$serialization, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.serialization.base", modulecode_cryptography$hazmat$primitives$serialization$base, 0, 0, },
    {"cryptography.hazmat.primitives.serialization.pkcs7", modulecode_cryptography$hazmat$primitives$serialization$pkcs7, 0, 0, },
    {"cryptography.hazmat.primitives.serialization.ssh", modulecode_cryptography$hazmat$primitives$serialization$ssh, 0, 0, },
    {"cryptography.utils", modulecode_cryptography$utils, 0, 0, },
    {"cryptography.x509", modulecode_cryptography$x509, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.x509.base", modulecode_cryptography$x509$base, 0, 0, },
    {"cryptography.x509.certificate_transparency", modulecode_cryptography$x509$certificate_transparency, 0, 0, },
    {"cryptography.x509.extensions", modulecode_cryptography$x509$extensions, 0, 0, },
    {"cryptography.x509.general_name", modulecode_cryptography$x509$general_name, 0, 0, },
    {"cryptography.x509.name", modulecode_cryptography$x509$name, 0, 0, },
    {"cryptography.x509.ocsp", modulecode_cryptography$x509$ocsp, 0, 0, },
    {"cryptography.x509.oid", modulecode_cryptography$x509$oid, 0, 0, },
    {"csv", NULL, 8, 11875, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 9, 57138, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 10, 1075, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 11, 1647, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.errors", NULL, 12, 5870, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 13, 9507, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 14, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.idna", NULL, 15, 5582, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 16, 25899, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 17, 27866, NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 18, 4143, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 19, 6692, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 20, 6353, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 21, 6020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.cookies", NULL, 22, 15233, NUITKA_BYTECODE_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, },
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, },
    {"idna.intranges", modulecode_idna$intranges, 0, 0, },
    {"idna.package_data", modulecode_idna$package_data, 0, 0, },
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, },
    {"importlib", NULL, 23, 3714, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib.resources", NULL, 24, 6475, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 25, 80558, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 26, 3419, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 27, 59533, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 28, 12564, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging", NULL, 29, 65069, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"mimetypes", NULL, 30, 15996, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 31, 3742, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 32, 14622, NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 33, 13656, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 34, 43899, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 35, 46873, NUITKA_BYTECODE_FLAG},
    {"pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"random", NULL, 36, 20073, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 37, 14387, NUITKA_BYTECODE_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, },
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, },
    {"requests.adapters", modulecode_requests$adapters, 0, 0, },
    {"requests.api", modulecode_requests$api, 0, 0, },
    {"requests.auth", modulecode_requests$auth, 0, 0, },
    {"requests.certs", modulecode_requests$certs, 0, 0, },
    {"requests.compat", modulecode_requests$compat, 0, 0, },
    {"requests.cookies", modulecode_requests$cookies, 0, 0, },
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, },
    {"requests.hooks", modulecode_requests$hooks, 0, 0, },
    {"requests.models", modulecode_requests$models, 0, 0, },
    {"requests.packages", modulecode_requests$packages, 0, 0, },
    {"requests.sessions", modulecode_requests$sessions, 0, 0, },
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, },
    {"requests.structures", modulecode_requests$structures, 0, 0, },
    {"requests.utils", modulecode_requests$utils, 0, 0, },
    {"robin_stocks", modulecode_robin_stocks, 0, 0, NUITKA_PACKAGE_FLAG},
    {"robin_stocks.gemini", modulecode_robin_stocks$gemini, 0, 0, NUITKA_PACKAGE_FLAG},
    {"robin_stocks.gemini.account", modulecode_robin_stocks$gemini$account, 0, 0, },
    {"robin_stocks.gemini.authentication", modulecode_robin_stocks$gemini$authentication, 0, 0, },
    {"robin_stocks.gemini.crypto", modulecode_robin_stocks$gemini$crypto, 0, 0, },
    {"robin_stocks.gemini.globals", modulecode_robin_stocks$gemini$globals, 0, 0, },
    {"robin_stocks.gemini.helper", modulecode_robin_stocks$gemini$helper, 0, 0, },
    {"robin_stocks.gemini.orders", modulecode_robin_stocks$gemini$orders, 0, 0, },
    {"robin_stocks.gemini.urls", modulecode_robin_stocks$gemini$urls, 0, 0, },
    {"robin_stocks.robinhood", modulecode_robin_stocks$robinhood, 0, 0, NUITKA_PACKAGE_FLAG},
    {"robin_stocks.robinhood.account", modulecode_robin_stocks$robinhood$account, 0, 0, },
    {"robin_stocks.robinhood.authentication", modulecode_robin_stocks$robinhood$authentication, 0, 0, },
    {"robin_stocks.robinhood.crypto", modulecode_robin_stocks$robinhood$crypto, 0, 0, },
    {"robin_stocks.robinhood.export", modulecode_robin_stocks$robinhood$export, 0, 0, },
    {"robin_stocks.robinhood.globals", modulecode_robin_stocks$robinhood$globals, 0, 0, },
    {"robin_stocks.robinhood.helper", modulecode_robin_stocks$robinhood$helper, 0, 0, },
    {"robin_stocks.robinhood.markets", modulecode_robin_stocks$robinhood$markets, 0, 0, },
    {"robin_stocks.robinhood.options", modulecode_robin_stocks$robinhood$options, 0, 0, },
    {"robin_stocks.robinhood.orders", modulecode_robin_stocks$robinhood$orders, 0, 0, },
    {"robin_stocks.robinhood.profiles", modulecode_robin_stocks$robinhood$profiles, 0, 0, },
    {"robin_stocks.robinhood.stocks", modulecode_robin_stocks$robinhood$stocks, 0, 0, },
    {"robin_stocks.robinhood.urls", modulecode_robin_stocks$robinhood$urls, 0, 0, },
    {"robin_stocks.tda", modulecode_robin_stocks$tda, 0, 0, NUITKA_PACKAGE_FLAG},
    {"robin_stocks.tda.accounts", modulecode_robin_stocks$tda$accounts, 0, 0, },
    {"robin_stocks.tda.authentication", modulecode_robin_stocks$tda$authentication, 0, 0, },
    {"robin_stocks.tda.globals", modulecode_robin_stocks$tda$globals, 0, 0, },
    {"robin_stocks.tda.helper", modulecode_robin_stocks$tda$helper, 0, 0, },
    {"robin_stocks.tda.markets", modulecode_robin_stocks$tda$markets, 0, 0, },
    {"robin_stocks.tda.orders", modulecode_robin_stocks$tda$orders, 0, 0, },
    {"robin_stocks.tda.stocks", modulecode_robin_stocks$tda$stocks, 0, 0, },
    {"robin_stocks.tda.urls", modulecode_robin_stocks$tda$urls, 0, 0, },
    {"select", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"socket", NULL, 38, 27752, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 39, 44561, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 40, 295, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 41, 23362, NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 42, 39941, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 43, 62385, NUITKA_BYTECODE_FLAG},
    {"unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"urllib", NULL, 44, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.parse", NULL, 45, 34252, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 46, 72577, NUITKA_BYTECODE_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, },
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, },
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, },
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, },
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, },
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, },
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, },
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, },
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, },
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, },
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, },
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, },
    {"urllib3.packages.six", modulecode_urllib3$packages$six, 0, 0, },
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, },
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, },
    {"urllib3.request", modulecode_urllib3$request, 0, 0, },
    {"urllib3.response", modulecode_urllib3$response, 0, 0, },
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, },
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, },
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, },
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, },
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, },
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, },
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, },
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, },
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, },
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, },
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, },
    {"uuid", NULL, 47, 23648, NUITKA_BYTECODE_FLAG},
    {"warnings", NULL, 48, 13617, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 49, 58479, NUITKA_BYTECODE_FLAG},
    {"__future__", NULL, 50, 4123, NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 51, 1208, NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 52, 28706, NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 53, 5466, NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 54, 4111, NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 55, 6002, NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 56, 7755, NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 57, 10277, NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 58, 4635, NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 59, 74044, NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 60, 3446, NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 61, 16009, NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 62, 6411, NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 63, 7565, NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 0, 5299, NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 64, 25439, NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 65, 62242, NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 66, 16728, NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 67, 6816, NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 68, 706, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 69, 50985, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 70, 1863, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 71, 9381, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 72, 1909, NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 73, 546, NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 74, 6619, NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 75, 28022, NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 76, 2514, NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 77, 2297, NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 78, 11158, NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 79, 16333, NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 80, 191, NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 81, 24110, NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 82, 8579, NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 83, 8346, NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 84, 1912, NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 85, 29650, NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 86, 21583, NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 87, 4083, NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 88, 20605, NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 89, 7323, NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 90, 24246, NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 91, 12227, NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 92, 8448, NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_events", NULL, 93, 24548, NUITKA_BYTECODE_FLAG},
    {"asyncio.windows_utils", NULL, 94, 4436, NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 95, 15993, NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 1, 17036, NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 96, 24886, NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 97, 12099, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 2, 2319, NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 98, 11410, NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 99, 5445, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 3, 27029, NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 100, 26509, NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 101, 10115, NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 102, 4804, NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 103, 12591, NUITKA_BYTECODE_FLAG},
    {"code", NULL, 104, 9878, NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 4, 33921, NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 105, 6382, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 5, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 106, 28705, NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 107, 3205, NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 108, 9375, NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 109, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 110, 1064, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 111, 21865, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 112, 20265, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 113, 5783, NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 114, 45683, NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 6, 20194, NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 115, 208, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 7, 6952, NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 116, 4283, NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 8, 11875, NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 117, 16328, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 118, 9809, NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 119, 1894, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 120, 255, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 121, 4342, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 122, 1881, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 123, 2161, NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 124, 8026, NUITKA_BYTECODE_FLAG},
    {"ctypes.wintypes", NULL, 125, 5068, NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 126, 23592, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 9, 57138, NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 127, 4148, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 128, 7738, NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 129, 160697, NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 130, 59403, NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 131, 15773, NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 132, 340, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils._msvccompiler", NULL, 133, 12931, NUITKA_BYTECODE_FLAG},
    {"distutils.archive_util", NULL, 134, 6504, NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 135, 6488, NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 136, 33262, NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 137, 13913, NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 138, 499, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 139, 3631, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 140, 3557, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_msi", NULL, 141, 19588, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 142, 12393, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 143, 8454, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 144, 3846, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 145, 4779, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 146, 16102, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 147, 10445, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 148, 4289, NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 149, 4850, NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 150, 2065, NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 151, 10192, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 152, 13537, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 153, 2254, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 154, 2961, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 155, 1673, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 156, 5078, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 157, 2106, NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 158, 8420, NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 159, 14481, NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 160, 4904, NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 161, 3474, NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 162, 6579, NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 163, 8577, NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 164, 159, NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 165, 2679, NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 166, 5788, NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 167, 34457, NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 168, 5215, NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 169, 6888, NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 170, 10621, NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 171, 5898, NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 172, 9832, NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 173, 2280, NUITKA_BYTECODE_FLAG},
    {"distutils.msvc9compiler", NULL, 174, 17475, NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 175, 14688, NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 176, 5071, NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 177, 12066, NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 178, 8404, NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 179, 6583, NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 180, 15511, NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 181, 7276, NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 182, 5100, NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 183, 75939, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 10, 1075, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 11, 1647, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 184, 5651, NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 185, 79898, NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 186, 12419, NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 187, 14775, NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 188, 3200, NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 189, 11424, NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 190, 7326, NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 191, 1577, NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 12, 5870, NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 192, 10607, NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 193, 12489, NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 194, 16404, NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 195, 22009, NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 196, 1885, NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 197, 37843, NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 198, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 199, 1424, NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 200, 2589, NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 201, 1006, NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 202, 1869, NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 203, 1247, NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 204, 1467, NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 205, 729, NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 206, 1276, NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 207, 5687, NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 208, 9623, NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 209, 7643, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 13, 9507, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 14, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 210, 6295, NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 211, 1846, NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 212, 2364, NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 213, 1374, NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 214, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 215, 3255, NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 216, 2856, NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 217, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 218, 2463, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 219, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 220, 8094, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 221, 2377, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 222, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 223, 2411, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 224, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 225, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 226, 2416, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 227, 2435, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 228, 2413, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 229, 2421, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 230, 2419, NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 231, 2373, NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 232, 2417, NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 233, 7811, NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 234, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 235, 2484, NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 236, 8133, NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 237, 7841, NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 238, 7472, NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 239, 7849, NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 240, 8102, NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 241, 2449, NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 242, 7452, NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 243, 7442, NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 244, 7790, NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 245, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 246, 7994, NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 247, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 248, 7949, NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 249, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 250, 8138, NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 251, 7829, NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 252, 2515, NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 253, 2384, NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 254, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 255, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 256, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 257, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 258, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 259, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 260, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 261, 1380, NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 262, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 263, 1372, NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 264, 2351, NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 265, 2588, NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 266, 1370, NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 15, 5582, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 267, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 268, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 269, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 270, 1401, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 271, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 272, 1399, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 273, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 274, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 275, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 276, 2485, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 277, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 278, 2412, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 279, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 280, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 281, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 282, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 283, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 284, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 285, 2431, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 286, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 287, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 288, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 289, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 290, 2438, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 291, 2349, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 292, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 293, 2401, NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 294, 1858, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 295, 7705, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 296, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 297, 2433, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 298, 2423, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 299, 2367, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 300, 2407, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 301, 2426, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 302, 2567, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 303, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 304, 2434, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 305, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.mbcs", NULL, 306, 1676, NUITKA_BYTECODE_FLAG},
    {"encodings.oem", NULL, 307, 1489, NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 308, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 309, 2508, NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 310, 6280, NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 311, 2380, NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 312, 1727, NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 313, 2966, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 314, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 315, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 316, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 317, 2476, NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 318, 2060, NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 319, 1707, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 320, 4837, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 321, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 322, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 323, 4730, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 324, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 325, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 326, 1536, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 327, 1595, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 328, 4511, NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 329, 3214, NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 330, 3074, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 16, 25899, NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 331, 8392, NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 332, 13338, NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 333, 3320, NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 334, 17510, NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 335, 18704, NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 336, 27814, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 17, 27866, NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 337, 3966, NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 338, 6236, NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 18, 4143, NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 339, 17848, NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 340, 4308, NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 341, 18156, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 19, 6692, NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 342, 14035, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 20, 6353, NUITKA_BYTECODE_FLAG},
    {"html", NULL, 343, 3574, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 344, 50494, NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 345, 11163, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 21, 6020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 346, 34651, NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 347, 53607, NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 22, 15233, NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 348, 34357, NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 349, 41307, NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 350, 4083, NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 351, 9774, NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 23, 3714, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 352, 28570, NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 353, 43675, NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 354, 13538, NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 355, 927, NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 356, 20841, NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 24, 6475, NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 357, 9257, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 25, 80558, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 26, 3419, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 27, 59533, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 28, 12564, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 358, 9809, NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 359, 11136, NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 360, 1916, NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 361, 1861, NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 362, 963, NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 363, 85, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 364, 4842, NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 365, 6115, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 366, 6218, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 367, 12163, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 368, 91, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 369, 1638, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 370, 1237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 371, 621, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 372, 766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 373, 3293, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 374, 2776, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 375, 1107, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 376, 1655, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 377, 2264, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 378, 2402, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 379, 934, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 380, 742, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 381, 746, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 382, 2897, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 383, 3879, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 384, 2745, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 385, 4353, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 386, 504, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 387, 908, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 388, 1092, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 389, 1509, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 390, 1508, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 391, 1536, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 392, 663, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 393, 3055, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 394, 5305, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 395, 896, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 396, 769, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 397, 3041, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 398, 881, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 399, 981, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 400, 4178, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 401, 1348, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 402, 2301, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 403, 2211, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 404, 753, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 405, 1086, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 406, 1104, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 407, 1965, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 408, 803, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 409, 1641, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 410, 678, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 411, 1369, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 412, 1766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 413, 4549, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 414, 1795, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 415, 1507, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 416, 5957, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 417, 1077, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 418, 2487, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 419, 1081, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 420, 1541, NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 421, 8573, NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 422, 5604, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 423, 121, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 424, 5106, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 425, 5630, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 426, 1519, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 427, 6463, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 428, 9741, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 429, 1852, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 430, 15237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 431, 1225, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 432, 24307, NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 433, 20405, NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 434, 3832, NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 435, 34654, NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 29, 65069, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 436, 23189, NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 437, 43163, NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 438, 11983, NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 439, 60229, NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 440, 6441, NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 30, 15996, NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 441, 16080, NUITKA_BYTECODE_FLAG},
    {"msilib", NULL, 442, 15965, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"msilib.schema", NULL, 443, 52135, NUITKA_BYTECODE_FLAG},
    {"msilib.sequence", NULL, 444, 2565, NUITKA_BYTECODE_FLAG},
    {"msilib.text", NULL, 445, 8427, NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 446, 618, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 447, 25199, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 448, 12983, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 449, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 450, 2513, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 451, 8324, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 452, 7602, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 453, 41511, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 454, 24990, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_win32", NULL, 455, 3426, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 456, 10966, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 457, 9519, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 458, 8168, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 459, 5221, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 460, 5150, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 461, 14355, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 462, 7014, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 463, 6661, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 464, 11256, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 465, 11451, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 31, 3742, NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 466, 33939, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 32, 14622, NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 467, 1566, NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 468, 12167, NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 469, 5385, NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 33, 13656, NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 470, 48022, NUITKA_BYTECODE_FLAG},
    {"os", NULL, 471, 31362, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 34, 43899, NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 472, 47181, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 35, 46873, NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 473, 67169, NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 474, 7760, NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 475, 16274, NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 476, 24205, NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 477, 27130, NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 478, 13424, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 479, 10393, NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 480, 16246, NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 481, 14723, NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 482, 22031, NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 483, 7317, NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 484, 10416, NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 485, 84052, NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 486, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 487, 425080, NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 488, 10591, NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 489, 5713, NUITKA_BYTECODE_FLAG},
    {"random", NULL, 36, 20073, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 37, 14387, NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 490, 5268, NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 491, 5720, NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 492, 8146, NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 493, 6497, NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 494, 2155, NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 495, 16900, NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 496, 9455, NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 497, 7501, NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 498, 36741, NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 499, 2808, NUITKA_BYTECODE_FLAG},
    {"site", NULL, 500, 13237, NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 501, 26428, NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 502, 35248, NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 503, 6954, NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 38, 27752, NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 504, 23972, NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 505, 116, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 506, 2469, NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 507, 1894, NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 508, 15107, NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 509, 6324, NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 510, 21612, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 39, 44561, NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 511, 4337, NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 512, 33618, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 513, 7265, NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 514, 10982, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 40, 295, NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 515, 41936, NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 516, 17045, NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 517, 2369, NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 518, 11287, NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 519, 15633, NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 520, 6995, NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 521, 62626, NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 522, 18202, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 41, 23362, NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 523, 13484, NUITKA_BYTECODE_FLAG},
    {"this", NULL, 524, 1226, NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 42, 39941, NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 525, 11742, NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 526, 176163, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter.colorchooser", NULL, 527, 2217, NUITKA_BYTECODE_FLAG},
    {"tkinter.commondialog", NULL, 528, 1077, NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 529, 1619, NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 530, 1437, NUITKA_BYTECODE_FLAG},
    {"tkinter.dnd", NULL, 531, 11227, NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 532, 12193, NUITKA_BYTECODE_FLAG},
    {"tkinter.font", NULL, 533, 6268, NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 534, 2956, NUITKA_BYTECODE_FLAG},
    {"tkinter.scrolledtext", NULL, 535, 2142, NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 536, 10625, NUITKA_BYTECODE_FLAG},
    {"tkinter.tix", NULL, 537, 79372, NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 538, 56663, NUITKA_BYTECODE_FLAG},
    {"token", NULL, 539, 2450, NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 540, 17125, NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 541, 19991, NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 542, 19832, NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 543, 17328, NUITKA_BYTECODE_FLAG},
    {"turtle", NULL, 544, 129923, NUITKA_BYTECODE_FLAG},
    {"types", NULL, 545, 9142, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 43, 62385, NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 546, 3082, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.async_case", NULL, 547, 4148, NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 548, 50449, NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 549, 14501, NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 550, 7499, NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 551, 77331, NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 552, 7256, NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 553, 6981, NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 554, 2185, NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 555, 9900, NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 556, 4396, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 44, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 557, 2774, NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 45, 34252, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 46, 72577, NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 558, 3254, NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 559, 7292, NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 560, 3570, NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 47, 23648, NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 561, 14387, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 48, 13617, NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 562, 18114, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 563, 19483, NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 564, 17085, NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 565, 680, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 566, 16411, NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 567, 7721, NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 568, 5226, NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 569, 5377, NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 570, 14720, NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 571, 8186, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 572, 648, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 573, 5486, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 574, 932, NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 575, 2815, NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 576, 27306, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 577, 2707, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 578, 55339, NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 579, 10656, NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 580, 12459, NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 581, 87, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 582, 1544, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 583, 8399, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 584, 55599, NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 585, 138, NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 586, 261, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 587, 299, NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 588, 3175, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 589, 5409, NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 590, 12460, NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 591, 12387, NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 592, 12884, NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 593, 16809, NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 594, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 595, 34504, NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 596, 29373, NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 597, 5819, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 49, 58479, NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 598);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 52, 28706},
    {"_compression", 54, 4111},
    {"_weakrefset", 63, 7565},
    {"abc", 0, 5299},
    {"base64", 1, 17036},
    {"bz2", 98, 11410},
    {"codecs", 4, 33921},
    {"collections", 5, -46391},
    {"collections.abc", 106, 28705},
    {"copyreg", 116, 4283},
    {"dis", 131, 15773},
    {"encodings", 14, -3859},
    {"encodings.aliases", 210, 6295},
    {"encodings.ascii", 211, 1846},
    {"encodings.base64_codec", 212, 2364},
    {"encodings.big5", 213, 1374},
    {"encodings.big5hkscs", 214, 1384},
    {"encodings.bz2_codec", 215, 3255},
    {"encodings.charmap", 216, 2856},
    {"encodings.cp037", 217, 2387},
    {"encodings.cp1006", 218, 2463},
    {"encodings.cp1026", 219, 2391},
    {"encodings.cp1125", 220, 8094},
    {"encodings.cp1140", 221, 2377},
    {"encodings.cp1250", 222, 2414},
    {"encodings.cp1251", 223, 2411},
    {"encodings.cp1252", 224, 2414},
    {"encodings.cp1253", 225, 2427},
    {"encodings.cp1254", 226, 2416},
    {"encodings.cp1255", 227, 2435},
    {"encodings.cp1256", 228, 2413},
    {"encodings.cp1257", 229, 2421},
    {"encodings.cp1258", 230, 2419},
    {"encodings.cp273", 231, 2373},
    {"encodings.cp424", 232, 2417},
    {"encodings.cp437", 233, 7811},
    {"encodings.cp500", 234, 2387},
    {"encodings.cp720", 235, 2484},
    {"encodings.cp737", 236, 8133},
    {"encodings.cp775", 237, 7841},
    {"encodings.cp850", 238, 7472},
    {"encodings.cp852", 239, 7849},
    {"encodings.cp855", 240, 8102},
    {"encodings.cp856", 241, 2449},
    {"encodings.cp857", 242, 7452},
    {"encodings.cp858", 243, 7442},
    {"encodings.cp860", 244, 7790},
    {"encodings.cp861", 245, 7805},
    {"encodings.cp862", 246, 7994},
    {"encodings.cp863", 247, 7805},
    {"encodings.cp864", 248, 7949},
    {"encodings.cp865", 249, 7805},
    {"encodings.cp866", 250, 8138},
    {"encodings.cp869", 251, 7829},
    {"encodings.cp874", 252, 2515},
    {"encodings.cp875", 253, 2384},
    {"encodings.cp932", 254, 1376},
    {"encodings.cp949", 255, 1376},
    {"encodings.cp950", 256, 1376},
    {"encodings.euc_jis_2004", 257, 1390},
    {"encodings.euc_jisx0213", 258, 1390},
    {"encodings.euc_jp", 259, 1378},
    {"encodings.euc_kr", 260, 1378},
    {"encodings.gb18030", 261, 1380},
    {"encodings.gb2312", 262, 1378},
    {"encodings.gbk", 263, 1372},
    {"encodings.hex_codec", 264, 2351},
    {"encodings.hp_roman8", 265, 2588},
    {"encodings.hz", 266, 1370},
    {"encodings.idna", 15, 5582},
    {"encodings.iso2022_jp", 267, 1391},
    {"encodings.iso2022_jp_1", 268, 1395},
    {"encodings.iso2022_jp_2", 269, 1395},
    {"encodings.iso2022_jp_2004", 270, 1401},
    {"encodings.iso2022_jp_3", 271, 1395},
    {"encodings.iso2022_jp_ext", 272, 1399},
    {"encodings.iso2022_kr", 273, 1391},
    {"encodings.iso8859_1", 274, 2386},
    {"encodings.iso8859_10", 275, 2391},
    {"encodings.iso8859_11", 276, 2485},
    {"encodings.iso8859_13", 277, 2394},
    {"encodings.iso8859_14", 278, 2412},
    {"encodings.iso8859_15", 279, 2391},
    {"encodings.iso8859_16", 280, 2393},
    {"encodings.iso8859_2", 281, 2386},
    {"encodings.iso8859_3", 282, 2393},
    {"encodings.iso8859_4", 283, 2386},
    {"encodings.iso8859_5", 284, 2387},
    {"encodings.iso8859_6", 285, 2431},
    {"encodings.iso8859_7", 286, 2394},
    {"encodings.iso8859_8", 287, 2425},
    {"encodings.iso8859_9", 288, 2386},
    {"encodings.johab", 289, 1376},
    {"encodings.koi8_r", 290, 2438},
    {"encodings.koi8_t", 291, 2349},
    {"encodings.koi8_u", 292, 2424},
    {"encodings.kz1048", 293, 2401},
    {"encodings.latin_1", 294, 1858},
    {"encodings.mac_arabic", 295, 7705},
    {"encodings.mac_centeuro", 296, 2425},
    {"encodings.mac_croatian", 297, 2433},
    {"encodings.mac_cyrillic", 298, 2423},
    {"encodings.mac_farsi", 299, 2367},
    {"encodings.mac_greek", 300, 2407},
    {"encodings.mac_iceland", 301, 2426},
    {"encodings.mac_latin2", 302, 2567},
    {"encodings.mac_roman", 303, 2424},
    {"encodings.mac_romanian", 304, 2434},
    {"encodings.mac_turkish", 305, 2427},
    {"encodings.mbcs", 306, 1676},
    {"encodings.oem", 307, 1489},
    {"encodings.palmos", 308, 2414},
    {"encodings.ptcp154", 309, 2508},
    {"encodings.punycode", 310, 6280},
    {"encodings.quopri_codec", 311, 2380},
    {"encodings.raw_unicode_escape", 312, 1727},
    {"encodings.rot_13", 313, 2966},
    {"encodings.shift_jis", 314, 1384},
    {"encodings.shift_jis_2004", 315, 1394},
    {"encodings.shift_jisx0213", 316, 1394},
    {"encodings.tis_620", 317, 2476},
    {"encodings.undefined", 318, 2060},
    {"encodings.unicode_escape", 319, 1707},
    {"encodings.utf_16", 320, 4837},
    {"encodings.utf_16_be", 321, 1615},
    {"encodings.utf_16_le", 322, 1615},
    {"encodings.utf_32", 323, 4730},
    {"encodings.utf_32_be", 324, 1508},
    {"encodings.utf_32_le", 325, 1508},
    {"encodings.utf_7", 326, 1536},
    {"encodings.utf_8", 327, 1595},
    {"encodings.utf_8_sig", 328, 4511},
    {"encodings.uu_codec", 329, 3214},
    {"encodings.zlib_codec", 330, 3074},
    {"enum", 16, 25899},
    {"functools", 17, 27866},
    {"genericpath", 337, 3966},
    {"heapq", 342, 14035},
    {"importlib", 23, -3714},
    {"importlib._bootstrap", 352, 28570},
    {"importlib._bootstrap_external", 353, 43675},
    {"importlib.machinery", 355, 927},
    {"inspect", 25, 80558},
    {"io", 26, 3419},
    {"keyword", 362, 963},
    {"linecache", 434, 3832},
    {"locale", 435, 34654},
    {"ntpath", 32, 14622},
    {"opcode", 469, 5385},
    {"operator", 33, 13656},
    {"os", 471, 31362},
    {"quopri", 489, 5713},
    {"re", 37, 14387},
    {"reprlib", 490, 5268},
    {"sre_compile", 508, 15107},
    {"sre_constants", 509, 6324},
    {"sre_parse", 510, 21612},
    {"stat", 511, 4337},
    {"stringprep", 514, 10982},
    {"struct", 40, 295},
    {"threading", 42, 39941},
    {"token", 539, 2450},
    {"tokenize", 540, 17125},
    {"types", 545, 9142},
    {"warnings", 48, 13617},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    loadConstantsBlob((PyObject **)bytecode_data, ".bytecode", 598);

    struct frozen_desc *current = _frozen_modules;

    for(;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


