/* Generated code for Python module 'robin_stocks.robinhood'
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

/* The "module_robin_stocks$robinhood" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_robin_stocks$robinhood;
PyDictObject *moduledict_robin_stocks$robinhood;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[189];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "robin_stocks.robinhood", 189);

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
void checkModuleConstants_robin_stocks$robinhood(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "robin_stocks.robinhood", 189);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cab0b543c34a10d0fff5aafabc40888a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[187]); CHECK_OBJECT(module_filename_obj);
    codeobj_cab0b543c34a10d0fff5aafabc40888a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[188], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_robin_stocks$robinhood[] = {

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

    function_impl_code *current = functable_robin_stocks$robinhood;
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

    if (offset > sizeof(functable_robin_stocks$robinhood) || offset < 0) {
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
        functable_robin_stocks$robinhood[offset],
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
        module_robin_stocks$robinhood,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "robin_stocks.robinhood";

// Internal entry point for module code.
PyObject *modulecode_robin_stocks$robinhood(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_robin_stocks$robinhood = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("robin_stocks.robinhood: Skipping module init, already done.\n");
#endif

        return module_robin_stocks$robinhood;
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
    PRINT_STRING("robin_stocks.robinhood: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("robin_stocks.robinhood: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("robin_stocks.robinhood: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrobin_stocks$robinhood\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_robin_stocks$robinhood = MODULE_DICT(module_robin_stocks$robinhood);

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
        moduledict_robin_stocks$robinhood,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_robin_stocks$robinhood,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_robin_stocks$robinhood,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_robin_stocks$robinhood,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_robin_stocks$robinhood,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_robin_stocks$robinhood);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_robin_stocks$robinhood);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    struct Nuitka_FrameObject *frame_cab0b543c34a10d0fff5aafabc40888a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_cab0b543c34a10d0fff5aafabc40888a = MAKE_MODULE_FRAME(codeobj_cab0b543c34a10d0fff5aafabc40888a, module_robin_stocks$robinhood);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_cab0b543c34a10d0fff5aafabc40888a);
    assert(Py_REFCNT(frame_cab0b543c34a10d0fff5aafabc40888a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = PyImport_ImportModule("os");
            if (likely(hard_module != NULL)) {
                tmp_expression_name_1 = PyObject_GetAttr(hard_module, mod_consts[2]);
            } else {
                tmp_expression_name_1 = NULL;
            }
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(3);
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_expression_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = PyImport_ImportModule("os");
                if (likely(hard_module != NULL)) {
                    tmp_expression_name_2 = PyObject_GetAttr(hard_module, mod_consts[2]);
                } else {
                    tmp_expression_name_2 = NULL;
                }
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[4]);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = PyImport_ImportModule("os");
                if (likely(hard_module != NULL)) {
                    tmp_called_instance_1 = PyObject_GetAttr(hard_module, mod_consts[5]);
                } else {
                    tmp_called_instance_1 = NULL;
                }
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[6],
                &PyTuple_GET_ITEM(mod_consts[7], 0)
            );

            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_name_3 = mod_consts[8];
            frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = PyImport_ImportModule("os");
                if (likely(hard_module != NULL)) {
                    tmp_called_instance_2 = PyObject_GetAttr(hard_module, mod_consts[5]);
                } else {
                    tmp_called_instance_2 = NULL;
                }
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[6],
                &PyTuple_GET_ITEM(mod_consts[9], 0)
            );

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        tmp_dictset_value = Nuitka_Loader_New(module_entry);
        tmp_dictset_dict = PySys_GetObject((char *)"path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_expression_name_3 == NULL));
        tmp_subscript_name_1 = mod_consts[11];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_name_3 == NULL)) {
            tmp_assattr_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[15], tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[17];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[18];
        tmp_level_name_1 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

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
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[20],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[20]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[21],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[21]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[22],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[22]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[23],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[23]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[24],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[24]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[25],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[25]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[26],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[26]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[27],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[27]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[28],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[28]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[29],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[29]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[30],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[30]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[31],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[31]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[32],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[32]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[33],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[33]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[34],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[34]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_16 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[35],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[35]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_17 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[36],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[36]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_18 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[37],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[37]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_19 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[38],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[38]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_20 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[39],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[39]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_21 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[40],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[40]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_22 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[41],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[41]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_23 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[42],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[42]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_24 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[43],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[43]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_25 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[44],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[44]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_26 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[45],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[45]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_27 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[46],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[46]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_28 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[47],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[47]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_29 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[48],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[48]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_30 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[49],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[49]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_31 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[50],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[50]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_32 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[51],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[51]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_37);
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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[52];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[53];
        tmp_level_name_2 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 18;
        tmp_assign_source_38 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_33 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[54],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[54]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_34 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[55],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[55]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_40);
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[56];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[57];
        tmp_level_name_3 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 19;
        tmp_assign_source_41 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_35 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[58],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[58]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_36 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[59],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[59]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_37 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[60],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[60]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_38 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[61],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[61]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_39 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[62],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[62]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_40 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[63],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[63]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_41 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[64],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[64]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_48);
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
        PyObject *tmp_assign_source_49;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[65];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[66];
        tmp_level_name_4 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 22;
        tmp_assign_source_49 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_49;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_42 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[67],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[67]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_43 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[68],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[68]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_44 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[69],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[69]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_52);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[70];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[71];
        tmp_level_name_5 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 25;
        tmp_assign_source_53 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_45 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[72],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[72]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_46 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[73],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[73]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_47 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[74],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[74]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_48 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[75],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[75]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_49 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[76],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[76]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_50 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[77],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[77]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_51 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[78],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[78]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_52 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[79],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[79]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_61);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[80];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[81];
        tmp_level_name_6 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 27;
        tmp_assign_source_62 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_62;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_53 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[82],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[82]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_54 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[83],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_54, mod_consts[83]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_55 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[84],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_55, mod_consts[84]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_56 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[85],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_56, mod_consts[85]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_57 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[86],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_57, mod_consts[86]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_58 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[87],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_58, mod_consts[87]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_59 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[88],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_59, mod_consts[88]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_60 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[89],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_60, mod_consts[89]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_61 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[90],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_61, mod_consts[90]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_62 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[91],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_62, mod_consts[91]);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_72);
    }
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[92];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[93];
        tmp_level_name_7 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 32;
        tmp_assign_source_73 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_73;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_63 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[94],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME(tmp_import_name_from_63, mod_consts[94]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_64 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[95],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME(tmp_import_name_from_64, mod_consts[95]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_65 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[96],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME(tmp_import_name_from_65, mod_consts[96]);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_66 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[97],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME(tmp_import_name_from_66, mod_consts[97]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_67 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[98],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME(tmp_import_name_from_67, mod_consts[98]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_68 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[99],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME(tmp_import_name_from_68, mod_consts[99]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_69 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[100],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME(tmp_import_name_from_69, mod_consts[100]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_70 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_70,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[101],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME(tmp_import_name_from_70, mod_consts[101]);
        }

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_71 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_71,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[102],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME(tmp_import_name_from_71, mod_consts[102]);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_72 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_72,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[103],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME(tmp_import_name_from_72, mod_consts[103]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_73 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_73,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[104],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME(tmp_import_name_from_73, mod_consts[104]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_74 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_74,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[105],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME(tmp_import_name_from_74, mod_consts[105]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_75 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_75,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[106],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME(tmp_import_name_from_75, mod_consts[106]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_76 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_76,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[107],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME(tmp_import_name_from_76, mod_consts[107]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_77 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_77,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[108],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME(tmp_import_name_from_77, mod_consts[108]);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_88);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[109];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[110];
        tmp_level_name_8 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 42;
        tmp_assign_source_89 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_89;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_78 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_78,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[111],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME(tmp_import_name_from_78, mod_consts[111]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_79 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_79,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[112],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME(tmp_import_name_from_79, mod_consts[112]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_80 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_80,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[113],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME(tmp_import_name_from_80, mod_consts[113]);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_81 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_81,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[114],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME(tmp_import_name_from_81, mod_consts[114]);
        }

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_82 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_82,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[115],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME(tmp_import_name_from_82, mod_consts[115]);
        }

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_83;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_83 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_83,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[116],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_95 = IMPORT_NAME(tmp_import_name_from_83, mod_consts[116]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_84;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_84 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_84,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[117],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_96 = IMPORT_NAME(tmp_import_name_from_84, mod_consts[117]);
        }

        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_85;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_85 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_85,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[118],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME(tmp_import_name_from_85, mod_consts[118]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_86;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_86 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_86,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[119],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME(tmp_import_name_from_86, mod_consts[119]);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_87;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_87 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_87,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[120],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME(tmp_import_name_from_87, mod_consts[120]);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_88;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_88 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_88,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[121],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME(tmp_import_name_from_88, mod_consts[121]);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_89;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_89 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_89,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[122],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_101 = IMPORT_NAME(tmp_import_name_from_89, mod_consts[122]);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_90;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_90 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_90,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[123],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME(tmp_import_name_from_90, mod_consts[123]);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_91 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_91,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[124],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME(tmp_import_name_from_91, mod_consts[124]);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_92 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_92,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[125],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_104 = IMPORT_NAME(tmp_import_name_from_92, mod_consts[125]);
        }

        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_93;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_93 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_93,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[126],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME(tmp_import_name_from_93, mod_consts[126]);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_94 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_94,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[127],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_106 = IMPORT_NAME(tmp_import_name_from_94, mod_consts[127]);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_95 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_95,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[128],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME(tmp_import_name_from_95, mod_consts[128]);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_96;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_96 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_96,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[129],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME(tmp_import_name_from_96, mod_consts[129]);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_97;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_97 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_97,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[130],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME(tmp_import_name_from_97, mod_consts[130]);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_98;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_98 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_98,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[131],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME(tmp_import_name_from_98, mod_consts[131]);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_import_name_from_99;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_99 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_111 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_99,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[132],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_111 = IMPORT_NAME(tmp_import_name_from_99, mod_consts[132]);
        }

        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_100;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_100 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_100,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[133],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME(tmp_import_name_from_100, mod_consts[133]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_101;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_101 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_101,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[134],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_113 = IMPORT_NAME(tmp_import_name_from_101, mod_consts[134]);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_102;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_102 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_102,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[135],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME(tmp_import_name_from_102, mod_consts[135]);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_103;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_103 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_103,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[136],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME(tmp_import_name_from_103, mod_consts[136]);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_104;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_104 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_104,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[137],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME(tmp_import_name_from_104, mod_consts[137]);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_105;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_105 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_105,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[138],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_117 = IMPORT_NAME(tmp_import_name_from_105, mod_consts[138]);
        }

        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_106;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_106 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_106,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[139],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME(tmp_import_name_from_106, mod_consts[139]);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_107;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_107 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_107,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[140],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME(tmp_import_name_from_107, mod_consts[140]);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_108;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_108 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_108,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[141],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME(tmp_import_name_from_108, mod_consts[141]);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_109;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_109 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_109,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[142],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_121 = IMPORT_NAME(tmp_import_name_from_109, mod_consts[142]);
        }

        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_110;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_110 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_110,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[143],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME(tmp_import_name_from_110, mod_consts[143]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_111;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_111 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_111,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[144],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME(tmp_import_name_from_111, mod_consts[144]);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_112;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_112 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_112,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[145],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME(tmp_import_name_from_112, mod_consts[145]);
        }

        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_113 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_113,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[146],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_125 = IMPORT_NAME(tmp_import_name_from_113, mod_consts[146]);
        }

        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_114 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_114,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[147],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME(tmp_import_name_from_114, mod_consts[147]);
        }

        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_115;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_115 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_115,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[148],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_127 = IMPORT_NAME(tmp_import_name_from_115, mod_consts[148]);
        }

        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_116;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_116 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_116,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[149],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME(tmp_import_name_from_116, mod_consts[149]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_117;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_117 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_117,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[150],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME(tmp_import_name_from_117, mod_consts[150]);
        }

        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_118;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_118 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_118,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[151],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_130 = IMPORT_NAME(tmp_import_name_from_118, mod_consts[151]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_119;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_119 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_131 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_119,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[152],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_131 = IMPORT_NAME(tmp_import_name_from_119, mod_consts[152]);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_120;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_120 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_120,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[153],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME(tmp_import_name_from_120, mod_consts[153]);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_121;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_121 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_121,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[154],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME(tmp_import_name_from_121, mod_consts[154]);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_122;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_122 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_122,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[155],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME(tmp_import_name_from_122, mod_consts[155]);
        }

        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_123;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_123 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_123,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[156],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME(tmp_import_name_from_123, mod_consts[156]);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_124;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_124 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_124)) {
            tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_124,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[157],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_136 = IMPORT_NAME(tmp_import_name_from_124, mod_consts[157]);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_136);
    }
    goto try_end_8;
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

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[158];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[159];
        tmp_level_name_9 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 66;
        tmp_assign_source_137 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_137;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_import_name_from_125;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_125 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_125)) {
            tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_125,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[160],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_138 = IMPORT_NAME(tmp_import_name_from_125, mod_consts[160]);
        }

        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_126;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_126 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_126)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_126,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[161],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME(tmp_import_name_from_126, mod_consts[161]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_127;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_127 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_127)) {
            tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_127,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[162],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_140 = IMPORT_NAME(tmp_import_name_from_127, mod_consts[162]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_import_name_from_128;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_128 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_128)) {
            tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_128,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[163],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_141 = IMPORT_NAME(tmp_import_name_from_128, mod_consts[163]);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_129;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_129 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_129)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_129,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[164],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME(tmp_import_name_from_129, mod_consts[164]);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_130;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_130 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_130)) {
            tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_130,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[165],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_143 = IMPORT_NAME(tmp_import_name_from_130, mod_consts[165]);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_143);
    }
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

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[166];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_robin_stocks$robinhood;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[167];
        tmp_level_name_10 = mod_consts[19];
        frame_cab0b543c34a10d0fff5aafabc40888a->m_frame.f_lineno = 69;
        tmp_assign_source_144 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_144;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_131;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_131 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_131)) {
            tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_131,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[168],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_145 = IMPORT_NAME(tmp_import_name_from_131, mod_consts[168]);
        }

        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_132;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_132 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_132)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_132,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[169],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME(tmp_import_name_from_132, mod_consts[169]);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_133;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_133 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_133)) {
            tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_133,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[170],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_147 = IMPORT_NAME(tmp_import_name_from_133, mod_consts[170]);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_134;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_134 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_134)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_134,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[171],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME(tmp_import_name_from_134, mod_consts[171]);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_135;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_135 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_135)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_135,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[172],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME(tmp_import_name_from_135, mod_consts[172]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_136;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_136 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_136)) {
            tmp_assign_source_150 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_136,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[173],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_150 = IMPORT_NAME(tmp_import_name_from_136, mod_consts[173]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_137;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_137 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_137)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_137,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[174],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME(tmp_import_name_from_137, mod_consts[174]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_138;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_138 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_138)) {
            tmp_assign_source_152 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_138,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[175],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_152 = IMPORT_NAME(tmp_import_name_from_138, mod_consts[175]);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_import_name_from_139;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_139 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_139)) {
            tmp_assign_source_153 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_139,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[176],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_153 = IMPORT_NAME(tmp_import_name_from_139, mod_consts[176]);
        }

        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_140;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_140 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_140)) {
            tmp_assign_source_154 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_140,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[177],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_154 = IMPORT_NAME(tmp_import_name_from_140, mod_consts[177]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_141;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_141 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_141)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_141,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[178],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME(tmp_import_name_from_141, mod_consts[178]);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_142;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_142 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_142)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_142,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[179],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME(tmp_import_name_from_142, mod_consts[179]);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_143;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_143 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_143)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_143,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[180],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME(tmp_import_name_from_143, mod_consts[180]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_144;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_144 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_144)) {
            tmp_assign_source_158 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_144,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[181],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_158 = IMPORT_NAME(tmp_import_name_from_144, mod_consts[181]);
        }

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_145;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_145 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_145)) {
            tmp_assign_source_159 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_145,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[182],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_159 = IMPORT_NAME(tmp_import_name_from_145, mod_consts[182]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_146;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_146 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_146)) {
            tmp_assign_source_160 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_146,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[183],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_160 = IMPORT_NAME(tmp_import_name_from_146, mod_consts[183]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_import_name_from_147;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_147 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_147)) {
            tmp_assign_source_161 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_147,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[184],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_161 = IMPORT_NAME(tmp_import_name_from_147, mod_consts[184]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_import_name_from_148;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_148 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_148)) {
            tmp_assign_source_162 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_148,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[185],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_162 = IMPORT_NAME(tmp_import_name_from_148, mod_consts[185]);
        }

        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_import_name_from_149;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_149 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_149)) {
            tmp_assign_source_163 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_149,
                (PyObject *)moduledict_robin_stocks$robinhood,
                mod_consts[186],
                mod_consts[19]
            );
        } else {
            tmp_assign_source_163 = IMPORT_NAME(tmp_import_name_from_149, mod_consts[186]);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_robin_stocks$robinhood, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_163);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cab0b543c34a10d0fff5aafabc40888a);
#endif
    popFrameStack();

    assertFrameObject(frame_cab0b543c34a10d0fff5aafabc40888a);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cab0b543c34a10d0fff5aafabc40888a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cab0b543c34a10d0fff5aafabc40888a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cab0b543c34a10d0fff5aafabc40888a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cab0b543c34a10d0fff5aafabc40888a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;

    return module_robin_stocks$robinhood;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

