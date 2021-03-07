/* Generated code for Python module 'cryptography.hazmat.backends.interfaces'
 * created by Nuitka version 0.6.12.3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_cryptography$hazmat$backends$interfaces" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$interfaces;
PyDictObject *moduledict_cryptography$hazmat$backends$interfaces;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[237];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cryptography.hazmat.backends.interfaces", 237);

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$interfaces(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cryptography.hazmat.backends.interfaces", 237);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_392cbbcb80a936f8b0ca7cc56b77cc4c;
static PyCodeObject *codeobj_922236d6490fc485587fc7eee3db555a;
static PyCodeObject *codeobj_3597b964d2af15f3974688d11f374713;
static PyCodeObject *codeobj_633f3dce9cf3dd6a6767d7aad86c1396;
static PyCodeObject *codeobj_7437092f015c58846e178c354f369589;
static PyCodeObject *codeobj_e37d8acd3dce107b2eac34ff019e3273;
static PyCodeObject *codeobj_70a556b236d6986a2ec179a2ae0126ca;
static PyCodeObject *codeobj_4edb5c0ad07b665fd59be320e349bf6d;
static PyCodeObject *codeobj_dd86d1002208a07d19107f49899673b7;
static PyCodeObject *codeobj_f6e8f63e67832f44fd24d8986c156a6f;
static PyCodeObject *codeobj_6d116533095972b0c4ad9b1ee4849407;
static PyCodeObject *codeobj_39b3039754abf19669d196cbe942eaf0;
static PyCodeObject *codeobj_3f0ba4bb4189f030bca0c2b14d384765;
static PyCodeObject *codeobj_d684d5ef2cbcde6a71d809b9fe302a72;
static PyCodeObject *codeobj_88901f00d6f65eaa65e21c5eecaf4e82;
static PyCodeObject *codeobj_926862328791144c39480878f519a33e;
static PyCodeObject *codeobj_bc52574de88146e99bf346fc618e534d;
static PyCodeObject *codeobj_7d3d1659b00c5594d083e2e4c49b6fd8;
static PyCodeObject *codeobj_dedc7ab7fa231d2c56c4a1b0a09c2518;
static PyCodeObject *codeobj_505c2fd387ef7bf3401772ac3028f563;
static PyCodeObject *codeobj_21cea52bc5a865d6d5a7c35eb5fa87a6;
static PyCodeObject *codeobj_fe0797cff4ab0c2550e68950e98f1880;
static PyCodeObject *codeobj_3620abd913aa9be0f9e97f7007db89c9;
static PyCodeObject *codeobj_eb01f91737036729ab409eb7eb974e0f;
static PyCodeObject *codeobj_a0761a0ace6d70d004861718caef41a7;
static PyCodeObject *codeobj_4efd29181c24a66d888cc6b3528966f8;
static PyCodeObject *codeobj_a8e830d5fad982dba411bac810c6a303;
static PyCodeObject *codeobj_0b23c09166bf286e5ebb55f0e2af1f72;
static PyCodeObject *codeobj_71019282d5fbc6c85f3b52489cb6df29;
static PyCodeObject *codeobj_6635b6aacca5c150a5a9156ebf4941c7;
static PyCodeObject *codeobj_38005048e479e801d8733897afc0f4d3;
static PyCodeObject *codeobj_609bb2d91ac9ee3cf464ab4880c80f9b;
static PyCodeObject *codeobj_f13ea9359bd8537a81aa0f56f7de7763;
static PyCodeObject *codeobj_32a2c514365b1e95ba559afd5519057c;
static PyCodeObject *codeobj_4faed056ae55c385466b6b61d97f9e5a;
static PyCodeObject *codeobj_cab3a212adabfa06ec2fa8394df7dbd3;
static PyCodeObject *codeobj_1417875544bab4939b5273fb1becd3a6;
static PyCodeObject *codeobj_be137fdcc8c9377a9d5262cca0b24dfd;
static PyCodeObject *codeobj_be7a5ce56164731077ee6effbc5ff602;
static PyCodeObject *codeobj_c623b6ea28ecf21fec486b3040fd95bb;
static PyCodeObject *codeobj_6a5de0a07c9360f14ad58838f0cd4dc0;
static PyCodeObject *codeobj_53139ad09a431e62b3cf5ed5791d3085;
static PyCodeObject *codeobj_f3b04f51c9592b99ddc92c9b7bb73585;
static PyCodeObject *codeobj_20dc1514abd20caa927e619b0d39baf0;
static PyCodeObject *codeobj_9f97fc2bc01cc3c7fd24beaee99605ea;
static PyCodeObject *codeobj_26c17e2e5c40c199b0fd5691faeef990;
static PyCodeObject *codeobj_de5a72995f572090cb04d0ac53666537;
static PyCodeObject *codeobj_27b9ccab69bdb9d9ce60acd787086a01;
static PyCodeObject *codeobj_67746aaf256f2a3f62f964ddc35cc87e;
static PyCodeObject *codeobj_0e9b50b18b3b95cfe35feb5e18797cfd;
static PyCodeObject *codeobj_ba91519dc65aeabe3a14fe6b7a38f971;
static PyCodeObject *codeobj_fef09adbe07c7c14dd3035a8a92a25ac;
static PyCodeObject *codeobj_986b476d9ab40e0da3a4a2192cca2c2f;
static PyCodeObject *codeobj_a0979e8c8695310bb75b01936e49415d;
static PyCodeObject *codeobj_1964973f0777a88fe18b795145f7fb6e;
static PyCodeObject *codeobj_be41e04a08504d5df8a6761b10eaaa1d;
static PyCodeObject *codeobj_5528783e8d7332111cd95544c44fe88f;
static PyCodeObject *codeobj_3b273641ca9fa51ded093f6da25afc9d;
static PyCodeObject *codeobj_0964dae798cd9b79e3b17f7a3f839562;
static PyCodeObject *codeobj_bda58d41ce792a52d09b01c8c128e436;
static PyCodeObject *codeobj_b9b6484f06b9be2060a6f1397693392c;
static PyCodeObject *codeobj_159be96c710566a42080ad35f812f3a4;
static PyCodeObject *codeobj_f7ff555c429ca077e808e91ac1e96a7c;
static PyCodeObject *codeobj_ce9795324949c5fceadbd28abbe9580c;
static PyCodeObject *codeobj_9db0ecec2e22d3c3349592ebcfdb2bd8;
static PyCodeObject *codeobj_302c39aca960d10a1f724723317cd257;
static PyCodeObject *codeobj_190ce58cb394c68cf08d59ec5f07fb7d;
static PyCodeObject *codeobj_eb3a0b9c3b1cbaa51043c132597b918f;
static PyCodeObject *codeobj_a8bc822f9abc5a46f3427bd496a57e3f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[211]); CHECK_OBJECT(module_filename_obj);
    codeobj_392cbbcb80a936f8b0ca7cc56b77cc4c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[212], NULL, NULL, 0, 0, 0);
    codeobj_922236d6490fc485587fc7eee3db555a = MAKE_CODEOBJECT(module_filename_obj, 58, CO_NOFREE, mod_consts[95], mod_consts[213], NULL, 0, 0, 0);
    codeobj_3597b964d2af15f3974688d11f374713 = MAKE_CODEOBJECT(module_filename_obj, 9, CO_NOFREE, mod_consts[73], mod_consts[213], NULL, 0, 0, 0);
    codeobj_633f3dce9cf3dd6a6767d7aad86c1396 = MAKE_CODEOBJECT(module_filename_obj, 242, CO_NOFREE, mod_consts[161], mod_consts[213], NULL, 0, 0, 0);
    codeobj_7437092f015c58846e178c354f369589 = MAKE_CODEOBJECT(module_filename_obj, 321, CO_NOFREE, mod_consts[189], mod_consts[213], NULL, 0, 0, 0);
    codeobj_e37d8acd3dce107b2eac34ff019e3273 = MAKE_CODEOBJECT(module_filename_obj, 123, CO_NOFREE, mod_consts[119], mod_consts[213], NULL, 0, 0, 0);
    codeobj_70a556b236d6986a2ec179a2ae0126ca = MAKE_CODEOBJECT(module_filename_obj, 174, CO_NOFREE, mod_consts[137], mod_consts[213], NULL, 0, 0, 0);
    codeobj_4edb5c0ad07b665fd59be320e349bf6d = MAKE_CODEOBJECT(module_filename_obj, 43, CO_NOFREE, mod_consts[89], mod_consts[213], NULL, 0, 0, 0);
    codeobj_dd86d1002208a07d19107f49899673b7 = MAKE_CODEOBJECT(module_filename_obj, 29, CO_NOFREE, mod_consts[83], mod_consts[213], NULL, 0, 0, 0);
    codeobj_f6e8f63e67832f44fd24d8986c156a6f = MAKE_CODEOBJECT(module_filename_obj, 72, CO_NOFREE, mod_consts[101], mod_consts[213], NULL, 0, 0, 0);
    codeobj_6d116533095972b0c4ad9b1ee4849407 = MAKE_CODEOBJECT(module_filename_obj, 221, CO_NOFREE, mod_consts[153], mod_consts[213], NULL, 0, 0, 0);
    codeobj_39b3039754abf19669d196cbe942eaf0 = MAKE_CODEOBJECT(module_filename_obj, 89, CO_NOFREE, mod_consts[107], mod_consts[213], NULL, 0, 0, 0);
    codeobj_3f0ba4bb4189f030bca0c2b14d384765 = MAKE_CODEOBJECT(module_filename_obj, 375, CO_NOFREE, mod_consts[208], mod_consts[213], NULL, 0, 0, 0);
    codeobj_d684d5ef2cbcde6a71d809b9fe302a72 = MAKE_CODEOBJECT(module_filename_obj, 263, CO_NOFREE, mod_consts[169], mod_consts[213], NULL, 0, 0, 0);
    codeobj_88901f00d6f65eaa65e21c5eecaf4e82 = MAKE_CODEOBJECT(module_filename_obj, 11, CO_NOFREE, mod_consts[76], mod_consts[214], NULL, 3, 0, 0);
    codeobj_926862328791144c39480878f519a33e = MAKE_CODEOBJECT(module_filename_obj, 60, CO_NOFREE, mod_consts[96], mod_consts[215], NULL, 2, 0, 0);
    codeobj_bc52574de88146e99bf346fc618e534d = MAKE_CODEOBJECT(module_filename_obj, 66, CO_NOFREE, mod_consts[98], mod_consts[215], NULL, 2, 0, 0);
    codeobj_7d3d1659b00c5594d083e2e4c49b6fd8 = MAKE_CODEOBJECT(module_filename_obj, 37, CO_NOFREE, mod_consts[86], mod_consts[215], NULL, 2, 0, 0);
    codeobj_dedc7ab7fa231d2c56c4a1b0a09c2518 = MAKE_CODEOBJECT(module_filename_obj, 52, CO_NOFREE, mod_consts[92], mod_consts[216], NULL, 3, 0, 0);
    codeobj_505c2fd387ef7bf3401772ac3028f563 = MAKE_CODEOBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[80], mod_consts[214], NULL, 3, 0, 0);
    codeobj_21cea52bc5a865d6d5a7c35eb5fa87a6 = MAKE_CODEOBJECT(module_filename_obj, 17, CO_NOFREE, mod_consts[78], mod_consts[214], NULL, 3, 0, 0);
    codeobj_fe0797cff4ab0c2550e68950e98f1880 = MAKE_CODEOBJECT(module_filename_obj, 295, CO_NOFREE, mod_consts[180], mod_consts[217], NULL, 4, 0, 0);
    codeobj_3620abd913aa9be0f9e97f7007db89c9 = MAKE_CODEOBJECT(module_filename_obj, 301, CO_NOFREE, mod_consts[182], mod_consts[217], NULL, 4, 0, 0);
    codeobj_eb01f91737036729ab409eb7eb974e0f = MAKE_CODEOBJECT(module_filename_obj, 289, CO_NOFREE, mod_consts[178], mod_consts[217], NULL, 4, 0, 0);
    codeobj_a0761a0ace6d70d004861718caef41a7 = MAKE_CODEOBJECT(module_filename_obj, 308, CO_NOFREE, mod_consts[184], mod_consts[218], NULL, 2, 0, 0);
    codeobj_4efd29181c24a66d888cc6b3528966f8 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_NOFREE, mod_consts[150], mod_consts[219], NULL, 3, 0, 0);
    codeobj_a8e830d5fad982dba411bac810c6a303 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_NOFREE, mod_consts[104], mod_consts[220], NULL, 6, 0, 0);
    codeobj_0b23c09166bf286e5ebb55f0e2af1f72 = MAKE_CODEOBJECT(module_filename_obj, 377, CO_NOFREE, mod_consts[209], mod_consts[221], NULL, 7, 0, 0);
    codeobj_71019282d5fbc6c85f3b52489cb6df29 = MAKE_CODEOBJECT(module_filename_obj, 362, CO_NOFREE, mod_consts[203], mod_consts[222], NULL, 4, 0, 0);
    codeobj_6635b6aacca5c150a5a9156ebf4941c7 = MAKE_CODEOBJECT(module_filename_obj, 368, CO_NOFREE, mod_consts[205], mod_consts[223], NULL, 1, 0, 0);
    codeobj_38005048e479e801d8733897afc0f4d3 = MAKE_CODEOBJECT(module_filename_obj, 144, CO_NOFREE, mod_consts[126], mod_consts[215], NULL, 2, 0, 0);
    codeobj_609bb2d91ac9ee3cf464ab4880c80f9b = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE, mod_consts[128], mod_consts[224], NULL, 4, 0, 0);
    codeobj_f13ea9359bd8537a81aa0f56f7de7763 = MAKE_CODEOBJECT(module_filename_obj, 209, CO_NOFREE, mod_consts[148], mod_consts[225], NULL, 3, 0, 0);
    codeobj_32a2c514365b1e95ba559afd5519057c = MAKE_CODEOBJECT(module_filename_obj, 176, CO_NOFREE, mod_consts[138], mod_consts[226], NULL, 3, 0, 0);
    codeobj_4faed056ae55c385466b6b61d97f9e5a = MAKE_CODEOBJECT(module_filename_obj, 185, CO_NOFREE, mod_consts[140], mod_consts[227], NULL, 2, 0, 0);
    codeobj_cab3a212adabfa06ec2fa8394df7dbd3 = MAKE_CODEOBJECT(module_filename_obj, 323, CO_NOFREE, mod_consts[190], mod_consts[228], NULL, 3, 0, 0);
    codeobj_1417875544bab4939b5273fb1becd3a6 = MAKE_CODEOBJECT(module_filename_obj, 330, CO_NOFREE, mod_consts[192], mod_consts[229], NULL, 2, 0, 0);
    codeobj_be137fdcc8c9377a9d5262cca0b24dfd = MAKE_CODEOBJECT(module_filename_obj, 337, CO_NOFREE, mod_consts[194], mod_consts[228], NULL, 3, 0, 0);
    codeobj_be7a5ce56164731077ee6effbc5ff602 = MAKE_CODEOBJECT(module_filename_obj, 125, CO_NOFREE, mod_consts[120], mod_consts[230], NULL, 2, 0, 0);
    codeobj_c623b6ea28ecf21fec486b3040fd95bb = MAKE_CODEOBJECT(module_filename_obj, 131, CO_NOFREE, mod_consts[122], mod_consts[229], NULL, 2, 0, 0);
    codeobj_6a5de0a07c9360f14ad58838f0cd4dc0 = MAKE_CODEOBJECT(module_filename_obj, 138, CO_NOFREE, mod_consts[124], mod_consts[230], NULL, 2, 0, 0);
    codeobj_53139ad09a431e62b3cf5ed5791d3085 = MAKE_CODEOBJECT(module_filename_obj, 191, CO_NOFREE, mod_consts[142], mod_consts[227], NULL, 2, 0, 0);
    codeobj_f3b04f51c9592b99ddc92c9b7bb73585 = MAKE_CODEOBJECT(module_filename_obj, 104, CO_NOFREE, mod_consts[112], mod_consts[231], NULL, 3, 0, 0);
    codeobj_20dc1514abd20caa927e619b0d39baf0 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_NOFREE, mod_consts[108], mod_consts[231], NULL, 3, 0, 0);
    codeobj_9f97fc2bc01cc3c7fd24beaee99605ea = MAKE_CODEOBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[84], mod_consts[215], NULL, 2, 0, 0);
    codeobj_26c17e2e5c40c199b0fd5691faeef990 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_NOFREE, mod_consts[90], mod_consts[215], NULL, 2, 0, 0);
    codeobj_de5a72995f572090cb04d0ac53666537 = MAKE_CODEOBJECT(module_filename_obj, 257, CO_NOFREE, mod_consts[166], mod_consts[232], NULL, 2, 0, 0);
    codeobj_27b9ccab69bdb9d9ce60acd787086a01 = MAKE_CODEOBJECT(module_filename_obj, 244, CO_NOFREE, mod_consts[162], mod_consts[233], NULL, 3, 0, 0);
    codeobj_67746aaf256f2a3f62f964ddc35cc87e = MAKE_CODEOBJECT(module_filename_obj, 251, CO_NOFREE, mod_consts[164], mod_consts[232], NULL, 2, 0, 0);
    codeobj_0e9b50b18b3b95cfe35feb5e18797cfd = MAKE_CODEOBJECT(module_filename_obj, 271, CO_NOFREE, mod_consts[172], mod_consts[232], NULL, 2, 0, 0);
    codeobj_ba91519dc65aeabe3a14fe6b7a38f971 = MAKE_CODEOBJECT(module_filename_obj, 277, CO_NOFREE, mod_consts[174], mod_consts[232], NULL, 2, 0, 0);
    codeobj_fef09adbe07c7c14dd3035a8a92a25ac = MAKE_CODEOBJECT(module_filename_obj, 356, CO_NOFREE, mod_consts[200], mod_consts[234], NULL, 2, 0, 0);
    codeobj_986b476d9ab40e0da3a4a2192cca2c2f = MAKE_CODEOBJECT(module_filename_obj, 344, CO_NOFREE, mod_consts[196], mod_consts[234], NULL, 2, 0, 0);
    codeobj_a0979e8c8695310bb75b01936e49415d = MAKE_CODEOBJECT(module_filename_obj, 350, CO_NOFREE, mod_consts[198], mod_consts[234], NULL, 2, 0, 0);
    codeobj_1964973f0777a88fe18b795145f7fb6e = MAKE_CODEOBJECT(module_filename_obj, 168, CO_NOFREE, mod_consts[134], mod_consts[234], NULL, 2, 0, 0);
    codeobj_be41e04a08504d5df8a6761b10eaaa1d = MAKE_CODEOBJECT(module_filename_obj, 156, CO_NOFREE, mod_consts[130], mod_consts[234], NULL, 2, 0, 0);
    codeobj_5528783e8d7332111cd95544c44fe88f = MAKE_CODEOBJECT(module_filename_obj, 162, CO_NOFREE, mod_consts[132], mod_consts[234], NULL, 2, 0, 0);
    codeobj_3b273641ca9fa51ded093f6da25afc9d = MAKE_CODEOBJECT(module_filename_obj, 203, CO_NOFREE, mod_consts[146], mod_consts[234], NULL, 2, 0, 0);
    codeobj_0964dae798cd9b79e3b17f7a3f839562 = MAKE_CODEOBJECT(module_filename_obj, 197, CO_NOFREE, mod_consts[144], mod_consts[234], NULL, 2, 0, 0);
    codeobj_bda58d41ce792a52d09b01c8c128e436 = MAKE_CODEOBJECT(module_filename_obj, 236, CO_NOFREE, mod_consts[158], mod_consts[232], NULL, 2, 0, 0);
    codeobj_b9b6484f06b9be2060a6f1397693392c = MAKE_CODEOBJECT(module_filename_obj, 223, CO_NOFREE, mod_consts[154], mod_consts[233], NULL, 3, 0, 0);
    codeobj_159be96c710566a42080ad35f812f3a4 = MAKE_CODEOBJECT(module_filename_obj, 230, CO_NOFREE, mod_consts[156], mod_consts[232], NULL, 2, 0, 0);
    codeobj_f7ff555c429ca077e808e91ac1e96a7c = MAKE_CODEOBJECT(module_filename_obj, 265, CO_NOFREE, mod_consts[170], mod_consts[232], NULL, 2, 0, 0);
    codeobj_ce9795324949c5fceadbd28abbe9580c = MAKE_CODEOBJECT(module_filename_obj, 283, CO_NOFREE, mod_consts[176], mod_consts[232], NULL, 2, 0, 0);
    codeobj_9db0ecec2e22d3c3349592ebcfdb2bd8 = MAKE_CODEOBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[114], mod_consts[234], NULL, 2, 0, 0);
    codeobj_302c39aca960d10a1f724723317cd257 = MAKE_CODEOBJECT(module_filename_obj, 117, CO_NOFREE, mod_consts[116], mod_consts[234], NULL, 2, 0, 0);
    codeobj_190ce58cb394c68cf08d59ec5f07fb7d = MAKE_CODEOBJECT(module_filename_obj, 74, CO_NOFREE, mod_consts[102], mod_consts[215], NULL, 2, 0, 0);
    codeobj_eb3a0b9c3b1cbaa51043c132597b918f = MAKE_CODEOBJECT(module_filename_obj, 98, CO_NOFREE, mod_consts[110], mod_consts[235], NULL, 2, 0, 0);
    codeobj_a8bc822f9abc5a46f3427bd496a57e3f = MAKE_CODEOBJECT(module_filename_obj, 315, CO_NOFREE, mod_consts[186], mod_consts[236], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__38_load_pem_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__39_load_der_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__40_load_der_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__41_load_pem_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__42_create_x509_csr();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__43_create_x509_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__44_create_x509_crl();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__45_create_x509_revoked_certificate();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__46_x509_name_bytes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__47_generate_dh_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__48_generate_dh_private_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__49_generate_dh_private_key_and_parameters();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__50_load_dh_private_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__51_load_dh_public_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__52_load_dh_parameter_numbers();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__53_dh_parameters_supported(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__54_dh_x942_serialization_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__55_derive_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cipher = python_pars[1];
    PyObject *par_mode = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    par_cipher = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    par_cipher = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cipher = python_pars[1];
    PyObject *par_mode = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    par_cipher = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    par_cipher = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cipher = python_pars[1];
    PyObject *par_mode = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    par_cipher = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_cipher);
    Py_DECREF(par_cipher);
    par_cipher = NULL;
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    par_mode = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_algorithm = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    par_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    par_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *par_length = python_pars[2];
    PyObject *par_salt = python_pars[3];
    PyObject *par_iterations = python_pars[4];
    PyObject *par_key_material = python_pars[5];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_salt);
    Py_DECREF(par_salt);
    par_salt = NULL;
    CHECK_OBJECT(par_iterations);
    Py_DECREF(par_iterations);
    par_iterations = NULL;
    CHECK_OBJECT(par_key_material);
    Py_DECREF(par_key_material);
    par_key_material = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_salt);
    Py_DECREF(par_salt);
    par_salt = NULL;
    CHECK_OBJECT(par_iterations);
    Py_DECREF(par_iterations);
    par_iterations = NULL;
    CHECK_OBJECT(par_key_material);
    Py_DECREF(par_key_material);
    par_key_material = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_public_exponent = python_pars[1];
    PyObject *par_key_size = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_public_exponent);
    Py_DECREF(par_public_exponent);
    par_public_exponent = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_public_exponent);
    Py_DECREF(par_public_exponent);
    par_public_exponent = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_padding = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    par_padding = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    par_padding = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_public_exponent = python_pars[1];
    PyObject *par_key_size = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_public_exponent);
    Py_DECREF(par_public_exponent);
    par_public_exponent = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_public_exponent);
    Py_DECREF(par_public_exponent);
    par_public_exponent = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key_size = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parameters = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    par_parameters = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    par_parameters = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key_size = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_p = python_pars[1];
    PyObject *par_q = python_pars[2];
    PyObject *par_g = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    par_p = NULL;
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    par_q = NULL;
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    par_g = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    par_p = NULL;
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    par_q = NULL;
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    par_g = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_signature_algorithm = python_pars[1];
    PyObject *par_curve = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_signature_algorithm);
    Py_DECREF(par_signature_algorithm);
    par_signature_algorithm = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_signature_algorithm);
    Py_DECREF(par_signature_algorithm);
    par_signature_algorithm = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_curve = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_curve = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *par_curve = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_private_value = python_pars[1];
    PyObject *par_curve = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_private_value);
    Py_DECREF(par_private_value);
    par_private_value = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_private_value);
    Py_DECREF(par_private_value);
    par_private_value = NULL;
    CHECK_OBJECT(par_curve);
    Py_DECREF(par_curve);
    par_curve = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_password = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_password = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__38_load_pem_x509_certificate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__39_load_der_x509_certificate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__40_load_der_x509_csr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__41_load_pem_x509_csr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__42_create_x509_csr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_builder = python_pars[1];
    PyObject *par_private_key = python_pars[2];
    PyObject *par_algorithm = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    par_private_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    par_private_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__43_create_x509_certificate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_builder = python_pars[1];
    PyObject *par_private_key = python_pars[2];
    PyObject *par_algorithm = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    par_private_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    par_private_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__44_create_x509_crl(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_builder = python_pars[1];
    PyObject *par_private_key = python_pars[2];
    PyObject *par_algorithm = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    par_private_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;
    CHECK_OBJECT(par_private_key);
    Py_DECREF(par_private_key);
    par_private_key = NULL;
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    par_algorithm = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__45_create_x509_revoked_certificate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_builder = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_builder);
    Py_DECREF(par_builder);
    par_builder = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__46_x509_name_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__47_generate_dh_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_generator = python_pars[1];
    PyObject *par_key_size = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_generator);
    Py_DECREF(par_generator);
    par_generator = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_generator);
    Py_DECREF(par_generator);
    par_generator = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__48_generate_dh_private_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parameters = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    par_parameters = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_parameters);
    Py_DECREF(par_parameters);
    par_parameters = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__49_generate_dh_private_key_and_parameters(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_generator = python_pars[1];
    PyObject *par_key_size = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_generator);
    Py_DECREF(par_generator);
    par_generator = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_generator);
    Py_DECREF(par_generator);
    par_generator = NULL;
    CHECK_OBJECT(par_key_size);
    Py_DECREF(par_key_size);
    par_key_size = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__50_load_dh_private_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__51_load_dh_public_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__52_load_dh_parameter_numbers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numbers = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_numbers);
    Py_DECREF(par_numbers);
    par_numbers = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__53_dh_parameters_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_p = python_pars[1];
    PyObject *par_g = python_pars[2];
    PyObject *par_q = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    par_p = NULL;
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    par_g = NULL;
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    par_q = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    par_p = NULL;
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    par_g = NULL;
    CHECK_OBJECT(par_q);
    Py_DECREF(par_q);
    par_q = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__54_dh_x942_serialization_supported(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function__55_derive_scrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key_material = python_pars[1];
    PyObject *par_salt = python_pars[2];
    PyObject *par_length = python_pars[3];
    PyObject *par_n = python_pars[4];
    PyObject *par_r = python_pars[5];
    PyObject *par_p = python_pars[6];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key_material);
    Py_DECREF(par_key_material);
    par_key_material = NULL;
    CHECK_OBJECT(par_salt);
    Py_DECREF(par_salt);
    par_salt = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    par_n = NULL;
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    par_r = NULL;
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    par_p = NULL;
    goto function_return_exit;
    // End of try:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_key_material);
    Py_DECREF(par_key_material);
    par_key_material = NULL;
    CHECK_OBJECT(par_salt);
    Py_DECREF(par_salt);
    par_salt = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    par_n = NULL;
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    par_r = NULL;
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    par_p = NULL;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_190ce58cb394c68cf08d59ec5f07fb7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        mod_consts[105],
#endif
        codeobj_a8e830d5fad982dba411bac810c6a303,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_20dc1514abd20caa927e619b0d39baf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_eb3a0b9c3b1cbaa51043c132597b918f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_f3b04f51c9592b99ddc92c9b7bb73585,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_9db0ecec2e22d3c3349592ebcfdb2bd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_302c39aca960d10a1f724723317cd257,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_be7a5ce56164731077ee6effbc5ff602,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_c623b6ea28ecf21fec486b3040fd95bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_6a5de0a07c9360f14ad58838f0cd4dc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_88901f00d6f65eaa65e21c5eecaf4e82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_38005048e479e801d8733897afc0f4d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_609bb2d91ac9ee3cf464ab4880c80f9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_be41e04a08504d5df8a6761b10eaaa1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_5528783e8d7332111cd95544c44fe88f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_1964973f0777a88fe18b795145f7fb6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_32a2c514365b1e95ba559afd5519057c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_4faed056ae55c385466b6b61d97f9e5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_53139ad09a431e62b3cf5ed5791d3085,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_0964dae798cd9b79e3b17f7a3f839562,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_3b273641ca9fa51ded093f6da25afc9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[79],
#endif
        codeobj_21cea52bc5a865d6d5a7c35eb5fa87a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_f13ea9359bd8537a81aa0f56f7de7763,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_4efd29181c24a66d888cc6b3528966f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_b9b6484f06b9be2060a6f1397693392c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_159be96c710566a42080ad35f812f3a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_bda58d41ce792a52d09b01c8c128e436,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_27b9ccab69bdb9d9ce60acd787086a01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_67746aaf256f2a3f62f964ddc35cc87e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_de5a72995f572090cb04d0ac53666537,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__38_load_pem_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__38_load_pem_x509_certificate,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_f7ff555c429ca077e808e91ac1e96a7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__39_load_der_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__39_load_der_x509_certificate,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_0e9b50b18b3b95cfe35feb5e18797cfd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_505c2fd387ef7bf3401772ac3028f563,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__40_load_der_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__40_load_der_x509_csr,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_ba91519dc65aeabe3a14fe6b7a38f971,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__41_load_pem_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__41_load_pem_x509_csr,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_ce9795324949c5fceadbd28abbe9580c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__42_create_x509_csr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__42_create_x509_csr,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_eb01f91737036729ab409eb7eb974e0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__43_create_x509_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__43_create_x509_certificate,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_fe0797cff4ab0c2550e68950e98f1880,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__44_create_x509_crl() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__44_create_x509_crl,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_3620abd913aa9be0f9e97f7007db89c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__45_create_x509_revoked_certificate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__45_create_x509_revoked_certificate,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_a0761a0ace6d70d004861718caef41a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__46_x509_name_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__46_x509_name_bytes,
        mod_consts[186],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_a8bc822f9abc5a46f3427bd496a57e3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__47_generate_dh_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__47_generate_dh_parameters,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_cab3a212adabfa06ec2fa8394df7dbd3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__48_generate_dh_private_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__48_generate_dh_private_key,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_1417875544bab4939b5273fb1becd3a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__49_generate_dh_private_key_and_parameters() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__49_generate_dh_private_key_and_parameters,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_be137fdcc8c9377a9d5262cca0b24dfd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_9f97fc2bc01cc3c7fd24beaee99605ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__50_load_dh_private_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__50_load_dh_private_numbers,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_986b476d9ab40e0da3a4a2192cca2c2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[48],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__51_load_dh_public_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__51_load_dh_public_numbers,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_a0979e8c8695310bb75b01936e49415d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__52_load_dh_parameter_numbers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__52_load_dh_parameter_numbers,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_fef09adbe07c7c14dd3035a8a92a25ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__53_dh_parameters_supported(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__53_dh_parameters_supported,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_71019282d5fbc6c85f3b52489cb6df29,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__54_dh_x942_serialization_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__54_dh_x942_serialization_supported,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_6635b6aacca5c150a5a9156ebf4941c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__55_derive_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__55_derive_scrypt,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_0b23c09166bf286e5ebb55f0e2af1f72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_7d3d1659b00c5594d083e2e4c49b6fd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_26c17e2e5c40c199b0fd5691faeef990,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_dedc7ab7fa231d2c56c4a1b0a09c2518,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_926862328791144c39480878f519a33e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_bc52574de88146e99bf346fc618e534d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_cryptography$hazmat$backends$interfaces[] = {
    impl_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx,
    impl_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx,
    impl_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx,
    impl_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx,
    impl_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx,
    impl_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac,
    impl_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters,
    impl_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters,
    impl_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters,
    impl_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters,
    impl_cryptography$hazmat$backends$interfaces$$$function__38_load_pem_x509_certificate,
    impl_cryptography$hazmat$backends$interfaces$$$function__39_load_der_x509_certificate,
    impl_cryptography$hazmat$backends$interfaces$$$function__40_load_der_x509_csr,
    impl_cryptography$hazmat$backends$interfaces$$$function__41_load_pem_x509_csr,
    impl_cryptography$hazmat$backends$interfaces$$$function__42_create_x509_csr,
    impl_cryptography$hazmat$backends$interfaces$$$function__43_create_x509_certificate,
    impl_cryptography$hazmat$backends$interfaces$$$function__44_create_x509_crl,
    impl_cryptography$hazmat$backends$interfaces$$$function__45_create_x509_revoked_certificate,
    impl_cryptography$hazmat$backends$interfaces$$$function__46_x509_name_bytes,
    impl_cryptography$hazmat$backends$interfaces$$$function__47_generate_dh_parameters,
    impl_cryptography$hazmat$backends$interfaces$$$function__48_generate_dh_private_key,
    impl_cryptography$hazmat$backends$interfaces$$$function__49_generate_dh_private_key_and_parameters,
    impl_cryptography$hazmat$backends$interfaces$$$function__50_load_dh_private_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__51_load_dh_public_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__52_load_dh_parameter_numbers,
    impl_cryptography$hazmat$backends$interfaces$$$function__53_dh_parameters_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__54_dh_x942_serialization_supported,
    impl_cryptography$hazmat$backends$interfaces$$$function__55_derive_scrypt,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_cryptography$hazmat$backends$interfaces;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_cryptography$hazmat$backends$interfaces) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_cryptography$hazmat$backends$interfaces[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_cryptography$hazmat$backends$interfaces,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cryptography.hazmat.backends.interfaces";

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cryptography$hazmat$backends$interfaces = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.backends.interfaces: Skipping module init, already done.\n");
#endif

        return module_cryptography$hazmat$backends$interfaces;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.backends.interfaces: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$backends$interfaces\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$backends$interfaces = MODULE_DICT(module_cryptography$hazmat$backends$interfaces);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$backends$interfaces,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$backends$interfaces);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$backends$interfaces);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_392cbbcb80a936f8b0ca7cc56b77cc4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3597b964d2af15f3974688d11f374713_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3597b964d2af15f3974688d11f374713_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29 = NULL;
    struct Nuitka_FrameObject *frame_dd86d1002208a07d19107f49899673b7_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd86d1002208a07d19107f49899673b7_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43 = NULL;
    struct Nuitka_FrameObject *frame_4edb5c0ad07b665fd59be320e349bf6d_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58 = NULL;
    struct Nuitka_FrameObject *frame_922236d6490fc485587fc7eee3db555a_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_922236d6490fc485587fc7eee3db555a_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72 = NULL;
    struct Nuitka_FrameObject *frame_f6e8f63e67832f44fd24d8986c156a6f_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89 = NULL;
    struct Nuitka_FrameObject *frame_39b3039754abf19669d196cbe942eaf0_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_39b3039754abf19669d196cbe942eaf0_7 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123 = NULL;
    struct Nuitka_FrameObject *frame_e37d8acd3dce107b2eac34ff019e3273_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e37d8acd3dce107b2eac34ff019e3273_8 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174 = NULL;
    struct Nuitka_FrameObject *frame_70a556b236d6986a2ec179a2ae0126ca_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_70a556b236d6986a2ec179a2ae0126ca_9 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221 = NULL;
    struct Nuitka_FrameObject *frame_6d116533095972b0c4ad9b1ee4849407_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6d116533095972b0c4ad9b1ee4849407_10 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242 = NULL;
    struct Nuitka_FrameObject *frame_633f3dce9cf3dd6a6767d7aad86c1396_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11 = NULL;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263 = NULL;
    struct Nuitka_FrameObject *frame_d684d5ef2cbcde6a71d809b9fe302a72_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12 = NULL;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321 = NULL;
    struct Nuitka_FrameObject *frame_7437092f015c58846e178c354f369589_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7437092f015c58846e178c354f369589_13 = NULL;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375 = NULL;
    struct Nuitka_FrameObject *frame_3f0ba4bb4189f030bca0c2b14d384765_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_392cbbcb80a936f8b0ca7cc56b77cc4c = MAKE_MODULE_FRAME(codeobj_392cbbcb80a936f8b0ca7cc56b77cc4c, module_cryptography$hazmat$backends$interfaces);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_392cbbcb80a936f8b0ca7cc56b77cc4c);
    assert(Py_REFCNT(frame_392cbbcb80a936f8b0ca7cc56b77cc4c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[57], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[58], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[60];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[61];
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_1;
        tmp_dict_key_1 = mod_consts[62];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_expression_name_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[63]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        tmp_assign_source_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[62];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_1:;
        tmp_bases_name_1 = mod_consts[64];
        tmp_assign_source_6 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[65]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[65]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        tmp_args_name_1 = mod_consts[66];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 9;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[67]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[69];
        tmp_getattr_default_1 = mod_consts[70];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[69]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 9;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_3597b964d2af15f3974688d11f374713_2)) {
            Py_XDECREF(cache_frame_3597b964d2af15f3974688d11f374713_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3597b964d2af15f3974688d11f374713_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3597b964d2af15f3974688d11f374713_2 = MAKE_FUNCTION_FRAME(codeobj_3597b964d2af15f3974688d11f374713, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3597b964d2af15f3974688d11f374713_2->m_type_description == NULL);
        frame_3597b964d2af15f3974688d11f374713_2 = cache_frame_3597b964d2af15f3974688d11f374713_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3597b964d2af15f3974688d11f374713_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3597b964d2af15f3974688d11f374713_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[60]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 10;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                }
            }



            tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__1_cipher_supported();

            frame_3597b964d2af15f3974688d11f374713_2->m_frame.f_lineno = 10;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[75], tmp_args_element_name_1);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[60]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 16;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_2);
                }
            }



            tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__2_create_symmetric_encryption_ctx();

            frame_3597b964d2af15f3974688d11f374713_2->m_frame.f_lineno = 16;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[75], tmp_args_element_name_2);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_3 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[60]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 22;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_3);
                }
            }



            tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__3_create_symmetric_decryption_ctx();

            frame_3597b964d2af15f3974688d11f374713_2->m_frame.f_lineno = 22;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[75], tmp_args_element_name_3);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3597b964d2af15f3974688d11f374713_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3597b964d2af15f3974688d11f374713_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3597b964d2af15f3974688d11f374713_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3597b964d2af15f3974688d11f374713_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3597b964d2af15f3974688d11f374713_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3597b964d2af15f3974688d11f374713_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3597b964d2af15f3974688d11f374713_2 == cache_frame_3597b964d2af15f3974688d11f374713_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3597b964d2af15f3974688d11f374713_2);
            cache_frame_3597b964d2af15f3974688d11f374713_2 = NULL;
        }

        assertFrameObject(frame_3597b964d2af15f3974688d11f374713_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[73];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 9;
            tmp_assign_source_10 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9);
        locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9);
        locals_cryptography$hazmat$backends$interfaces$$$class__1_CipherBackend_9 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 9;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_6;
        tmp_dict_key_2 = mod_consts[62];
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[63]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_assign_source_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[62];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_2:;
        tmp_bases_name_2 = mod_consts[64];
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 29;

        goto try_except_handler_4;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_7, mod_consts[65]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[65]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_args_name_3 = mod_consts[82];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 29;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[67]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[69];
        tmp_getattr_default_2 = mod_consts[70];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_10;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[69]);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 29;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_14;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_dd86d1002208a07d19107f49899673b7_3)) {
            Py_XDECREF(cache_frame_dd86d1002208a07d19107f49899673b7_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_dd86d1002208a07d19107f49899673b7_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_dd86d1002208a07d19107f49899673b7_3 = MAKE_FUNCTION_FRAME(codeobj_dd86d1002208a07d19107f49899673b7, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_dd86d1002208a07d19107f49899673b7_3->m_type_description == NULL);
        frame_dd86d1002208a07d19107f49899673b7_3 = cache_frame_dd86d1002208a07d19107f49899673b7_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dd86d1002208a07d19107f49899673b7_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dd86d1002208a07d19107f49899673b7_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_4;
            tmp_called_instance_4 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29, mod_consts[60]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_4);
                }
            }



            tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__4_hash_supported();

            frame_dd86d1002208a07d19107f49899673b7_3->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[75], tmp_args_element_name_4);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_5;
            tmp_called_instance_5 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29, mod_consts[60]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_5);
                }
            }



            tmp_args_element_name_5 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__5_create_hash_ctx();

            frame_dd86d1002208a07d19107f49899673b7_3->m_frame.f_lineno = 36;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[75], tmp_args_element_name_5);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dd86d1002208a07d19107f49899673b7_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dd86d1002208a07d19107f49899673b7_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dd86d1002208a07d19107f49899673b7_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dd86d1002208a07d19107f49899673b7_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dd86d1002208a07d19107f49899673b7_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dd86d1002208a07d19107f49899673b7_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_dd86d1002208a07d19107f49899673b7_3 == cache_frame_dd86d1002208a07d19107f49899673b7_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_dd86d1002208a07d19107f49899673b7_3);
            cache_frame_dd86d1002208a07d19107f49899673b7_3 = NULL;
        }

        assertFrameObject(frame_dd86d1002208a07d19107f49899673b7_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[83];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 29;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_15 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29);
        locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29);
        locals_cryptography$hazmat$backends$interfaces$$$class__2_HashBackend_29 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 29;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_15);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_11;
        tmp_dict_key_3 = mod_consts[62];
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[63]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_assign_source_17 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_arg_name_7;
        PyObject *tmp_dict_arg_name_8;
        PyObject *tmp_key_name_8;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[62];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_3:;
        tmp_bases_name_3 = mod_consts[64];
        tmp_assign_source_18 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_arg_name_9;
        tmp_key_name_9 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 43;

        goto try_except_handler_7;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_name_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_12, mod_consts[65]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_name_5;
        PyObject *tmp_kwargs_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_13 = tmp_class_creation_3__metaclass;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[65]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_args_name_5 = mod_consts[88];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 43;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_14, mod_consts[67]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[69];
        tmp_getattr_default_3 = mod_consts[70];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_15;
            PyObject *tmp_type_arg_3;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_3 = tmp_class_creation_3__prepared;
            tmp_expression_name_15 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_expression_name_15 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[69]);
            Py_DECREF(tmp_expression_name_15);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 43;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_20;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4)) {
            Py_XDECREF(cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4 = MAKE_FUNCTION_FRAME(codeobj_4edb5c0ad07b665fd59be320e349bf6d, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4->m_type_description == NULL);
        frame_4edb5c0ad07b665fd59be320e349bf6d_4 = cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_4edb5c0ad07b665fd59be320e349bf6d_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_4edb5c0ad07b665fd59be320e349bf6d_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_6;
            tmp_called_instance_6 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43, mod_consts[60]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 44;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_6);
                }
            }



            tmp_args_element_name_6 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__6_hmac_supported();

            frame_4edb5c0ad07b665fd59be320e349bf6d_4->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[75], tmp_args_element_name_6);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43, mod_consts[90], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_name_7;
            tmp_called_instance_7 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43, mod_consts[60]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 51;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_7);
                }
            }



            tmp_args_element_name_7 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__7_create_hmac_ctx();

            frame_4edb5c0ad07b665fd59be320e349bf6d_4->m_frame.f_lineno = 51;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[75], tmp_args_element_name_7);
            Py_DECREF(tmp_called_instance_7);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4edb5c0ad07b665fd59be320e349bf6d_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_4edb5c0ad07b665fd59be320e349bf6d_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4edb5c0ad07b665fd59be320e349bf6d_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4edb5c0ad07b665fd59be320e349bf6d_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4edb5c0ad07b665fd59be320e349bf6d_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4edb5c0ad07b665fd59be320e349bf6d_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_4edb5c0ad07b665fd59be320e349bf6d_4 == cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4);
            cache_frame_4edb5c0ad07b665fd59be320e349bf6d_4 = NULL;
        }

        assertFrameObject(frame_4edb5c0ad07b665fd59be320e349bf6d_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_9;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_6 = mod_consts[89];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 43;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_21 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43);
        locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43);
        locals_cryptography$hazmat$backends$interfaces$$$class__3_HMACBackend_43 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 43;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_name_16;
        tmp_dict_key_4 = mod_consts[62];
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[63]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_assign_source_23 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_arg_name_10;
        PyObject *tmp_dict_arg_name_11;
        PyObject *tmp_key_name_11;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_10, tmp_key_name_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = mod_consts[62];
        tmp_metaclass_name_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_4:;
        tmp_bases_name_4 = mod_consts[64];
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_arg_name_12;
        tmp_key_name_12 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_12, tmp_key_name_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;

        goto try_except_handler_10;
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_17, mod_consts[65]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_name_7;
        PyObject *tmp_kwargs_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_18 = tmp_class_creation_4__metaclass;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[65]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_args_name_7 = mod_consts[94];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 58;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_7, tmp_kwargs_name_7);
        Py_DECREF(tmp_called_name_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_19, mod_consts[67]);
        tmp_operand_name_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_name_4 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[69];
        tmp_getattr_default_4 = mod_consts[70];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_20;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_name_20 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_20 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[69]);
            Py_DECREF(tmp_expression_name_20);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_name_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 58;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_26;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_12;
        }
        if (isFrameUnusable(cache_frame_922236d6490fc485587fc7eee3db555a_5)) {
            Py_XDECREF(cache_frame_922236d6490fc485587fc7eee3db555a_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_922236d6490fc485587fc7eee3db555a_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_922236d6490fc485587fc7eee3db555a_5 = MAKE_FUNCTION_FRAME(codeobj_922236d6490fc485587fc7eee3db555a, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_922236d6490fc485587fc7eee3db555a_5->m_type_description == NULL);
        frame_922236d6490fc485587fc7eee3db555a_5 = cache_frame_922236d6490fc485587fc7eee3db555a_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_922236d6490fc485587fc7eee3db555a_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_922236d6490fc485587fc7eee3db555a_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_name_8;
            tmp_called_instance_8 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58, mod_consts[60]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_8);
                }
            }



            tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__8_cmac_algorithm_supported();

            frame_922236d6490fc485587fc7eee3db555a_5->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[75], tmp_args_element_name_8);
            Py_DECREF(tmp_called_instance_8);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_9 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58, mod_consts[60]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_instance_9);
                }
            }



            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__9_create_cmac_ctx();

            frame_922236d6490fc485587fc7eee3db555a_5->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[75], tmp_args_element_name_9);
            Py_DECREF(tmp_called_instance_9);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_922236d6490fc485587fc7eee3db555a_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_922236d6490fc485587fc7eee3db555a_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_922236d6490fc485587fc7eee3db555a_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_922236d6490fc485587fc7eee3db555a_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_922236d6490fc485587fc7eee3db555a_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_922236d6490fc485587fc7eee3db555a_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_922236d6490fc485587fc7eee3db555a_5 == cache_frame_922236d6490fc485587fc7eee3db555a_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_922236d6490fc485587fc7eee3db555a_5);
            cache_frame_922236d6490fc485587fc7eee3db555a_5 = NULL;
        }

        assertFrameObject(frame_922236d6490fc485587fc7eee3db555a_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_12;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_8 = mod_consts[95];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 58;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_27 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58);
        locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58);
        locals_cryptography$hazmat$backends$interfaces$$$class__4_CMACBackend_58 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 58;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_27);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_name_21;
        tmp_dict_key_5 = mod_consts[62];
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[63]);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        tmp_assign_source_29 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_arg_name_13;
        PyObject *tmp_dict_arg_name_14;
        PyObject *tmp_key_name_14;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_13, tmp_key_name_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = mod_consts[62];
        tmp_metaclass_name_5 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_14, tmp_key_name_14);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_5);
        condexpr_end_5:;
        tmp_bases_name_5 = mod_consts[64];
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_name_5, tmp_bases_name_5);
        Py_DECREF(tmp_metaclass_name_5);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_arg_name_15;
        tmp_key_name_15 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_15, tmp_key_name_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 72;

        goto try_except_handler_13;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_expression_name_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_22, mod_consts[65]);
        tmp_condition_result_19 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_name_9;
        PyObject *tmp_kwargs_name_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_23 = tmp_class_creation_5__metaclass;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[65]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        tmp_args_name_9 = mod_consts[100];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_name_9 = tmp_class_creation_5__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 72;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_9, tmp_kwargs_name_9);
        Py_DECREF(tmp_called_name_9);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_expression_name_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_name_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_24, mod_consts[67]);
        tmp_operand_name_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        tmp_condition_result_20 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_name_5 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[69];
        tmp_getattr_default_5 = mod_consts[70];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        tmp_right_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_25;
            PyObject *tmp_type_arg_5;
            PyTuple_SET_ITEM(tmp_right_name_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_5 = tmp_class_creation_5__prepared;
            tmp_expression_name_25 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_expression_name_25 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[69]);
            Py_DECREF(tmp_expression_name_25);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_name_5, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_name_5);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 72;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_32;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_15;
        }
        if (isFrameUnusable(cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6)) {
            Py_XDECREF(cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6 = MAKE_FUNCTION_FRAME(codeobj_f6e8f63e67832f44fd24d8986c156a6f, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6->m_type_description == NULL);
        frame_f6e8f63e67832f44fd24d8986c156a6f_6 = cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f6e8f63e67832f44fd24d8986c156a6f_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f6e8f63e67832f44fd24d8986c156a6f_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_name_10;
            tmp_called_instance_10 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72, mod_consts[60]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 73;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_10);
                }
            }



            tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__10_pbkdf2_hmac_supported();

            frame_f6e8f63e67832f44fd24d8986c156a6f_6->m_frame.f_lineno = 73;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[75], tmp_args_element_name_10);
            Py_DECREF(tmp_called_instance_10);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_name_11;
            tmp_called_instance_11 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72, mod_consts[60]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_instance_11);
                }
            }



            tmp_args_element_name_11 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__11_derive_pbkdf2_hmac();

            frame_f6e8f63e67832f44fd24d8986c156a6f_6->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[75], tmp_args_element_name_11);
            Py_DECREF(tmp_called_instance_11);
            Py_DECREF(tmp_args_element_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72, mod_consts[104], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f6e8f63e67832f44fd24d8986c156a6f_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f6e8f63e67832f44fd24d8986c156a6f_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f6e8f63e67832f44fd24d8986c156a6f_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f6e8f63e67832f44fd24d8986c156a6f_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f6e8f63e67832f44fd24d8986c156a6f_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f6e8f63e67832f44fd24d8986c156a6f_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_f6e8f63e67832f44fd24d8986c156a6f_6 == cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6);
            cache_frame_f6e8f63e67832f44fd24d8986c156a6f_6 = NULL;
        }

        assertFrameObject(frame_f6e8f63e67832f44fd24d8986c156a6f_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_15;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_name_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_name_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_10 = mod_consts[101];
            tmp_args_name_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_10, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72;
            PyTuple_SET_ITEM0(tmp_args_name_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 72;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_10, tmp_kwargs_name_10);
            Py_DECREF(tmp_args_name_10);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_33 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72);
        locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72);
        locals_cryptography$hazmat$backends$interfaces$$$class__5_PBKDF2HMACBackend_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 72;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_33);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_name_26;
        tmp_dict_key_6 = mod_consts[62];
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[63]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        tmp_assign_source_35 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_arg_name_16;
        PyObject *tmp_dict_arg_name_17;
        PyObject *tmp_key_name_17;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_16, tmp_key_name_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = mod_consts[62];
        tmp_metaclass_name_6 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_17, tmp_key_name_17);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_6);
        condexpr_end_6:;
        tmp_bases_name_6 = mod_consts[64];
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_name_6, tmp_bases_name_6);
        Py_DECREF(tmp_metaclass_name_6);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_arg_name_18;
        tmp_key_name_18 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_18, tmp_key_name_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 89;

        goto try_except_handler_16;
    }
    branch_no_16:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_expression_name_27;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_27 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_27, mod_consts[65]);
        tmp_condition_result_23 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_name_11;
        PyObject *tmp_kwargs_name_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_28 = tmp_class_creation_6__metaclass;
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[65]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        tmp_args_name_11 = mod_consts[106];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_name_11 = tmp_class_creation_6__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 89;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_11, tmp_kwargs_name_11);
        Py_DECREF(tmp_called_name_11);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_expression_name_29;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_name_29 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_29, mod_consts[67]);
        tmp_operand_name_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        tmp_condition_result_24 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_name_6 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[69];
        tmp_getattr_default_6 = mod_consts[70];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        tmp_right_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_30;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_6 = tmp_class_creation_6__prepared;
            tmp_expression_name_30 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_name_30 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[69]);
            Py_DECREF(tmp_expression_name_30);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_right_name_6, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_name_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 89;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_38;
    }
    branch_end_17:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto try_except_handler_18;
        }
        if (isFrameUnusable(cache_frame_39b3039754abf19669d196cbe942eaf0_7)) {
            Py_XDECREF(cache_frame_39b3039754abf19669d196cbe942eaf0_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_39b3039754abf19669d196cbe942eaf0_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_39b3039754abf19669d196cbe942eaf0_7 = MAKE_FUNCTION_FRAME(codeobj_39b3039754abf19669d196cbe942eaf0, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_39b3039754abf19669d196cbe942eaf0_7->m_type_description == NULL);
        frame_39b3039754abf19669d196cbe942eaf0_7 = cache_frame_39b3039754abf19669d196cbe942eaf0_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_39b3039754abf19669d196cbe942eaf0_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_39b3039754abf19669d196cbe942eaf0_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_name_12;
            tmp_called_instance_12 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[60]);

            if (tmp_called_instance_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_12 == NULL)) {
                        tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_12);
                }
            }



            tmp_args_element_name_12 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__12_generate_rsa_private_key();

            frame_39b3039754abf19669d196cbe942eaf0_7->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_12, mod_consts[75], tmp_args_element_name_12);
            Py_DECREF(tmp_called_instance_12);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_name_13;
            tmp_called_instance_13 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[60]);

            if (tmp_called_instance_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_13 == NULL)) {
                        tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_13);
                }
            }



            tmp_args_element_name_13 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__13_rsa_padding_supported();

            frame_39b3039754abf19669d196cbe942eaf0_7->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[75], tmp_args_element_name_13);
            Py_DECREF(tmp_called_instance_13);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_name_14;
            tmp_called_instance_14 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[60]);

            if (tmp_called_instance_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_14 == NULL)) {
                        tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_14);
                }
            }



            tmp_args_element_name_14 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__14_generate_rsa_parameters_supported();

            frame_39b3039754abf19669d196cbe942eaf0_7->m_frame.f_lineno = 103;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_14, mod_consts[75], tmp_args_element_name_14);
            Py_DECREF(tmp_called_instance_14);
            Py_DECREF(tmp_args_element_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_args_element_name_15;
            tmp_called_instance_15 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[60]);

            if (tmp_called_instance_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_15 == NULL)) {
                        tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 110;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_15);
                }
            }



            tmp_args_element_name_15 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__15_load_rsa_private_numbers();

            frame_39b3039754abf19669d196cbe942eaf0_7->m_frame.f_lineno = 110;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_15, mod_consts[75], tmp_args_element_name_15);
            Py_DECREF(tmp_called_instance_15);
            Py_DECREF(tmp_args_element_name_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[114], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_args_element_name_16;
            tmp_called_instance_16 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[60]);

            if (tmp_called_instance_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_16 == NULL)) {
                        tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 116;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_instance_16);
                }
            }



            tmp_args_element_name_16 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__16_load_rsa_public_numbers();

            frame_39b3039754abf19669d196cbe942eaf0_7->m_frame.f_lineno = 116;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_16, mod_consts[75], tmp_args_element_name_16);
            Py_DECREF(tmp_called_instance_16);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_39b3039754abf19669d196cbe942eaf0_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_39b3039754abf19669d196cbe942eaf0_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_39b3039754abf19669d196cbe942eaf0_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_39b3039754abf19669d196cbe942eaf0_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_39b3039754abf19669d196cbe942eaf0_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_39b3039754abf19669d196cbe942eaf0_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_39b3039754abf19669d196cbe942eaf0_7 == cache_frame_39b3039754abf19669d196cbe942eaf0_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_39b3039754abf19669d196cbe942eaf0_7);
            cache_frame_39b3039754abf19669d196cbe942eaf0_7 = NULL;
        }

        assertFrameObject(frame_39b3039754abf19669d196cbe942eaf0_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_18;
        skip_nested_handling_6:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_name_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_name_12 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_12 = mod_consts[107];
            tmp_args_name_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_12, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_12, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89;
            PyTuple_SET_ITEM0(tmp_args_name_12, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 89;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_12, tmp_kwargs_name_12);
            Py_DECREF(tmp_args_name_12);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_39 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89);
        locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89);
        locals_cryptography$hazmat$backends$interfaces$$$class__6_RSABackend_89 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 89;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_39);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_name_31;
        tmp_dict_key_7 = mod_consts[62];
        tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_31 == NULL)) {
            tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[63]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        tmp_assign_source_41 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_arg_name_19;
        PyObject *tmp_dict_arg_name_20;
        PyObject *tmp_key_name_20;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_19, tmp_key_name_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = mod_consts[62];
        tmp_metaclass_name_7 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_20, tmp_key_name_20);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_7);
        condexpr_end_7:;
        tmp_bases_name_7 = mod_consts[64];
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_name_7, tmp_bases_name_7);
        Py_DECREF(tmp_metaclass_name_7);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_arg_name_21;
        tmp_key_name_21 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_21, tmp_key_name_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 123;

        goto try_except_handler_19;
    }
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_expression_name_32;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_32 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_32, mod_consts[65]);
        tmp_condition_result_27 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_name_13;
        PyObject *tmp_kwargs_name_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_33 = tmp_class_creation_7__metaclass;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[65]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        tmp_args_name_13 = mod_consts[118];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_name_13 = tmp_class_creation_7__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 123;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_13, tmp_kwargs_name_13);
        Py_DECREF(tmp_called_name_13);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_expression_name_34;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_name_34 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_34, mod_consts[67]);
        tmp_operand_name_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        tmp_condition_result_28 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_name_7 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[69];
        tmp_getattr_default_7 = mod_consts[70];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        tmp_right_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_35;
            PyObject *tmp_type_arg_7;
            PyTuple_SET_ITEM(tmp_right_name_7, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_7 = tmp_class_creation_7__prepared;
            tmp_expression_name_35 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_expression_name_35 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[69]);
            Py_DECREF(tmp_expression_name_35);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_right_name_7, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_name_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 123;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_21:;
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_44;
    }
    branch_end_20:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_21;
        }
        if (isFrameUnusable(cache_frame_e37d8acd3dce107b2eac34ff019e3273_8)) {
            Py_XDECREF(cache_frame_e37d8acd3dce107b2eac34ff019e3273_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e37d8acd3dce107b2eac34ff019e3273_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e37d8acd3dce107b2eac34ff019e3273_8 = MAKE_FUNCTION_FRAME(codeobj_e37d8acd3dce107b2eac34ff019e3273, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_e37d8acd3dce107b2eac34ff019e3273_8->m_type_description == NULL);
        frame_e37d8acd3dce107b2eac34ff019e3273_8 = cache_frame_e37d8acd3dce107b2eac34ff019e3273_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e37d8acd3dce107b2eac34ff019e3273_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e37d8acd3dce107b2eac34ff019e3273_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_args_element_name_17;
            tmp_called_instance_17 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_17 == NULL)) {
                        tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 124;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_17);
                }
            }



            tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__17_generate_dsa_parameters();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 124;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_17, mod_consts[75], tmp_args_element_name_17);
            Py_DECREF(tmp_called_instance_17);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_args_element_name_18;
            tmp_called_instance_18 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_18 == NULL)) {
                        tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_18);
                }
            }



            tmp_args_element_name_18 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__18_generate_dsa_private_key();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[75], tmp_args_element_name_18);
            Py_DECREF(tmp_called_instance_18);
            Py_DECREF(tmp_args_element_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_args_element_name_19;
            tmp_called_instance_19 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_19 == NULL)) {
                        tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 137;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_19);
                }
            }



            tmp_args_element_name_19 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__19_generate_dsa_private_key_and_parameters();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_19, mod_consts[75], tmp_args_element_name_19);
            Py_DECREF(tmp_called_instance_19);
            Py_DECREF(tmp_args_element_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[124], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_args_element_name_20;
            tmp_called_instance_20 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_20 == NULL)) {
                        tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 143;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_20);
                }
            }



            tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__20_dsa_hash_supported();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 143;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[75], tmp_args_element_name_20);
            Py_DECREF(tmp_called_instance_20);
            Py_DECREF(tmp_args_element_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_21;
            PyObject *tmp_args_element_name_21;
            tmp_called_instance_21 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_21 == NULL)) {
                        tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_21);
                }
            }



            tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__21_dsa_parameters_supported();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 149;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_21, mod_consts[75], tmp_args_element_name_21);
            Py_DECREF(tmp_called_instance_21);
            Py_DECREF(tmp_args_element_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_args_element_name_22;
            tmp_called_instance_22 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_22 == NULL)) {
                        tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_22);
                }
            }



            tmp_args_element_name_22 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__22_load_dsa_private_numbers();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 155;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_22, mod_consts[75], tmp_args_element_name_22);
            Py_DECREF(tmp_called_instance_22);
            Py_DECREF(tmp_args_element_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[130], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_args_element_name_23;
            tmp_called_instance_23 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_23 == NULL)) {
                        tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_23);
                }
            }



            tmp_args_element_name_23 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__23_load_dsa_public_numbers();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 161;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_23, mod_consts[75], tmp_args_element_name_23);
            Py_DECREF(tmp_called_instance_23);
            Py_DECREF(tmp_args_element_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_args_element_name_24;
            tmp_called_instance_24 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[60]);

            if (tmp_called_instance_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_24 == NULL)) {
                        tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_instance_24);
                }
            }



            tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__24_load_dsa_parameter_numbers();

            frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame.f_lineno = 167;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_24, mod_consts[75], tmp_args_element_name_24);
            Py_DECREF(tmp_called_instance_24);
            Py_DECREF(tmp_args_element_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e37d8acd3dce107b2eac34ff019e3273_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e37d8acd3dce107b2eac34ff019e3273_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e37d8acd3dce107b2eac34ff019e3273_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e37d8acd3dce107b2eac34ff019e3273_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e37d8acd3dce107b2eac34ff019e3273_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e37d8acd3dce107b2eac34ff019e3273_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_e37d8acd3dce107b2eac34ff019e3273_8 == cache_frame_e37d8acd3dce107b2eac34ff019e3273_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_e37d8acd3dce107b2eac34ff019e3273_8);
            cache_frame_e37d8acd3dce107b2eac34ff019e3273_8 = NULL;
        }

        assertFrameObject(frame_e37d8acd3dce107b2eac34ff019e3273_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_21;
        skip_nested_handling_7:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_name_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_name_14 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_14 = mod_consts[119];
            tmp_args_name_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_14, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_14, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123;
            PyTuple_SET_ITEM0(tmp_args_name_14, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 123;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_14, tmp_kwargs_name_14);
            Py_DECREF(tmp_args_name_14);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_45 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123);
        locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123);
        locals_cryptography$hazmat$backends$interfaces$$$class__7_DSABackend_123 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 123;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_45);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_name_36;
        tmp_dict_key_8 = mod_consts[62];
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[63]);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        tmp_assign_source_47 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_47, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_arg_name_22;
        PyObject *tmp_dict_arg_name_23;
        PyObject *tmp_key_name_23;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_22, tmp_key_name_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = mod_consts[62];
        tmp_metaclass_name_8 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_23, tmp_key_name_23);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_8);
        condexpr_end_8:;
        tmp_bases_name_8 = mod_consts[64];
        tmp_assign_source_48 = SELECT_METACLASS(tmp_metaclass_name_8, tmp_bases_name_8);
        Py_DECREF(tmp_metaclass_name_8);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_arg_name_24;
        tmp_key_name_24 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_24, tmp_key_name_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 174;

        goto try_except_handler_22;
    }
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_expression_name_37;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_37 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_37, mod_consts[65]);
        tmp_condition_result_31 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_args_name_15;
        PyObject *tmp_kwargs_name_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_38 = tmp_class_creation_8__metaclass;
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[65]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        tmp_args_name_15 = mod_consts[136];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_name_15 = tmp_class_creation_8__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 174;
        tmp_assign_source_49 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_15, tmp_kwargs_name_15);
        Py_DECREF(tmp_called_name_15);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_49;
    }
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_operand_name_8;
        PyObject *tmp_expression_name_39;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_name_39 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_39, mod_consts[67]);
        tmp_operand_name_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        tmp_condition_result_32 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_left_name_8 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[69];
        tmp_getattr_default_8 = mod_consts[70];
        tmp_tuple_element_15 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        tmp_right_name_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_40;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_name_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_8 = tmp_class_creation_8__prepared;
            tmp_expression_name_40 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_name_40 == NULL));
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[69]);
            Py_DECREF(tmp_expression_name_40);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_right_name_8, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_right_name_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 174;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_24:;
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_50;
    }
    branch_end_23:;
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_24;
        }
        if (isFrameUnusable(cache_frame_70a556b236d6986a2ec179a2ae0126ca_9)) {
            Py_XDECREF(cache_frame_70a556b236d6986a2ec179a2ae0126ca_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_70a556b236d6986a2ec179a2ae0126ca_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_70a556b236d6986a2ec179a2ae0126ca_9 = MAKE_FUNCTION_FRAME(codeobj_70a556b236d6986a2ec179a2ae0126ca, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_70a556b236d6986a2ec179a2ae0126ca_9->m_type_description == NULL);
        frame_70a556b236d6986a2ec179a2ae0126ca_9 = cache_frame_70a556b236d6986a2ec179a2ae0126ca_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_70a556b236d6986a2ec179a2ae0126ca_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_70a556b236d6986a2ec179a2ae0126ca_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_args_element_name_25;
            tmp_called_instance_25 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[60]);

            if (tmp_called_instance_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_25 == NULL)) {
                        tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_25);
                }
            }



            tmp_args_element_name_25 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__25_elliptic_curve_signature_algorithm_supported();

            frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame.f_lineno = 175;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_25, mod_consts[75], tmp_args_element_name_25);
            Py_DECREF(tmp_called_instance_25);
            Py_DECREF(tmp_args_element_name_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_26;
            PyObject *tmp_args_element_name_26;
            tmp_called_instance_26 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[60]);

            if (tmp_called_instance_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_26 == NULL)) {
                        tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 184;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_26);
                }
            }



            tmp_args_element_name_26 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__26_elliptic_curve_supported();

            frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame.f_lineno = 184;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_26, mod_consts[75], tmp_args_element_name_26);
            Py_DECREF(tmp_called_instance_26);
            Py_DECREF(tmp_args_element_name_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_27;
            PyObject *tmp_args_element_name_27;
            tmp_called_instance_27 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[60]);

            if (tmp_called_instance_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_27 == NULL)) {
                        tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_27);
                }
            }



            tmp_args_element_name_27 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__27_generate_elliptic_curve_private_key();

            frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_27, mod_consts[75], tmp_args_element_name_27);
            Py_DECREF(tmp_called_instance_27);
            Py_DECREF(tmp_args_element_name_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_args_element_name_28;
            tmp_called_instance_28 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[60]);

            if (tmp_called_instance_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_28 == NULL)) {
                        tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_28);
                }
            }



            tmp_args_element_name_28 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__28_load_elliptic_curve_public_numbers();

            frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame.f_lineno = 196;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_28, mod_consts[75], tmp_args_element_name_28);
            Py_DECREF(tmp_called_instance_28);
            Py_DECREF(tmp_args_element_name_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_29;
            PyObject *tmp_args_element_name_29;
            tmp_called_instance_29 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[60]);

            if (tmp_called_instance_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_29 == NULL)) {
                        tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_29);
                }
            }



            tmp_args_element_name_29 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__29_load_elliptic_curve_private_numbers();

            frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_29, mod_consts[75], tmp_args_element_name_29);
            Py_DECREF(tmp_called_instance_29);
            Py_DECREF(tmp_args_element_name_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_args_element_name_30;
            tmp_called_instance_30 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[60]);

            if (tmp_called_instance_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_30 == NULL)) {
                        tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 208;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_30);
                }
            }



            tmp_args_element_name_30 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__30_elliptic_curve_exchange_algorithm_supported();

            frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame.f_lineno = 208;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_30, mod_consts[75], tmp_args_element_name_30);
            Py_DECREF(tmp_called_instance_30);
            Py_DECREF(tmp_args_element_name_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_args_element_name_31;
            tmp_called_instance_31 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[60]);

            if (tmp_called_instance_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_31 == NULL)) {
                        tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_instance_31);
                }
            }



            tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__31_derive_elliptic_curve_private_key();

            frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_31, mod_consts[75], tmp_args_element_name_31);
            Py_DECREF(tmp_called_instance_31);
            Py_DECREF(tmp_args_element_name_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_70a556b236d6986a2ec179a2ae0126ca_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_70a556b236d6986a2ec179a2ae0126ca_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_70a556b236d6986a2ec179a2ae0126ca_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_70a556b236d6986a2ec179a2ae0126ca_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_70a556b236d6986a2ec179a2ae0126ca_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_70a556b236d6986a2ec179a2ae0126ca_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_70a556b236d6986a2ec179a2ae0126ca_9 == cache_frame_70a556b236d6986a2ec179a2ae0126ca_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_70a556b236d6986a2ec179a2ae0126ca_9);
            cache_frame_70a556b236d6986a2ec179a2ae0126ca_9 = NULL;
        }

        assertFrameObject(frame_70a556b236d6986a2ec179a2ae0126ca_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_24;
        skip_nested_handling_8:;
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_name_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_name_16 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_16 = mod_consts[137];
            tmp_args_name_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_16, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_16, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174;
            PyTuple_SET_ITEM0(tmp_args_name_16, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 174;
            tmp_assign_source_52 = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_16, tmp_kwargs_name_16);
            Py_DECREF(tmp_args_name_16);
            if (tmp_assign_source_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_52;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_51 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_51);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174);
        locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174);
        locals_cryptography$hazmat$backends$interfaces$$$class__8_EllipticCurveBackend_174 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 174;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_51);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_name_41;
        tmp_dict_key_9 = mod_consts[62];
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[63]);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        tmp_assign_source_53 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_name_9;
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_arg_name_25;
        PyObject *tmp_dict_arg_name_26;
        PyObject *tmp_key_name_26;
        PyObject *tmp_bases_name_9;
        tmp_key_name_25 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_25, tmp_key_name_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_name_26 = mod_consts[62];
        tmp_metaclass_name_9 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_26, tmp_key_name_26);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_9);
        condexpr_end_9:;
        tmp_bases_name_9 = mod_consts[64];
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_name_9, tmp_bases_name_9);
        Py_DECREF(tmp_metaclass_name_9);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_arg_name_27;
        tmp_key_name_27 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_27, tmp_key_name_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_34 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 221;

        goto try_except_handler_25;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_expression_name_42;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_42 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_42, mod_consts[65]);
        tmp_condition_result_35 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_args_name_17;
        PyObject *tmp_kwargs_name_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_43 = tmp_class_creation_9__metaclass;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[65]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        tmp_args_name_17 = mod_consts[152];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_name_17 = tmp_class_creation_9__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 221;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_17, tmp_kwargs_name_17);
        Py_DECREF(tmp_called_name_17);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_operand_name_9;
        PyObject *tmp_expression_name_44;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_name_44 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_44, mod_consts[67]);
        tmp_operand_name_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        tmp_condition_result_36 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_left_name_9 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[69];
        tmp_getattr_default_9 = mod_consts[70];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        tmp_right_name_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_45;
            PyObject *tmp_type_arg_9;
            PyTuple_SET_ITEM(tmp_right_name_9, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_9 = tmp_class_creation_9__prepared;
            tmp_expression_name_45 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_expression_name_45 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[69]);
            Py_DECREF(tmp_expression_name_45);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_right_name_9, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_right_name_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 221;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_56;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto try_except_handler_27;
        }
        if (isFrameUnusable(cache_frame_6d116533095972b0c4ad9b1ee4849407_10)) {
            Py_XDECREF(cache_frame_6d116533095972b0c4ad9b1ee4849407_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6d116533095972b0c4ad9b1ee4849407_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6d116533095972b0c4ad9b1ee4849407_10 = MAKE_FUNCTION_FRAME(codeobj_6d116533095972b0c4ad9b1ee4849407, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6d116533095972b0c4ad9b1ee4849407_10->m_type_description == NULL);
        frame_6d116533095972b0c4ad9b1ee4849407_10 = cache_frame_6d116533095972b0c4ad9b1ee4849407_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6d116533095972b0c4ad9b1ee4849407_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6d116533095972b0c4ad9b1ee4849407_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_32;
            PyObject *tmp_args_element_name_32;
            tmp_called_instance_32 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[60]);

            if (tmp_called_instance_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_32 == NULL)) {
                        tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 222;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_32);
                }
            }



            tmp_args_element_name_32 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__32_load_pem_private_key();

            frame_6d116533095972b0c4ad9b1ee4849407_10->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_32, mod_consts[75], tmp_args_element_name_32);
            Py_DECREF(tmp_called_instance_32);
            Py_DECREF(tmp_args_element_name_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_33;
            PyObject *tmp_args_element_name_33;
            tmp_called_instance_33 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[60]);

            if (tmp_called_instance_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_33 == NULL)) {
                        tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 229;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_33);
                }
            }



            tmp_args_element_name_33 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__33_load_pem_public_key();

            frame_6d116533095972b0c4ad9b1ee4849407_10->m_frame.f_lineno = 229;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_33, mod_consts[75], tmp_args_element_name_33);
            Py_DECREF(tmp_called_instance_33);
            Py_DECREF(tmp_args_element_name_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_instance_34;
            PyObject *tmp_args_element_name_34;
            tmp_called_instance_34 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[60]);

            if (tmp_called_instance_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_34 == NULL)) {
                        tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 235;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_instance_34);
                }
            }



            tmp_args_element_name_34 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__34_load_pem_parameters();

            frame_6d116533095972b0c4ad9b1ee4849407_10->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_34, mod_consts[75], tmp_args_element_name_34);
            Py_DECREF(tmp_called_instance_34);
            Py_DECREF(tmp_args_element_name_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221, mod_consts[158], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6d116533095972b0c4ad9b1ee4849407_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6d116533095972b0c4ad9b1ee4849407_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6d116533095972b0c4ad9b1ee4849407_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6d116533095972b0c4ad9b1ee4849407_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6d116533095972b0c4ad9b1ee4849407_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6d116533095972b0c4ad9b1ee4849407_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6d116533095972b0c4ad9b1ee4849407_10 == cache_frame_6d116533095972b0c4ad9b1ee4849407_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6d116533095972b0c4ad9b1ee4849407_10);
            cache_frame_6d116533095972b0c4ad9b1ee4849407_10 = NULL;
        }

        assertFrameObject(frame_6d116533095972b0c4ad9b1ee4849407_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_27;
        skip_nested_handling_9:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_18;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_name_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_name_18 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_18 = mod_consts[153];
            tmp_args_name_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_18, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_18, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221;
            PyTuple_SET_ITEM0(tmp_args_name_18, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_name_18 = tmp_class_creation_9__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 221;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_18, tmp_kwargs_name_18);
            Py_DECREF(tmp_args_name_18);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_57 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221);
        locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221);
        locals_cryptography$hazmat$backends$interfaces$$$class__9_PEMSerializationBackend_221 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 221;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_57);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_name_46;
        tmp_dict_key_10 = mod_consts[62];
        tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_46 == NULL)) {
            tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[63]);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        tmp_assign_source_59 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_59, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_metaclass_name_10;
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_28;
        PyObject *tmp_dict_arg_name_28;
        PyObject *tmp_dict_arg_name_29;
        PyObject *tmp_key_name_29;
        PyObject *tmp_bases_name_10;
        tmp_key_name_28 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_28, tmp_key_name_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_name_29 = mod_consts[62];
        tmp_metaclass_name_10 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_29, tmp_key_name_29);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_10);
        condexpr_end_10:;
        tmp_bases_name_10 = mod_consts[64];
        tmp_assign_source_60 = SELECT_METACLASS(tmp_metaclass_name_10, tmp_bases_name_10);
        Py_DECREF(tmp_metaclass_name_10);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_60;
    }
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_key_name_30;
        PyObject *tmp_dict_arg_name_30;
        tmp_key_name_30 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_30, tmp_key_name_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_38 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 242;

        goto try_except_handler_28;
    }
    branch_no_28:;
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_expression_name_47;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_47 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_47, mod_consts[65]);
        tmp_condition_result_39 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_args_name_19;
        PyObject *tmp_kwargs_name_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_48 = tmp_class_creation_10__metaclass;
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[65]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        tmp_args_name_19 = mod_consts[160];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_name_19 = tmp_class_creation_10__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 242;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_name_19, tmp_args_name_19, tmp_kwargs_name_19);
        Py_DECREF(tmp_called_name_19);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_operand_name_10;
        PyObject *tmp_expression_name_49;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_name_49 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_49, mod_consts[67]);
        tmp_operand_name_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        tmp_condition_result_40 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_left_name_10 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[69];
        tmp_getattr_default_10 = mod_consts[70];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        tmp_right_name_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_50;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_right_name_10, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_10 = tmp_class_creation_10__prepared;
            tmp_expression_name_50 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_name_50 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[69]);
            Py_DECREF(tmp_expression_name_50);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_right_name_10, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_right_name_10);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 242;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_30:;
    goto branch_end_29;
    branch_no_29:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_62;
    }
    branch_end_29:;
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[161];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_30;
        }
        if (isFrameUnusable(cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11)) {
            Py_XDECREF(cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11 = MAKE_FUNCTION_FRAME(codeobj_633f3dce9cf3dd6a6767d7aad86c1396, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11->m_type_description == NULL);
        frame_633f3dce9cf3dd6a6767d7aad86c1396_11 = cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_633f3dce9cf3dd6a6767d7aad86c1396_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_633f3dce9cf3dd6a6767d7aad86c1396_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_35;
            PyObject *tmp_args_element_name_35;
            tmp_called_instance_35 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[60]);

            if (tmp_called_instance_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_35 == NULL)) {
                        tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 243;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_35);
                }
            }



            tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__35_load_der_private_key();

            frame_633f3dce9cf3dd6a6767d7aad86c1396_11->m_frame.f_lineno = 243;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_35, mod_consts[75], tmp_args_element_name_35);
            Py_DECREF(tmp_called_instance_35);
            Py_DECREF(tmp_args_element_name_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_36;
            PyObject *tmp_args_element_name_36;
            tmp_called_instance_36 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[60]);

            if (tmp_called_instance_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_36 == NULL)) {
                        tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 250;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_36);
                }
            }



            tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__36_load_der_public_key();

            frame_633f3dce9cf3dd6a6767d7aad86c1396_11->m_frame.f_lineno = 250;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_36, mod_consts[75], tmp_args_element_name_36);
            Py_DECREF(tmp_called_instance_36);
            Py_DECREF(tmp_args_element_name_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[164], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_instance_37;
            PyObject *tmp_args_element_name_37;
            tmp_called_instance_37 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[60]);

            if (tmp_called_instance_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_37 == NULL)) {
                        tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 256;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_instance_37);
                }
            }



            tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__37_load_der_parameters();

            frame_633f3dce9cf3dd6a6767d7aad86c1396_11->m_frame.f_lineno = 256;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_37, mod_consts[75], tmp_args_element_name_37);
            Py_DECREF(tmp_called_instance_37);
            Py_DECREF(tmp_args_element_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_633f3dce9cf3dd6a6767d7aad86c1396_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_633f3dce9cf3dd6a6767d7aad86c1396_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_633f3dce9cf3dd6a6767d7aad86c1396_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_633f3dce9cf3dd6a6767d7aad86c1396_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_633f3dce9cf3dd6a6767d7aad86c1396_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_633f3dce9cf3dd6a6767d7aad86c1396_11,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_633f3dce9cf3dd6a6767d7aad86c1396_11 == cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11);
            cache_frame_633f3dce9cf3dd6a6767d7aad86c1396_11 = NULL;
        }

        assertFrameObject(frame_633f3dce9cf3dd6a6767d7aad86c1396_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_30;
        skip_nested_handling_10:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_name_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_name_20 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_20 = mod_consts[161];
            tmp_args_name_20 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_20, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_20, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242;
            PyTuple_SET_ITEM0(tmp_args_name_20, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_name_20 = tmp_class_creation_10__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 242;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_20, tmp_kwargs_name_20);
            Py_DECREF(tmp_args_name_20);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_63 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242);
        locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242);
        locals_cryptography$hazmat$backends$interfaces$$$class__10_DERSerializationBackend_242 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 242;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_63);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_name_51;
        tmp_dict_key_11 = mod_consts[62];
        tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_51 == NULL)) {
            tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[63]);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        tmp_assign_source_65 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_65, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_metaclass_name_11;
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_arg_name_31;
        PyObject *tmp_dict_arg_name_32;
        PyObject *tmp_key_name_32;
        PyObject *tmp_bases_name_11;
        tmp_key_name_31 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_31, tmp_key_name_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_name_32 = mod_consts[62];
        tmp_metaclass_name_11 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_32, tmp_key_name_32);
        if (tmp_metaclass_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_11);
        condexpr_end_11:;
        tmp_bases_name_11 = mod_consts[64];
        tmp_assign_source_66 = SELECT_METACLASS(tmp_metaclass_name_11, tmp_bases_name_11);
        Py_DECREF(tmp_metaclass_name_11);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_66;
    }
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_arg_name_33;
        tmp_key_name_33 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_33, tmp_key_name_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_42 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 263;

        goto try_except_handler_31;
    }
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_expression_name_52;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_52 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_52, mod_consts[65]);
        tmp_condition_result_43 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_args_name_21;
        PyObject *tmp_kwargs_name_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_53 = tmp_class_creation_11__metaclass;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[65]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        tmp_args_name_21 = mod_consts[168];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_name_21 = tmp_class_creation_11__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 263;
        tmp_assign_source_67 = CALL_FUNCTION(tmp_called_name_21, tmp_args_name_21, tmp_kwargs_name_21);
        Py_DECREF(tmp_called_name_21);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_67;
    }
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_operand_name_11;
        PyObject *tmp_expression_name_54;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_name_54 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_54, mod_consts[67]);
        tmp_operand_name_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        tmp_condition_result_44 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_left_name_11 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[69];
        tmp_getattr_default_11 = mod_consts[70];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        tmp_right_name_11 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_55;
            PyObject *tmp_type_arg_11;
            PyTuple_SET_ITEM(tmp_right_name_11, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_11 = tmp_class_creation_11__prepared;
            tmp_expression_name_55 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_expression_name_55 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[69]);
            Py_DECREF(tmp_expression_name_55);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_right_name_11, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_right_name_11);
        goto try_except_handler_31;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_31;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 263;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_31;
    }
    branch_no_33:;
    goto branch_end_32;
    branch_no_32:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = PyDict_New();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_68;
    }
    branch_end_32:;
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_33;
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto try_except_handler_33;
        }
        if (isFrameUnusable(cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12)) {
            Py_XDECREF(cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12 = MAKE_FUNCTION_FRAME(codeobj_d684d5ef2cbcde6a71d809b9fe302a72, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_type_description == NULL);
        frame_d684d5ef2cbcde6a71d809b9fe302a72_12 = cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_d684d5ef2cbcde6a71d809b9fe302a72_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_d684d5ef2cbcde6a71d809b9fe302a72_12) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_38;
            PyObject *tmp_args_element_name_38;
            tmp_called_instance_38 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_38 == NULL)) {
                        tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 264;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_38);
                }
            }



            tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__38_load_pem_x509_certificate();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 264;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_38, mod_consts[75], tmp_args_element_name_38);
            Py_DECREF(tmp_called_instance_38);
            Py_DECREF(tmp_args_element_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_39;
            PyObject *tmp_args_element_name_39;
            tmp_called_instance_39 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_39 == NULL)) {
                        tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 270;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_39);
                }
            }



            tmp_args_element_name_39 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__39_load_der_x509_certificate();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 270;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_39, mod_consts[75], tmp_args_element_name_39);
            Py_DECREF(tmp_called_instance_39);
            Py_DECREF(tmp_args_element_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_40;
            PyObject *tmp_args_element_name_40;
            tmp_called_instance_40 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_40 == NULL)) {
                        tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 276;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_40);
                }
            }



            tmp_args_element_name_40 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__40_load_der_x509_csr();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_40, mod_consts[75], tmp_args_element_name_40);
            Py_DECREF(tmp_called_instance_40);
            Py_DECREF(tmp_args_element_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[174], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_41;
            PyObject *tmp_args_element_name_41;
            tmp_called_instance_41 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_41 == NULL)) {
                        tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 282;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_41);
                }
            }



            tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__41_load_pem_x509_csr();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 282;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_41, mod_consts[75], tmp_args_element_name_41);
            Py_DECREF(tmp_called_instance_41);
            Py_DECREF(tmp_args_element_name_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_42;
            PyObject *tmp_args_element_name_42;
            tmp_called_instance_42 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_42 == NULL)) {
                        tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_42);
                }
            }



            tmp_args_element_name_42 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__42_create_x509_csr();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 288;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_42, mod_consts[75], tmp_args_element_name_42);
            Py_DECREF(tmp_called_instance_42);
            Py_DECREF(tmp_args_element_name_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_43;
            PyObject *tmp_args_element_name_43;
            tmp_called_instance_43 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_43 == NULL)) {
                        tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 294;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_43);
                }
            }



            tmp_args_element_name_43 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__43_create_x509_certificate();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_43, mod_consts[75], tmp_args_element_name_43);
            Py_DECREF(tmp_called_instance_43);
            Py_DECREF(tmp_args_element_name_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_44;
            PyObject *tmp_args_element_name_44;
            tmp_called_instance_44 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_44 == NULL)) {
                        tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 300;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_44);
                }
            }



            tmp_args_element_name_44 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__44_create_x509_crl();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 300;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_44, mod_consts[75], tmp_args_element_name_44);
            Py_DECREF(tmp_called_instance_44);
            Py_DECREF(tmp_args_element_name_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[182], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_45;
            PyObject *tmp_args_element_name_45;
            tmp_called_instance_45 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_45 == NULL)) {
                        tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 307;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_45);
                }
            }



            tmp_args_element_name_45 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__45_create_x509_revoked_certificate();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 307;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_45, mod_consts[75], tmp_args_element_name_45);
            Py_DECREF(tmp_called_instance_45);
            Py_DECREF(tmp_args_element_name_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[184], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_called_instance_46;
            PyObject *tmp_args_element_name_46;
            tmp_called_instance_46 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[60]);

            if (tmp_called_instance_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_46 == NULL)) {
                        tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 314;
                        type_description_2 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_called_instance_46);
                }
            }



            tmp_args_element_name_46 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__46_x509_name_bytes();

            frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame.f_lineno = 314;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_46, mod_consts[75], tmp_args_element_name_46);
            Py_DECREF(tmp_called_instance_46);
            Py_DECREF(tmp_args_element_name_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263, mod_consts[186], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d684d5ef2cbcde6a71d809b9fe302a72_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_d684d5ef2cbcde6a71d809b9fe302a72_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d684d5ef2cbcde6a71d809b9fe302a72_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d684d5ef2cbcde6a71d809b9fe302a72_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d684d5ef2cbcde6a71d809b9fe302a72_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d684d5ef2cbcde6a71d809b9fe302a72_12,
            type_description_2,
            outline_10_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_d684d5ef2cbcde6a71d809b9fe302a72_12 == cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12);
            cache_frame_d684d5ef2cbcde6a71d809b9fe302a72_12 = NULL;
        }

        assertFrameObject(frame_d684d5ef2cbcde6a71d809b9fe302a72_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_33;
        skip_nested_handling_11:;
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_name_22;
            PyObject *tmp_args_name_22;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_name_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_name_22 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_22 = mod_consts[169];
            tmp_args_name_22 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_22, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_22, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263;
            PyTuple_SET_ITEM0(tmp_args_name_22, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_name_22 = tmp_class_creation_11__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 263;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_name_22, tmp_args_name_22, tmp_kwargs_name_22);
            Py_DECREF(tmp_args_name_22);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_69 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263);
        locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263);
        locals_cryptography$hazmat$backends$interfaces$$$class__11_X509Backend_263 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 263;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_69);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_name_56;
        tmp_dict_key_12 = mod_consts[62];
        tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_56 == NULL)) {
            tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[63]);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        tmp_assign_source_71 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_71, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_metaclass_name_12;
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_key_name_34;
        PyObject *tmp_dict_arg_name_34;
        PyObject *tmp_dict_arg_name_35;
        PyObject *tmp_key_name_35;
        PyObject *tmp_bases_name_12;
        tmp_key_name_34 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_34, tmp_key_name_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_name_35 = mod_consts[62];
        tmp_metaclass_name_12 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_35, tmp_key_name_35);
        if (tmp_metaclass_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_12);
        condexpr_end_12:;
        tmp_bases_name_12 = mod_consts[64];
        tmp_assign_source_72 = SELECT_METACLASS(tmp_metaclass_name_12, tmp_bases_name_12);
        Py_DECREF(tmp_metaclass_name_12);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_72;
    }
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_key_name_36;
        PyObject *tmp_dict_arg_name_36;
        tmp_key_name_36 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_36, tmp_key_name_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_46 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 321;

        goto try_except_handler_34;
    }
    branch_no_34:;
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_expression_name_57;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_57 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_57, mod_consts[65]);
        tmp_condition_result_47 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_args_name_23;
        PyObject *tmp_kwargs_name_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_58 = tmp_class_creation_12__metaclass;
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[65]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        tmp_args_name_23 = mod_consts[188];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_name_23 = tmp_class_creation_12__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 321;
        tmp_assign_source_73 = CALL_FUNCTION(tmp_called_name_23, tmp_args_name_23, tmp_kwargs_name_23);
        Py_DECREF(tmp_called_name_23);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_73;
    }
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_operand_name_12;
        PyObject *tmp_expression_name_59;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_name_59 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_59, mod_consts[67]);
        tmp_operand_name_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        tmp_condition_result_48 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_left_name_12 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[69];
        tmp_getattr_default_12 = mod_consts[70];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        tmp_right_name_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_60;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_right_name_12, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_12 = tmp_class_creation_12__prepared;
            tmp_expression_name_60 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_name_60 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[69]);
            Py_DECREF(tmp_expression_name_60);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_right_name_12, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_right_name_12);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_34;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 321;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_34;
    }
    branch_no_36:;
    goto branch_end_35;
    branch_no_35:;
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = PyDict_New();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_74;
    }
    branch_end_35:;
    {
        PyObject *tmp_assign_source_75;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_36;
        }
        tmp_dictset_value = mod_consts[189];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto try_except_handler_36;
        }
        if (isFrameUnusable(cache_frame_7437092f015c58846e178c354f369589_13)) {
            Py_XDECREF(cache_frame_7437092f015c58846e178c354f369589_13);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7437092f015c58846e178c354f369589_13 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7437092f015c58846e178c354f369589_13 = MAKE_FUNCTION_FRAME(codeobj_7437092f015c58846e178c354f369589, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_7437092f015c58846e178c354f369589_13->m_type_description == NULL);
        frame_7437092f015c58846e178c354f369589_13 = cache_frame_7437092f015c58846e178c354f369589_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_7437092f015c58846e178c354f369589_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_7437092f015c58846e178c354f369589_13) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_47;
            PyObject *tmp_args_element_name_47;
            tmp_called_instance_47 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_47 == NULL)) {
                        tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 322;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_47);
                }
            }



            tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__47_generate_dh_parameters();

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 322;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_47, mod_consts[75], tmp_args_element_name_47);
            Py_DECREF(tmp_called_instance_47);
            Py_DECREF(tmp_args_element_name_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[190], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_48;
            PyObject *tmp_args_element_name_48;
            tmp_called_instance_48 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_48 == NULL)) {
                        tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 329;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_48);
                }
            }



            tmp_args_element_name_48 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__48_generate_dh_private_key();

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 329;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_48, mod_consts[75], tmp_args_element_name_48);
            Py_DECREF(tmp_called_instance_48);
            Py_DECREF(tmp_args_element_name_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[192], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_49;
            PyObject *tmp_args_element_name_49;
            tmp_called_instance_49 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_49 == NULL)) {
                        tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 336;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_49);
                }
            }



            tmp_args_element_name_49 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__49_generate_dh_private_key_and_parameters();

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 336;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_49, mod_consts[75], tmp_args_element_name_49);
            Py_DECREF(tmp_called_instance_49);
            Py_DECREF(tmp_args_element_name_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[194], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_50;
            PyObject *tmp_args_element_name_50;
            tmp_called_instance_50 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_50 == NULL)) {
                        tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 343;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_50);
                }
            }



            tmp_args_element_name_50 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__50_load_dh_private_numbers();

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 343;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_50, mod_consts[75], tmp_args_element_name_50);
            Py_DECREF(tmp_called_instance_50);
            Py_DECREF(tmp_args_element_name_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[196], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_51;
            PyObject *tmp_args_element_name_51;
            tmp_called_instance_51 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_51 == NULL)) {
                        tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 349;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_51);
                }
            }



            tmp_args_element_name_51 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__51_load_dh_public_numbers();

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 349;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_51, mod_consts[75], tmp_args_element_name_51);
            Py_DECREF(tmp_called_instance_51);
            Py_DECREF(tmp_args_element_name_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[198], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_52;
            PyObject *tmp_args_element_name_52;
            tmp_called_instance_52 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_52 == NULL)) {
                        tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 355;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_52);
                }
            }



            tmp_args_element_name_52 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__52_load_dh_parameter_numbers();

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 355;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_52, mod_consts[75], tmp_args_element_name_52);
            Py_DECREF(tmp_called_instance_52);
            Py_DECREF(tmp_args_element_name_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[200], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_53;
            PyObject *tmp_args_element_name_53;
            PyObject *tmp_defaults_1;
            tmp_called_instance_53 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_53 == NULL)) {
                        tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 361;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_53);
                }
            }

            tmp_defaults_1 = mod_consts[202];
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_name_53 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__53_dh_parameters_supported(tmp_defaults_1);

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 361;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_53, mod_consts[75], tmp_args_element_name_53);
            Py_DECREF(tmp_called_instance_53);
            Py_DECREF(tmp_args_element_name_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_instance_54;
            PyObject *tmp_args_element_name_54;
            tmp_called_instance_54 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[60]);

            if (tmp_called_instance_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_54 == NULL)) {
                        tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 367;
                        type_description_2 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_called_instance_54);
                }
            }



            tmp_args_element_name_54 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__54_dh_x942_serialization_supported();

            frame_7437092f015c58846e178c354f369589_13->m_frame.f_lineno = 367;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_54, mod_consts[75], tmp_args_element_name_54);
            Py_DECREF(tmp_called_instance_54);
            Py_DECREF(tmp_args_element_name_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7437092f015c58846e178c354f369589_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_7437092f015c58846e178c354f369589_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7437092f015c58846e178c354f369589_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7437092f015c58846e178c354f369589_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7437092f015c58846e178c354f369589_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7437092f015c58846e178c354f369589_13,
            type_description_2,
            outline_11_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_7437092f015c58846e178c354f369589_13 == cache_frame_7437092f015c58846e178c354f369589_13) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_7437092f015c58846e178c354f369589_13);
            cache_frame_7437092f015c58846e178c354f369589_13 = NULL;
        }

        assertFrameObject(frame_7437092f015c58846e178c354f369589_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_36;
        skip_nested_handling_12:;
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_name_24;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_name_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_name_24 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_24 = mod_consts[189];
            tmp_args_name_24 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_24, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_24, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321;
            PyTuple_SET_ITEM0(tmp_args_name_24, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_name_24 = tmp_class_creation_12__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 321;
            tmp_assign_source_76 = CALL_FUNCTION(tmp_called_name_24, tmp_args_name_24, tmp_kwargs_name_24);
            Py_DECREF(tmp_args_name_24);
            if (tmp_assign_source_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto try_except_handler_36;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_76;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_75 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_75);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321);
        locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321 = NULL;
        goto try_return_handler_35;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321);
        locals_cryptography$hazmat$backends$interfaces$$$class__12_DHBackend_321 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto try_except_handler_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 321;
        goto try_except_handler_34;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_75);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_name_61;
        tmp_dict_key_13 = mod_consts[62];
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[63]);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        tmp_assign_source_77 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_77, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_metaclass_name_13;
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_arg_name_37;
        PyObject *tmp_dict_arg_name_38;
        PyObject *tmp_key_name_38;
        PyObject *tmp_bases_name_13;
        tmp_key_name_37 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_37, tmp_key_name_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_name_38 = mod_consts[62];
        tmp_metaclass_name_13 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_38, tmp_key_name_38);
        if (tmp_metaclass_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_13);
        condexpr_end_13:;
        tmp_bases_name_13 = mod_consts[64];
        tmp_assign_source_78 = SELECT_METACLASS(tmp_metaclass_name_13, tmp_bases_name_13);
        Py_DECREF(tmp_metaclass_name_13);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_78;
    }
    {
        nuitka_bool tmp_condition_result_50;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_arg_name_39;
        tmp_key_name_39 = mod_consts[62];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_39, tmp_key_name_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
    tmp_dictdel_key = mod_consts[62];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 375;

        goto try_except_handler_37;
    }
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_expression_name_62;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_62 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_62, mod_consts[65]);
        tmp_condition_result_51 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_args_name_25;
        PyObject *tmp_kwargs_name_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_63 = tmp_class_creation_13__metaclass;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[65]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        tmp_args_name_25 = mod_consts[207];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_name_25 = tmp_class_creation_13__class_decl_dict;
        frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 375;
        tmp_assign_source_79 = CALL_FUNCTION(tmp_called_name_25, tmp_args_name_25, tmp_kwargs_name_25);
        Py_DECREF(tmp_called_name_25);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_79;
    }
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_operand_name_13;
        PyObject *tmp_expression_name_64;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_name_64 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_64, mod_consts[67]);
        tmp_operand_name_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        tmp_condition_result_52 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_left_name_13 = mod_consts[68];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_13 = mod_consts[69];
        tmp_getattr_default_13 = mod_consts[70];
        tmp_tuple_element_25 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        tmp_right_name_13 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_65;
            PyObject *tmp_type_arg_13;
            PyTuple_SET_ITEM(tmp_right_name_13, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_13 = tmp_class_creation_13__prepared;
            tmp_expression_name_65 = BUILTIN_TYPE1(tmp_type_arg_13);
            assert(!(tmp_expression_name_65 == NULL));
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[69]);
            Py_DECREF(tmp_expression_name_65);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_right_name_13, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_right_name_13);
        goto try_except_handler_37;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_37;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 375;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_37;
    }
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = PyDict_New();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_80;
    }
    branch_end_38:;
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375, mod_consts[72], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_39;
        }
        tmp_dictset_value = mod_consts[208];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_39;
        }
        if (isFrameUnusable(cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14)) {
            Py_XDECREF(cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14 = MAKE_FUNCTION_FRAME(codeobj_3f0ba4bb4189f030bca0c2b14d384765, module_cryptography$hazmat$backends$interfaces, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14->m_type_description == NULL);
        frame_3f0ba4bb4189f030bca0c2b14d384765_14 = cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3f0ba4bb4189f030bca0c2b14d384765_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3f0ba4bb4189f030bca0c2b14d384765_14) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_55;
            PyObject *tmp_args_element_name_55;
            tmp_called_instance_55 = PyObject_GetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375, mod_consts[60]);

            if (tmp_called_instance_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_called_instance_55 == NULL)) {
                        tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_called_instance_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 376;
                        type_description_2 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_called_instance_55);
                }
            }



            tmp_args_element_name_55 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function__55_derive_scrypt();

            frame_3f0ba4bb4189f030bca0c2b14d384765_14->m_frame.f_lineno = 376;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_55, mod_consts[75], tmp_args_element_name_55);
            Py_DECREF(tmp_called_instance_55);
            Py_DECREF(tmp_args_element_name_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "o";
                goto frame_exception_exit_14;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3f0ba4bb4189f030bca0c2b14d384765_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3f0ba4bb4189f030bca0c2b14d384765_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3f0ba4bb4189f030bca0c2b14d384765_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3f0ba4bb4189f030bca0c2b14d384765_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3f0ba4bb4189f030bca0c2b14d384765_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3f0ba4bb4189f030bca0c2b14d384765_14,
            type_description_2,
            outline_12_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3f0ba4bb4189f030bca0c2b14d384765_14 == cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14);
            cache_frame_3f0ba4bb4189f030bca0c2b14d384765_14 = NULL;
        }

        assertFrameObject(frame_3f0ba4bb4189f030bca0c2b14d384765_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_39;
        skip_nested_handling_13:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_name_26;
            PyObject *tmp_args_name_26;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_kwargs_name_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_name_26 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_26 = mod_consts[208];
            tmp_args_name_26 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_26, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[64];
            PyTuple_SET_ITEM0(tmp_args_name_26, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375;
            PyTuple_SET_ITEM0(tmp_args_name_26, 2, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_name_26 = tmp_class_creation_13__class_decl_dict;
            frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame.f_lineno = 375;
            tmp_assign_source_82 = CALL_FUNCTION(tmp_called_name_26, tmp_args_name_26, tmp_kwargs_name_26);
            Py_DECREF(tmp_args_name_26);
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto try_except_handler_39;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_81 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_39;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375);
        locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375 = NULL;
        goto try_return_handler_38;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375);
        locals_cryptography$hazmat$backends$interfaces$$$class__13_ScryptBackend_375 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto try_except_handler_38;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 375;
        goto try_except_handler_37;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_81);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_392cbbcb80a936f8b0ca7cc56b77cc4c);
#endif
    popFrameStack();

    assertFrameObject(frame_392cbbcb80a936f8b0ca7cc56b77cc4c);

    goto frame_no_exception_14;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_392cbbcb80a936f8b0ca7cc56b77cc4c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_392cbbcb80a936f8b0ca7cc56b77cc4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_392cbbcb80a936f8b0ca7cc56b77cc4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_392cbbcb80a936f8b0ca7cc56b77cc4c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_14:;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;

    return module_cryptography$hazmat$backends$interfaces;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

