/* Generated code for Python module 'robin_stocks.tda.authentication'
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

/* The "module_robin_stocks$tda$authentication" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_robin_stocks$tda$authentication;
PyDictObject *moduledict_robin_stocks$tda$authentication;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[81];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "robin_stocks.tda.authentication", 81);

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
void checkModuleConstants_robin_stocks$tda$authentication(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "robin_stocks.tda.authentication", 81);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d58d667865c418e33a077e5423dadf8a;
static PyCodeObject *codeobj_b4a2b4db1c2821903d637a7f966d807e;
static PyCodeObject *codeobj_2c8ad8d74d00d89bc1591afc2a3a09b3;
static PyCodeObject *codeobj_410b8578f3d43aacc904455574fa43f5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[77]); CHECK_OBJECT(module_filename_obj);
    codeobj_d58d667865c418e33a077e5423dadf8a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_b4a2b4db1c2821903d637a7f966d807e = MAKE_CODEOBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_2c8ad8d74d00d89bc1591afc2a3a09b3 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[79], NULL, 1, 0, 0);
    codeobj_410b8578f3d43aacc904455574fa43f5 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[80], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__1_login_first_time();


static PyObject *MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__2_login();


static PyObject *MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__3_generate_encryption_passcode();


// The module function definitions.
static PyObject *impl_robin_stocks$tda$authentication$$$function__1_login_first_time(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encryption_passcode = python_pars[0];
    PyObject *par_client_id = python_pars[1];
    PyObject *par_authorization_token = python_pars[2];
    PyObject *par_refresh_token = python_pars[3];
    PyObject *var_cipher_suite = NULL;
    PyObject *var_data_dir = NULL;
    PyObject *var_pickle_path = NULL;
    PyObject *var_pickle_file = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_410b8578f3d43aacc904455574fa43f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_410b8578f3d43aacc904455574fa43f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_410b8578f3d43aacc904455574fa43f5)) {
        Py_XDECREF(cache_frame_410b8578f3d43aacc904455574fa43f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_410b8578f3d43aacc904455574fa43f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_410b8578f3d43aacc904455574fa43f5 = MAKE_FUNCTION_FRAME(codeobj_410b8578f3d43aacc904455574fa43f5, module_robin_stocks$tda$authentication, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_410b8578f3d43aacc904455574fa43f5->m_type_description == NULL);
    frame_410b8578f3d43aacc904455574fa43f5 = cache_frame_410b8578f3d43aacc904455574fa43f5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_410b8578f3d43aacc904455574fa43f5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_410b8578f3d43aacc904455574fa43f5) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_encryption_passcode);
        tmp_type_arg_1 = par_encryption_passcode;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyUnicode_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_encryption_passcode);
        tmp_called_instance_1 = par_encryption_passcode;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 28;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_encryption_passcode;
            par_encryption_passcode = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encryption_passcode);
        tmp_args_element_name_1 = par_encryption_passcode;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 29;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cipher_suite == NULL);
        var_cipher_suite = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 31;
        tmp_expression_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 31;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_dir == NULL);
        var_data_dir = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_data_dir);
        tmp_called_instance_3 = var_data_dir;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 32;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[6]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kwargs_name_1;
        if (var_data_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = var_data_dir;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[8]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[9]);
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 33;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        if (var_data_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = var_data_dir;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[4]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 34;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pickle_path == NULL);
        var_pickle_path = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_pickle_path);
        tmp_called_instance_4 = var_pickle_path;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 35;
        tmp_operand_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[6]);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[11]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_pickle_path == NULL) {
            Py_DECREF(tmp_called_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = var_pickle_path;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 36;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_5;
        if (var_pickle_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = var_pickle_path;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 38;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[13],
            &PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_5 = tmp_with_1__source;
        tmp_called_name_6 = LOOKUP_SPECIAL(tmp_expression_name_5, mod_consts[15]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 38;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_6);
        Py_DECREF(tmp_called_name_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_6;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_6 = tmp_with_1__source;
        tmp_assign_source_7 = LOOKUP_SPECIAL(tmp_expression_name_6, mod_consts[16]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_9 = tmp_with_1__enter;
        assert(var_pickle_file == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_pickle_file = tmp_assign_source_9;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_9;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[18]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_key_1 = mod_consts[19];
        CHECK_OBJECT(var_cipher_suite);
        tmp_expression_name_8 = var_cipher_suite;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[20]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_authorization_token);
        tmp_called_instance_6 = par_authorization_token;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 41;
        tmp_args_element_name_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[0]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 41;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 41;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_name_5 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_called_name_10;
            PyObject *tmp_expression_name_10;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_called_instance_10;
            tmp_res = PyDict_SetItem(tmp_args_element_name_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            if (var_cipher_suite == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 42;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_name_9 = var_cipher_suite;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[20]);
            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_refresh_token);
            tmp_called_instance_7 = par_refresh_token;
            frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 42;
            tmp_args_element_name_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[0]);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_9);

                exception_lineno = 42;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 42;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[23];
            if (var_cipher_suite == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_name_10 = var_cipher_suite;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[20]);
            if (tmp_called_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_client_id);
            tmp_called_instance_8 = par_client_id;
            frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 43;
            tmp_args_element_name_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[0]);
            if (tmp_args_element_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_10);

                exception_lineno = 43;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 43;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_8);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 44;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[26]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 45;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[26]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "oooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_5);
        goto try_except_handler_4;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(var_pickle_file);
        tmp_args_element_name_9 = var_pickle_file;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_410b8578f3d43aacc904455574fa43f5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_410b8578f3d43aacc904455574fa43f5, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_11 = tmp_with_1__exit;
        tmp_args_element_name_10 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_11 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_12 = EXC_TRACEBACK(PyThreadState_GET());
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_11, call_args);
        }

        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 46;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_410b8578f3d43aacc904455574fa43f5->m_frame) frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_5;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 38;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_410b8578f3d43aacc904455574fa43f5->m_frame) frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_5;
    branch_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_12 = tmp_with_1__exit;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 46;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_12, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_13 = tmp_with_1__exit;
        frame_410b8578f3d43aacc904455574fa43f5->m_frame.f_lineno = 46;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_7:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_410b8578f3d43aacc904455574fa43f5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_410b8578f3d43aacc904455574fa43f5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_410b8578f3d43aacc904455574fa43f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_410b8578f3d43aacc904455574fa43f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_410b8578f3d43aacc904455574fa43f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_410b8578f3d43aacc904455574fa43f5,
        type_description_1,
        par_encryption_passcode,
        par_client_id,
        par_authorization_token,
        par_refresh_token,
        var_cipher_suite,
        var_data_dir,
        var_pickle_path,
        var_pickle_file
    );


    // Release cached frame if used for exception.
    if (frame_410b8578f3d43aacc904455574fa43f5 == cache_frame_410b8578f3d43aacc904455574fa43f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_410b8578f3d43aacc904455574fa43f5);
        cache_frame_410b8578f3d43aacc904455574fa43f5 = NULL;
    }

    assertFrameObject(frame_410b8578f3d43aacc904455574fa43f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_encryption_passcode);
    Py_DECREF(par_encryption_passcode);
    par_encryption_passcode = NULL;
    Py_XDECREF(par_client_id);
    par_client_id = NULL;
    Py_XDECREF(par_authorization_token);
    par_authorization_token = NULL;
    Py_XDECREF(par_refresh_token);
    par_refresh_token = NULL;
    Py_XDECREF(var_cipher_suite);
    var_cipher_suite = NULL;
    Py_XDECREF(var_data_dir);
    var_data_dir = NULL;
    Py_XDECREF(var_pickle_path);
    var_pickle_path = NULL;
    Py_XDECREF(var_pickle_file);
    var_pickle_file = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_encryption_passcode);
    par_encryption_passcode = NULL;
    Py_XDECREF(par_client_id);
    par_client_id = NULL;
    Py_XDECREF(par_authorization_token);
    par_authorization_token = NULL;
    Py_XDECREF(par_refresh_token);
    par_refresh_token = NULL;
    Py_XDECREF(var_cipher_suite);
    var_cipher_suite = NULL;
    Py_XDECREF(var_data_dir);
    var_data_dir = NULL;
    Py_XDECREF(var_pickle_path);
    var_pickle_path = NULL;
    Py_XDECREF(var_pickle_file);
    var_pickle_file = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_robin_stocks$tda$authentication$$$function__2_login(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encryption_passcode = python_pars[0];
    PyObject *var_cipher_suite = NULL;
    PyObject *var_data_dir = NULL;
    PyObject *var_pickle_path = NULL;
    PyObject *var_pickle_file = NULL;
    PyObject *var_pickle_data = NULL;
    PyObject *var_access_token = NULL;
    PyObject *var_refresh_token = NULL;
    PyObject *var_client_id = NULL;
    PyObject *var_authorization_timestamp = NULL;
    PyObject *var_refresh_timestamp = NULL;
    PyObject *var_authorization_delta = NULL;
    PyObject *var_refresh_delta = NULL;
    PyObject *var_url = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_data = NULL;
    PyObject *var__ = NULL;
    PyObject *var_auth_token = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    struct Nuitka_FrameObject *frame_2c8ad8d74d00d89bc1591afc2a3a09b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
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
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    static struct Nuitka_FrameObject *cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3)) {
        Py_XDECREF(cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3 = MAKE_FUNCTION_FRAME(codeobj_2c8ad8d74d00d89bc1591afc2a3a09b3, module_robin_stocks$tda$authentication, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_type_description == NULL);
    frame_2c8ad8d74d00d89bc1591afc2a3a09b3 = cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2c8ad8d74d00d89bc1591afc2a3a09b3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2c8ad8d74d00d89bc1591afc2a3a09b3) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_encryption_passcode);
        tmp_type_arg_1 = par_encryption_passcode;
        tmp_compexpr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = (PyObject *)&PyUnicode_Type;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_encryption_passcode);
        tmp_called_instance_1 = par_encryption_passcode;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 58;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_encryption_passcode;
            par_encryption_passcode = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encryption_passcode);
        tmp_args_element_name_1 = par_encryption_passcode;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 59;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cipher_suite == NULL);
        var_cipher_suite = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 61;
        tmp_expression_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 61;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_dir == NULL);
        var_data_dir = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_data_dir);
        tmp_expression_name_2 = var_data_dir;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[4]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 62;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pickle_path == NULL);
        var_pickle_path = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_pickle_path);
        tmp_called_instance_3 = var_pickle_path;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 63;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[6]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[30];
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 64;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_FileExistsError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 64;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        if (var_pickle_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = var_pickle_path;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 67;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[13],
            &PyTuple_GET_ITEM(mod_consts[31], 0)
        );

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_3 = tmp_with_1__source;
        tmp_called_name_4 = LOOKUP_SPECIAL(tmp_expression_name_3, mod_consts[15]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 67;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        Py_DECREF(tmp_called_name_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_4 = tmp_with_1__source;
        tmp_assign_source_7 = LOOKUP_SPECIAL(tmp_expression_name_4, mod_consts[16]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_9 = tmp_with_1__enter;
        assert(var_pickle_file == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_pickle_file = tmp_assign_source_9;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_4;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_pickle_file);
        tmp_args_element_name_4 = var_pickle_file;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 68;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[32], tmp_args_element_name_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_pickle_data == NULL);
        var_pickle_data = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_cipher_suite);
        tmp_expression_name_5 = var_cipher_suite;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[33]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_pickle_data);
        tmp_expression_name_6 = var_pickle_data;
        tmp_subscript_name_1 = mod_consts[19];
        tmp_args_element_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_1);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 69;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 69;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[34]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_access_token == NULL);
        var_access_token = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_2;
        if (var_cipher_suite == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_7 = var_cipher_suite;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[33]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_pickle_data);
        tmp_expression_name_8 = var_pickle_data;
        tmp_subscript_name_2 = mod_consts[21];
        tmp_args_element_name_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_2);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 70;
        tmp_called_instance_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 70;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[34]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_refresh_token == NULL);
        var_refresh_token = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_3;
        if (var_cipher_suite == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_9 = var_cipher_suite;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[33]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_pickle_data);
        tmp_expression_name_10 = var_pickle_data;
        tmp_subscript_name_3 = mod_consts[23];
        tmp_args_element_name_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_3);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 71;
        tmp_called_instance_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 71;
        tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[34]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_client_id == NULL);
        var_client_id = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_pickle_data);
        tmp_expression_name_11 = var_pickle_data;
        tmp_subscript_name_4 = mod_consts[24];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_authorization_timestamp == NULL);
        var_authorization_timestamp = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_pickle_data);
        tmp_expression_name_12 = var_pickle_data;
        tmp_subscript_name_5 = mod_consts[27];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_12, tmp_subscript_name_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_refresh_timestamp == NULL);
        var_refresh_timestamp = tmp_assign_source_15;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_16;
        tmp_assign_source_16 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_8 = tmp_with_1__exit;
        tmp_args_element_name_8 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_9 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_10 = EXC_TRACEBACK(PyThreadState_GET());
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 73;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame) frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 67;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame) frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_9 = tmp_with_1__exit;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 73;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_10 = tmp_with_1__exit;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 73;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_11;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_name_11 == NULL)) {
            tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[36]);
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 76;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_11, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_authorization_delta == NULL);
        var_authorization_delta = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_12;
        PyObject *tmp_kwargs_name_2;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[37]);
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 77;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_12, tmp_kwargs_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_refresh_delta == NULL);
        var_refresh_delta = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 78;
        tmp_assign_source_19 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[39]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_right_name_1;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 81;
        tmp_left_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[26]);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_refresh_timestamp == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = var_refresh_timestamp;
        tmp_compexpr_left_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_refresh_delta);
        tmp_compexpr_right_5 = var_refresh_delta;
        tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[40];
        tmp_dict_value_1 = mod_consts[21];
        tmp_assign_source_20 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[41];
        tmp_dict_value_1 = mod_consts[42];
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[21];
        if (var_refresh_token == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_refresh_token;
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        if (var_client_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_client_id;
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_payload == NULL);
        var_payload = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_name_13 == NULL)) {
            tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_url);
        tmp_args_element_name_11 = var_url;
        CHECK_OBJECT(var_payload);
        tmp_args_element_name_12 = var_payload;
        tmp_args_element_name_13 = Py_True;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_13, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 88;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 88;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 88;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[44];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 88;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;
        assert(var_data == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_data = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_25);
        var__ = tmp_assign_source_25;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        bool tmp_condition_result_8;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        tmp_compexpr_left_6 = mod_consts[45];
        CHECK_OBJECT(var_data);
        tmp_compexpr_right_6 = var_data;
        tmp_res = PySequence_Contains(tmp_compexpr_right_6, tmp_compexpr_left_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_compexpr_left_7 = mod_consts[21];
        CHECK_OBJECT(var_data);
        tmp_compexpr_right_7 = var_data;
        tmp_res = PySequence_Contains(tmp_compexpr_right_7, tmp_compexpr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_8 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_8 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[46];
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 90;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 90;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT(var_data);
        tmp_expression_name_13 = var_data;
        tmp_subscript_name_6 = mod_consts[45];
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_6);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_access_token;
            var_access_token = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT(var_data);
        tmp_expression_name_14 = var_data;
        tmp_subscript_name_7 = mod_consts[21];
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_refresh_token;
            var_refresh_token = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_11;
        if (var_pickle_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_11 = var_pickle_path;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 94;
        tmp_assign_source_28 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_11,
            mod_consts[13],
            &PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_15 = tmp_with_2__source;
        tmp_called_name_14 = LOOKUP_SPECIAL(tmp_expression_name_15, mod_consts[15]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 94;
        tmp_assign_source_29 = CALL_FUNCTION_NO_ARGS(tmp_called_name_14);
        Py_DECREF(tmp_called_name_14);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_name_16;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_name_16 = tmp_with_2__source;
        tmp_assign_source_30 = LOOKUP_SPECIAL(tmp_expression_name_16, mod_consts[16]);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_assign_source_31;
        tmp_assign_source_31 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_with_2__enter);
        tmp_assign_source_32 = tmp_with_2__enter;
        {
            PyObject *old = var_pickle_file;
            var_pickle_file = tmp_assign_source_32;
            Py_INCREF(var_pickle_file);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_name_18;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[18]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_dict_key_2 = mod_consts[19];
        if (var_cipher_suite == NULL) {
            Py_DECREF(tmp_called_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_name_18 = var_cipher_suite;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[20]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_access_token);
        tmp_called_instance_12 = var_access_token;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 97;
        tmp_args_element_name_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[0]);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 97;
        tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_name_14 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_called_name_17;
            PyObject *tmp_expression_name_19;
            PyObject *tmp_args_element_name_16;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_called_name_18;
            PyObject *tmp_expression_name_20;
            PyObject *tmp_args_element_name_17;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_called_instance_16;
            tmp_res = PyDict_SetItem(tmp_args_element_name_14, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[21];
            if (var_cipher_suite == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 98;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_expression_name_19 = var_cipher_suite;
            tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[20]);
            if (tmp_called_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            CHECK_OBJECT(var_refresh_token);
            tmp_called_instance_13 = var_refresh_token;
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 98;
            tmp_args_element_name_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[0]);
            if (tmp_args_element_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_17);

                exception_lineno = 98;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 98;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_16);
            Py_DECREF(tmp_called_name_17);
            Py_DECREF(tmp_args_element_name_16);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_14, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[23];
            if (var_cipher_suite == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_expression_name_20 = var_cipher_suite;
            tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[20]);
            if (tmp_called_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            if (var_client_id == NULL) {
                Py_DECREF(tmp_called_name_18);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_called_instance_14 = var_client_id;
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 99;
            tmp_args_element_name_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[0]);
            if (tmp_args_element_name_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_18);

                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 99;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_17);
            Py_DECREF(tmp_called_name_18);
            Py_DECREF(tmp_args_element_name_17);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_14, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[24];
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 100;
            tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_14, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[27];
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 101;
            tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[26]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_14, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_14);
        goto try_except_handler_10;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        CHECK_OBJECT(var_pickle_file);
        tmp_args_element_name_18 = var_pickle_file;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_18};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_15, call_args);
        }

        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_8 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_8, tmp_compexpr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_assign_source_33;
        tmp_assign_source_33 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_19;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_args_element_name_21;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_19 = tmp_with_2__exit;
        tmp_args_element_name_19 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_20 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_21 = EXC_TRACEBACK(PyThreadState_GET());
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21};
            tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_19, call_args);
        }

        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 102;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame) frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 94;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame) frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
    branch_end_9:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_compexpr_left_9;
        nuitka_bool tmp_compexpr_right_9;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_9 = tmp_with_2__indicator;
        tmp_compexpr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_compexpr_left_9 == tmp_compexpr_right_9) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_20 = tmp_with_2__exit;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 102;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_20, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_11:;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_compexpr_left_10;
        nuitka_bool tmp_compexpr_right_10;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_10 = tmp_with_2__indicator;
        tmp_compexpr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_compexpr_left_10 == tmp_compexpr_right_10) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_name_21;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_name_21 = tmp_with_2__exit;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 102;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_21, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_12:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_right_name_2;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 103;
        tmp_left_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[26]);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_authorization_timestamp == NULL) {
            Py_DECREF(tmp_left_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = var_authorization_timestamp;
        tmp_compexpr_left_11 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_compexpr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_authorization_delta);
        tmp_compexpr_right_11 = var_authorization_delta;
        tmp_condition_result_13 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        Py_DECREF(tmp_compexpr_left_11);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[40];
        tmp_dict_value_3 = mod_consts[21];
        tmp_assign_source_34 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[21];
        if (var_refresh_token == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooo";
            goto dict_build_exception_3;
        }

        tmp_dict_value_3 = var_refresh_token;
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        if (var_client_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooo";
            goto dict_build_exception_3;
        }

        tmp_dict_value_3 = var_client_id;
        tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_34);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        assert(var_payload == NULL);
        var_payload = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_22;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_name_22 == NULL)) {
            tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_url);
        tmp_args_element_name_22 = var_url;
        CHECK_OBJECT(var_payload);
        tmp_args_element_name_23 = var_payload;
        tmp_args_element_name_24 = Py_True;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_22, call_args);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_35;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_36 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 109;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_37 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_37 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 109;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_37;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooo";
                    exception_lineno = 109;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[44];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooo";
            exception_lineno = 109;
            goto try_except_handler_13;
        }
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_38 = tmp_tuple_unpack_2__element_1;
        assert(var_data == NULL);
        Py_INCREF(tmp_assign_source_38);
        var_data = tmp_assign_source_38;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_39 = tmp_tuple_unpack_2__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_39);
        var__ = tmp_assign_source_39;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        tmp_compexpr_left_12 = mod_consts[45];
        CHECK_OBJECT(var_data);
        tmp_compexpr_right_12 = var_data;
        tmp_res = PySequence_Contains(tmp_compexpr_right_12, tmp_compexpr_left_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[46];
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 111;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 111;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_data);
        tmp_expression_name_21 = var_data;
        tmp_subscript_name_8 = mod_consts[45];
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_8);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_access_token;
            var_access_token = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_instance_18;
        if (var_pickle_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_instance_18 = var_pickle_path;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 115;
        tmp_assign_source_41 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_18,
            mod_consts[13],
            &PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_with_3__source == NULL);
        tmp_with_3__source = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_22;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_name_22 = tmp_with_3__source;
        tmp_called_name_23 = LOOKUP_SPECIAL(tmp_expression_name_22, mod_consts[15]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_14;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 115;
        tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS(tmp_called_name_23);
        Py_DECREF(tmp_called_name_23);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_with_3__enter == NULL);
        tmp_with_3__enter = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_expression_name_23;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_name_23 = tmp_with_3__source;
        tmp_assign_source_43 = LOOKUP_SPECIAL(tmp_expression_name_23, mod_consts[16]);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(tmp_with_3__exit == NULL);
        tmp_with_3__exit = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_assign_source_44;
        tmp_assign_source_44 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_with_3__enter);
        tmp_assign_source_45 = tmp_with_3__enter;
        {
            PyObject *old = var_pickle_file;
            var_pickle_file = tmp_assign_source_45;
            Py_INCREF(var_pickle_file);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_args_element_name_29;
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[18]);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_dict_key_4 = mod_consts[19];
        if (var_cipher_suite == NULL) {
            Py_DECREF(tmp_called_name_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_16;
        }

        tmp_expression_name_25 = var_cipher_suite;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[20]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(var_access_token);
        tmp_called_instance_19 = var_access_token;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 118;
        tmp_args_element_name_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[0]);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_16;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 118;
        tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_16;
        }
        tmp_args_element_name_25 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_called_name_26;
            PyObject *tmp_expression_name_26;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_called_name_27;
            PyObject *tmp_expression_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_called_instance_22;
            tmp_res = PyDict_SetItem(tmp_args_element_name_25, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[21];
            if (var_cipher_suite == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_expression_name_26 = var_cipher_suite;
            tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[20]);
            if (tmp_called_name_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            if (var_refresh_token == NULL) {
                Py_DECREF(tmp_called_name_26);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_called_instance_20 = var_refresh_token;
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 119;
            tmp_args_element_name_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[0]);
            if (tmp_args_element_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_26);

                exception_lineno = 119;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 119;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_27);
            Py_DECREF(tmp_called_name_26);
            Py_DECREF(tmp_args_element_name_27);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_25, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[23];
            if (var_cipher_suite == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_expression_name_27 = var_cipher_suite;
            tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[20]);
            if (tmp_called_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            if (var_client_id == NULL) {
                Py_DECREF(tmp_called_name_27);
                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_called_instance_21 = var_client_id;
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 120;
            tmp_args_element_name_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[0]);
            if (tmp_args_element_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_27);

                exception_lineno = 120;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 120;
            tmp_dict_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_28);
            Py_DECREF(tmp_called_name_27);
            Py_DECREF(tmp_args_element_name_28);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_25, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[24];
            tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_called_instance_22 == NULL)) {
                tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_called_instance_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 121;
            tmp_dict_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[26]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_args_element_name_25, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[27];
            if (var_refresh_timestamp == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_1 = "oooooooooooooooooo";
                goto dict_build_exception_4;
            }

            tmp_dict_value_4 = var_refresh_timestamp;
            tmp_res = PyDict_SetItem(tmp_args_element_name_25, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_25);
        goto try_except_handler_16;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        CHECK_OBJECT(var_pickle_file);
        tmp_args_element_name_29 = var_pickle_file;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_name_25, tmp_args_element_name_29};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_24, call_args);
        }

        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_keeper_lineno_13);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_13, exception_keeper_tb_13);
    PUBLISH_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        tmp_compexpr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_13 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_13, tmp_compexpr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        nuitka_bool tmp_assign_source_46;
        tmp_assign_source_46 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_called_name_28;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_name_28 = tmp_with_3__exit;
        tmp_args_element_name_30 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_31 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_32 = EXC_TRACEBACK(PyThreadState_GET());
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_name_30, tmp_args_element_name_31, tmp_args_element_name_32};
            tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_28, call_args);
        }

        if (tmp_operand_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        Py_DECREF(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 123;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame) frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_17;
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 115;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame) frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_17;
    branch_end_15:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_14:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_compexpr_left_14;
        nuitka_bool tmp_compexpr_right_14;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_14 = tmp_with_3__indicator;
        tmp_compexpr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = (tmp_compexpr_left_14 == tmp_compexpr_right_14) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_name_29 = tmp_with_3__exit;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 123;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_29, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_15);
            Py_XDECREF(exception_keeper_value_15);
            Py_XDECREF(exception_keeper_tb_15);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_17:;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_14;
    // End of try:
    try_end_15:;
    {
        bool tmp_condition_result_18;
        nuitka_bool tmp_compexpr_left_15;
        nuitka_bool tmp_compexpr_right_15;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_15 = tmp_with_3__indicator;
        tmp_compexpr_right_15 = NUITKA_BOOL_TRUE;
        tmp_condition_result_18 = (tmp_compexpr_left_15 == tmp_compexpr_right_15) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_name_30;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_name_30 = tmp_with_3__exit;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 123;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_30, &PyTuple_GET_ITEM(mod_consts[28], 0));

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_18:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    branch_no_13:;
    branch_end_7:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_33;
        tmp_expression_name_28 = mod_consts[47];
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[48]);
        assert(!(tmp_called_name_31 == NULL));
        if (var_access_token == NULL) {
            Py_DECREF(tmp_called_name_31);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_33 = var_access_token;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 125;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_31);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_auth_token == NULL);
        var_auth_token = tmp_assign_source_47;
    }
    {
        PyObject *tmp_called_name_32;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_args_element_name_35;
        tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_name_32 == NULL)) {
            tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_34 = mod_consts[50];
        CHECK_OBJECT(var_auth_token);
        tmp_args_element_name_35 = var_auth_token;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_name_34, tmp_args_element_name_35};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_32, call_args);
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_args_element_name_37;
        tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_name_33 == NULL)) {
            tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_36 = mod_consts[51];
        if (var_client_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_37 = var_client_id;
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_name_36, tmp_args_element_name_37};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_33, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_34;
        PyObject *tmp_call_result_11;
        tmp_called_name_34 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_name_34 == NULL)) {
            tmp_called_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame.f_lineno = 128;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, Py_True);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c8ad8d74d00d89bc1591afc2a3a09b3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2c8ad8d74d00d89bc1591afc2a3a09b3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c8ad8d74d00d89bc1591afc2a3a09b3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c8ad8d74d00d89bc1591afc2a3a09b3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c8ad8d74d00d89bc1591afc2a3a09b3,
        type_description_1,
        par_encryption_passcode,
        var_cipher_suite,
        var_data_dir,
        var_pickle_path,
        var_pickle_file,
        var_pickle_data,
        var_access_token,
        var_refresh_token,
        var_client_id,
        var_authorization_timestamp,
        var_refresh_timestamp,
        var_authorization_delta,
        var_refresh_delta,
        var_url,
        var_payload,
        var_data,
        var__,
        var_auth_token
    );


    // Release cached frame if used for exception.
    if (frame_2c8ad8d74d00d89bc1591afc2a3a09b3 == cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3);
        cache_frame_2c8ad8d74d00d89bc1591afc2a3a09b3 = NULL;
    }

    assertFrameObject(frame_2c8ad8d74d00d89bc1591afc2a3a09b3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_auth_token);
    tmp_return_value = var_auth_token;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_encryption_passcode);
    Py_DECREF(par_encryption_passcode);
    par_encryption_passcode = NULL;
    Py_XDECREF(var_cipher_suite);
    var_cipher_suite = NULL;
    Py_XDECREF(var_data_dir);
    var_data_dir = NULL;
    Py_XDECREF(var_pickle_path);
    var_pickle_path = NULL;
    Py_XDECREF(var_pickle_file);
    var_pickle_file = NULL;
    Py_XDECREF(var_pickle_data);
    var_pickle_data = NULL;
    Py_XDECREF(var_access_token);
    var_access_token = NULL;
    Py_XDECREF(var_refresh_token);
    var_refresh_token = NULL;
    Py_XDECREF(var_client_id);
    var_client_id = NULL;
    Py_XDECREF(var_authorization_timestamp);
    var_authorization_timestamp = NULL;
    Py_XDECREF(var_refresh_timestamp);
    var_refresh_timestamp = NULL;
    CHECK_OBJECT(var_authorization_delta);
    Py_DECREF(var_authorization_delta);
    var_authorization_delta = NULL;
    CHECK_OBJECT(var_refresh_delta);
    Py_DECREF(var_refresh_delta);
    var_refresh_delta = NULL;
    CHECK_OBJECT(var_url);
    Py_DECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_payload);
    var_payload = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    CHECK_OBJECT(var_auth_token);
    Py_DECREF(var_auth_token);
    var_auth_token = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_encryption_passcode);
    par_encryption_passcode = NULL;
    Py_XDECREF(var_cipher_suite);
    var_cipher_suite = NULL;
    Py_XDECREF(var_data_dir);
    var_data_dir = NULL;
    Py_XDECREF(var_pickle_path);
    var_pickle_path = NULL;
    Py_XDECREF(var_pickle_file);
    var_pickle_file = NULL;
    Py_XDECREF(var_pickle_data);
    var_pickle_data = NULL;
    Py_XDECREF(var_access_token);
    var_access_token = NULL;
    Py_XDECREF(var_refresh_token);
    var_refresh_token = NULL;
    Py_XDECREF(var_client_id);
    var_client_id = NULL;
    Py_XDECREF(var_authorization_timestamp);
    var_authorization_timestamp = NULL;
    Py_XDECREF(var_refresh_timestamp);
    var_refresh_timestamp = NULL;
    Py_XDECREF(var_authorization_delta);
    var_authorization_delta = NULL;
    Py_XDECREF(var_refresh_delta);
    var_refresh_delta = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_payload);
    var_payload = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_auth_token);
    var_auth_token = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_robin_stocks$tda$authentication$$$function__3_generate_encryption_passcode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b4a2b4db1c2821903d637a7f966d807e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4a2b4db1c2821903d637a7f966d807e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4a2b4db1c2821903d637a7f966d807e)) {
        Py_XDECREF(cache_frame_b4a2b4db1c2821903d637a7f966d807e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4a2b4db1c2821903d637a7f966d807e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4a2b4db1c2821903d637a7f966d807e = MAKE_FUNCTION_FRAME(codeobj_b4a2b4db1c2821903d637a7f966d807e, module_robin_stocks$tda$authentication, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b4a2b4db1c2821903d637a7f966d807e->m_type_description == NULL);
    frame_b4a2b4db1c2821903d637a7f966d807e = cache_frame_b4a2b4db1c2821903d637a7f966d807e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b4a2b4db1c2821903d637a7f966d807e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b4a2b4db1c2821903d637a7f966d807e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_b4a2b4db1c2821903d637a7f966d807e->m_frame.f_lineno = 138;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[54]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_b4a2b4db1c2821903d637a7f966d807e->m_frame.f_lineno = 138;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[34]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4a2b4db1c2821903d637a7f966d807e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4a2b4db1c2821903d637a7f966d807e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4a2b4db1c2821903d637a7f966d807e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b4a2b4db1c2821903d637a7f966d807e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4a2b4db1c2821903d637a7f966d807e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4a2b4db1c2821903d637a7f966d807e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4a2b4db1c2821903d637a7f966d807e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b4a2b4db1c2821903d637a7f966d807e == cache_frame_b4a2b4db1c2821903d637a7f966d807e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b4a2b4db1c2821903d637a7f966d807e);
        cache_frame_b4a2b4db1c2821903d637a7f966d807e = NULL;
    }

    assertFrameObject(frame_b4a2b4db1c2821903d637a7f966d807e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__1_login_first_time() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_robin_stocks$tda$authentication$$$function__1_login_first_time,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_410b8578f3d43aacc904455574fa43f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_robin_stocks$tda$authentication,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__2_login() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_robin_stocks$tda$authentication$$$function__2_login,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c8ad8d74d00d89bc1591afc2a3a09b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_robin_stocks$tda$authentication,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__3_generate_encryption_passcode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_robin_stocks$tda$authentication$$$function__3_generate_encryption_passcode,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4a2b4db1c2821903d637a7f966d807e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_robin_stocks$tda$authentication,
        mod_consts[55],
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

function_impl_code functable_robin_stocks$tda$authentication[] = {
    impl_robin_stocks$tda$authentication$$$function__1_login_first_time,
    impl_robin_stocks$tda$authentication$$$function__2_login,
    impl_robin_stocks$tda$authentication$$$function__3_generate_encryption_passcode,
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

    function_impl_code *current = functable_robin_stocks$tda$authentication;
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

    if (offset > sizeof(functable_robin_stocks$tda$authentication) || offset < 0) {
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
        functable_robin_stocks$tda$authentication[offset],
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
        module_robin_stocks$tda$authentication,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "robin_stocks.tda.authentication";

// Internal entry point for module code.
PyObject *modulecode_robin_stocks$tda$authentication(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_robin_stocks$tda$authentication = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("robin_stocks.tda.authentication: Skipping module init, already done.\n");
#endif

        return module_robin_stocks$tda$authentication;
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
    PRINT_STRING("robin_stocks.tda.authentication: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("robin_stocks.tda.authentication: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("robin_stocks.tda.authentication: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrobin_stocks$tda$authentication\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_robin_stocks$tda$authentication = MODULE_DICT(module_robin_stocks$tda$authentication);

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
        moduledict_robin_stocks$tda$authentication,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_robin_stocks$tda$authentication,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_robin_stocks$tda$authentication,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_robin_stocks$tda$authentication,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_robin_stocks$tda$authentication,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_robin_stocks$tda$authentication);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_robin_stocks$tda$authentication);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_d58d667865c418e33a077e5423dadf8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_d58d667865c418e33a077e5423dadf8a = MAKE_MODULE_FRAME(codeobj_d58d667865c418e33a077e5423dadf8a, module_robin_stocks$tda$authentication);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_d58d667865c418e33a077e5423dadf8a);
    assert(Py_REFCNT(frame_d58d667865c418e33a077e5423dadf8a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[59], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[60], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[17];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_robin_stocks$tda$authentication;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[62];
        frame_d58d667865c418e33a077e5423dadf8a->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[25];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_robin_stocks$tda$authentication;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[63];
        tmp_level_name_2 = mod_consts[62];
        frame_d58d667865c418e33a077e5423dadf8a->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[25],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[25]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[35],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[35]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[64];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_robin_stocks$tda$authentication;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[65];
        tmp_level_name_3 = mod_consts[62];
        frame_d58d667865c418e33a077e5423dadf8a->m_frame.f_lineno = 3;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[2],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[66];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_robin_stocks$tda$authentication;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[67];
        tmp_level_name_4 = mod_consts[62];
        frame_d58d667865c418e33a077e5423dadf8a->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[1],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[68];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_robin_stocks$tda$authentication;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[69];
        tmp_level_name_5 = mod_consts[62];
        frame_d58d667865c418e33a077e5423dadf8a->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[5],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[5]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[10],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[10]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_12);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[70];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_robin_stocks$tda$authentication;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[71];
        tmp_level_name_6 = mod_consts[62];
        frame_d58d667865c418e33a077e5423dadf8a->m_frame.f_lineno = 7;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[43],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[43]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[52],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[52]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[49],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[49]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_16);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[72];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_robin_stocks$tda$authentication;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[73];
        tmp_level_name_7 = mod_consts[62];
        frame_d58d667865c418e33a077e5423dadf8a->m_frame.f_lineno = 9;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_robin_stocks$tda$authentication,
                mod_consts[38],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_17);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d58d667865c418e33a077e5423dadf8a);
#endif
    popFrameStack();

    assertFrameObject(frame_d58d667865c418e33a077e5423dadf8a);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d58d667865c418e33a077e5423dadf8a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d58d667865c418e33a077e5423dadf8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d58d667865c418e33a077e5423dadf8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d58d667865c418e33a077e5423dadf8a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__1_login_first_time();

        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__2_login();

        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_robin_stocks$tda$authentication$$$function__3_generate_encryption_passcode();

        UPDATE_STRING_DICT1(moduledict_robin_stocks$tda$authentication, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_20);
    }

    return module_robin_stocks$tda$authentication;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

