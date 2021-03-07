/* Generated code for Python module 'cryptography.x509.oid'
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

/* The "module_cryptography$x509$oid" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$x509$oid;
PyDictObject *moduledict_cryptography$x509$oid;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[318];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cryptography.x509.oid", 318);

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
void checkModuleConstants_cryptography$x509$oid(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cryptography.x509.oid", 318);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_fefac9a68d257c9a1413d280774a4d30;
static PyCodeObject *codeobj_aed6b8133e0ef155e67c5baaaa3223ad;
static PyCodeObject *codeobj_a3f86ec74a0f882f41d71162fb2c597e;
static PyCodeObject *codeobj_83c736d3f500ef1ba5abf622178c6551;
static PyCodeObject *codeobj_b2ec4b532f158ecc85d13cc76b2cb826;
static PyCodeObject *codeobj_35db5752ad794a3c14ee59ce529c1eeb;
static PyCodeObject *codeobj_de8483b907a0fda796b19115e71c341f;
static PyCodeObject *codeobj_fd5a162683523a5dfc6412b2c39e5fa6;
static PyCodeObject *codeobj_3562dd0239f6564d42d0bb1d384e6a88;
static PyCodeObject *codeobj_92ee253e5583cca9aa0a031b20047d63;
static PyCodeObject *codeobj_eac08799dbb15df8939555dc2f420188;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[315]); CHECK_OBJECT(module_filename_obj);
    codeobj_fefac9a68d257c9a1413d280774a4d30 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[316], NULL, NULL, 0, 0, 0);
    codeobj_aed6b8133e0ef155e67c5baaaa3223ad = MAKE_CODEOBJECT(module_filename_obj, 160, CO_NOFREE, mod_consts[227], mod_consts[317], NULL, 0, 0, 0);
    codeobj_a3f86ec74a0f882f41d71162fb2c597e = MAKE_CODEOBJECT(module_filename_obj, 145, CO_NOFREE, mod_consts[212], mod_consts[317], NULL, 0, 0, 0);
    codeobj_83c736d3f500ef1ba5abf622178c6551 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_NOFREE, mod_consts[80], mod_consts[317], NULL, 0, 0, 0);
    codeobj_b2ec4b532f158ecc85d13cc76b2cb826 = MAKE_CODEOBJECT(module_filename_obj, 154, CO_NOFREE, mod_consts[220], mod_consts[317], NULL, 0, 0, 0);
    codeobj_35db5752ad794a3c14ee59ce529c1eeb = MAKE_CODEOBJECT(module_filename_obj, 135, CO_NOFREE, mod_consts[197], mod_consts[317], NULL, 0, 0, 0);
    codeobj_de8483b907a0fda796b19115e71c341f = MAKE_CODEOBJECT(module_filename_obj, 11, CO_NOFREE, mod_consts[18], mod_consts[317], NULL, 0, 0, 0);
    codeobj_fd5a162683523a5dfc6412b2c39e5fa6 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_NOFREE, mod_consts[87], mod_consts[317], NULL, 0, 0, 0);
    codeobj_3562dd0239f6564d42d0bb1d384e6a88 = MAKE_CODEOBJECT(module_filename_obj, 41, CO_NOFREE, mod_consts[77], mod_consts[317], NULL, 0, 0, 0);
    codeobj_92ee253e5583cca9aa0a031b20047d63 = MAKE_CODEOBJECT(module_filename_obj, 84, CO_NOFREE, mod_consts[144], mod_consts[317], NULL, 0, 0, 0);
    codeobj_eac08799dbb15df8939555dc2f420188 = MAKE_CODEOBJECT(module_filename_obj, 150, CO_NOFREE, mod_consts[217], mod_consts[317], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9__mro_entries_conversion(PyObject **python_pars);


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

function_impl_code functable_cryptography$x509$oid[] = {

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

    function_impl_code *current = functable_cryptography$x509$oid;
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

    if (offset > sizeof(functable_cryptography$x509$oid) || offset < 0) {
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
        functable_cryptography$x509$oid[offset],
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
        module_cryptography$x509$oid,
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
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cryptography.x509.oid";

// Internal entry point for module code.
PyObject *modulecode_cryptography$x509$oid(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cryptography$x509$oid = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.x509.oid: Skipping module init, already done.\n");
#endif

        return module_cryptography$x509$oid;
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
    PRINT_STRING("cryptography.x509.oid: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.x509.oid: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.x509.oid: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$x509$oid\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$x509$oid = MODULE_DICT(module_cryptography$x509$oid);

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
        moduledict_cryptography$x509$oid,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509$oid,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$x509$oid,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$oid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$oid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$x509$oid);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$x509$oid);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_fefac9a68d257c9a1413d280774a4d30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_cryptography$x509$oid$$$class__1_ExtensionOID_11 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_de8483b907a0fda796b19115e71c341f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_de8483b907a0fda796b19115e71c341f_2 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41 = NULL;
    struct Nuitka_FrameObject *frame_3562dd0239f6564d42d0bb1d384e6a88_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45 = NULL;
    struct Nuitka_FrameObject *frame_83c736d3f500ef1ba5abf622178c6551_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_83c736d3f500ef1ba5abf622178c6551_4 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__4_NameOID_51 = NULL;
    struct Nuitka_FrameObject *frame_fd5a162683523a5dfc6412b2c39e5fa6_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84 = NULL;
    struct Nuitka_FrameObject *frame_92ee253e5583cca9aa0a031b20047d63_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_92ee253e5583cca9aa0a031b20047d63_6 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135 = NULL;
    struct Nuitka_FrameObject *frame_35db5752ad794a3c14ee59ce529c1eeb_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145 = NULL;
    struct Nuitka_FrameObject *frame_a3f86ec74a0f882f41d71162fb2c597e_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150 = NULL;
    struct Nuitka_FrameObject *frame_eac08799dbb15df8939555dc2f420188_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_eac08799dbb15df8939555dc2f420188_9 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154 = NULL;
    struct Nuitka_FrameObject *frame_b2ec4b532f158ecc85d13cc76b2cb826_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10 = NULL;
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
    PyObject *locals_cryptography$x509$oid$$$class__10_AttributeOID_160 = NULL;
    struct Nuitka_FrameObject *frame_aed6b8133e0ef155e67c5baaaa3223ad_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_fefac9a68d257c9a1413d280774a4d30 = MAKE_MODULE_FRAME(codeobj_fefac9a68d257c9a1413d280774a4d30, module_cryptography$x509$oid);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_fefac9a68d257c9a1413d280774a4d30);
    assert(Py_REFCNT(frame_fefac9a68d257c9a1413d280774a4d30) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[7];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cryptography$x509$oid;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[8];
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 5;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[9];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_cryptography$x509$oid;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[10];
        tmp_level_name_2 = mod_consts[8];
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 7;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cryptography$x509$oid,
                mod_consts[11],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[12];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_cryptography$x509$oid;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[13];
        tmp_level_name_3 = mod_consts[8];
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cryptography$x509$oid,
                mod_consts[14],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[16];
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
        tmp_key_name_2 = mod_consts[16];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 11;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[17]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[17]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[18];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 11;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[19]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[21];
        tmp_getattr_default_1 = mod_consts[22];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[21]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
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


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 11;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_cryptography$x509$oid$$$class__1_ExtensionOID_11 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[18];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_de8483b907a0fda796b19115e71c341f_2)) {
            Py_XDECREF(cache_frame_de8483b907a0fda796b19115e71c341f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_de8483b907a0fda796b19115e71c341f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_de8483b907a0fda796b19115e71c341f_2 = MAKE_FUNCTION_FRAME(codeobj_de8483b907a0fda796b19115e71c341f, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_de8483b907a0fda796b19115e71c341f_2->m_type_description == NULL);
        frame_de8483b907a0fda796b19115e71c341f_2 = cache_frame_de8483b907a0fda796b19115e71c341f_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_de8483b907a0fda796b19115e71c341f_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_de8483b907a0fda796b19115e71c341f_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_2;
            tmp_called_name_2 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_2 == NULL)) {
                        tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 12;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_2);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 12;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[26]);
            Py_DECREF(tmp_called_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_3;
            tmp_called_name_3 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_3 == NULL)) {
                        tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 13;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_3);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 13;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[28]);
            Py_DECREF(tmp_called_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_4;
            tmp_called_name_4 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_4 == NULL)) {
                        tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 14;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_4);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 14;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, mod_consts[30]);
            Py_DECREF(tmp_called_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            tmp_called_name_5 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_5 == NULL)) {
                        tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 15;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_5);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 15;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[32]);
            Py_DECREF(tmp_called_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_6;
            tmp_called_name_6 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_6 == NULL)) {
                        tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 16;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_6);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 16;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, mod_consts[34]);
            Py_DECREF(tmp_called_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_7;
            tmp_called_name_7 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_7 == NULL)) {
                        tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 17;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_7);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 17;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, mod_consts[36]);
            Py_DECREF(tmp_called_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[37], tmp_dictset_value);
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
            PyObject *tmp_called_name_8;
            tmp_called_name_8 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_8 == NULL)) {
                        tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 18;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_8);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 18;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, mod_consts[38]);
            Py_DECREF(tmp_called_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_9;
            tmp_called_name_9 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_9 == NULL)) {
                        tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 19;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_9);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 19;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, mod_consts[40]);
            Py_DECREF(tmp_called_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_10;
            tmp_called_name_10 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_10 == NULL)) {
                        tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 20;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_10);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 20;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, mod_consts[42]);
            Py_DECREF(tmp_called_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_11;
            tmp_called_name_11 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_11 == NULL)) {
                        tmp_called_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 21;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_11);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 21;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, mod_consts[44]);
            Py_DECREF(tmp_called_name_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_12;
            tmp_called_name_12 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_12 == NULL)) {
                        tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 22;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_12);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 22;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, mod_consts[46]);
            Py_DECREF(tmp_called_name_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_13;
            tmp_called_name_13 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_13 == NULL)) {
                        tmp_called_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 23;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_13);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 23;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, mod_consts[48]);
            Py_DECREF(tmp_called_name_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_14;
            tmp_called_name_14 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_14 == NULL)) {
                        tmp_called_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_14);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 24;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, mod_consts[50]);
            Py_DECREF(tmp_called_name_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_15;
            tmp_called_name_15 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_15 == NULL)) {
                        tmp_called_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 25;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_15);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 25;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, mod_consts[52]);
            Py_DECREF(tmp_called_name_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_16;
            tmp_called_name_16 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_16 == NULL)) {
                        tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_16);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, mod_consts[54]);
            Py_DECREF(tmp_called_name_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_17;
            tmp_called_name_17 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_17 == NULL)) {
                        tmp_called_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 27;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_17);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 27;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, mod_consts[56]);
            Py_DECREF(tmp_called_name_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_18;
            tmp_called_name_18 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_18 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_18 == NULL)) {
                        tmp_called_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_18);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 28;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, mod_consts[58]);
            Py_DECREF(tmp_called_name_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_19;
            tmp_called_name_19 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_19 == NULL)) {
                        tmp_called_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_19);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, mod_consts[60]);
            Py_DECREF(tmp_called_name_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_20;
            tmp_called_name_20 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_20 == NULL)) {
                        tmp_called_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_20);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, mod_consts[62]);
            Py_DECREF(tmp_called_name_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_21;
            tmp_called_name_21 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_21 == NULL)) {
                        tmp_called_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_21);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 31;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, mod_consts[64]);
            Py_DECREF(tmp_called_name_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_22;
            tmp_called_name_22 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_22 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_22 == NULL)) {
                        tmp_called_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_22);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 32;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, mod_consts[66]);
            Py_DECREF(tmp_called_name_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_23;
            tmp_called_name_23 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_23 == NULL)) {
                        tmp_called_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_23);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 33;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, mod_consts[68]);
            Py_DECREF(tmp_called_name_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_24;
            tmp_called_name_24 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_24 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_24 == NULL)) {
                        tmp_called_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_24);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 34;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, mod_consts[70]);
            Py_DECREF(tmp_called_name_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_25;
            tmp_called_name_25 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_25 == NULL)) {
                        tmp_called_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_25);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 37;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, mod_consts[72]);
            Py_DECREF(tmp_called_name_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[73], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_26;
            tmp_called_name_26 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[11]);

            if (tmp_called_name_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_26 == NULL)) {
                        tmp_called_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 38;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_name_26);
                }
            }

            frame_de8483b907a0fda796b19115e71c341f_2->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, mod_consts[74]);
            Py_DECREF(tmp_called_name_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_de8483b907a0fda796b19115e71c341f_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_de8483b907a0fda796b19115e71c341f_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_de8483b907a0fda796b19115e71c341f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_de8483b907a0fda796b19115e71c341f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_de8483b907a0fda796b19115e71c341f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_de8483b907a0fda796b19115e71c341f_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_de8483b907a0fda796b19115e71c341f_2 == cache_frame_de8483b907a0fda796b19115e71c341f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_de8483b907a0fda796b19115e71c341f_2);
            cache_frame_de8483b907a0fda796b19115e71c341f_2 = NULL;
        }

        assertFrameObject(frame_de8483b907a0fda796b19115e71c341f_2);

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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[15];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_27;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_27 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[18];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_cryptography$x509$oid$$$class__1_ExtensionOID_11;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 11;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_name_27, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11);
        locals_cryptography$x509$oid$$$class__1_ExtensionOID_11 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__1_ExtensionOID_11);
        locals_cryptography$x509$oid$$$class__1_ExtensionOID_11 = NULL;
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
        exception_lineno = 11;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_15 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[16];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[8];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_17 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 41;

        goto try_except_handler_4;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_7, mod_consts[17]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[17]);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        tmp_tuple_element_4 = mod_consts[77];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 41;
        tmp_assign_source_18 = CALL_FUNCTION(tmp_called_name_28, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_28);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[19]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[21];
        tmp_getattr_default_2 = mod_consts[22];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_10 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[21]);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_5);
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


            exception_lineno = 41;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 41;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_19;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[77];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3)) {
            Py_XDECREF(cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3 = MAKE_FUNCTION_FRAME(codeobj_3562dd0239f6564d42d0bb1d384e6a88, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3->m_type_description == NULL);
        frame_3562dd0239f6564d42d0bb1d384e6a88_3 = cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3562dd0239f6564d42d0bb1d384e6a88_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3562dd0239f6564d42d0bb1d384e6a88_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_29;
            tmp_called_name_29 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41, mod_consts[11]);

            if (tmp_called_name_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_29 == NULL)) {
                        tmp_called_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 42;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_name_29);
                }
            }

            frame_3562dd0239f6564d42d0bb1d384e6a88_3->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, mod_consts[78]);
            Py_DECREF(tmp_called_name_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3562dd0239f6564d42d0bb1d384e6a88_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3562dd0239f6564d42d0bb1d384e6a88_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3562dd0239f6564d42d0bb1d384e6a88_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3562dd0239f6564d42d0bb1d384e6a88_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3562dd0239f6564d42d0bb1d384e6a88_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3562dd0239f6564d42d0bb1d384e6a88_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3562dd0239f6564d42d0bb1d384e6a88_3 == cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3);
            cache_frame_3562dd0239f6564d42d0bb1d384e6a88_3 = NULL;
        }

        assertFrameObject(frame_3562dd0239f6564d42d0bb1d384e6a88_3);

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
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = mod_consts[15];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_30;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_30 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[77];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 41;
            tmp_assign_source_21 = CALL_FUNCTION(tmp_called_name_30, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_20 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41);
        locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41);
        locals_cryptography$x509$oid$$$class__2_OCSPExtensionOID_41 = NULL;
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
        exception_lineno = 41;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_20);
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

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_22 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_arg_name_7;
        PyObject *tmp_dict_arg_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[16];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_name_11 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = mod_consts[8];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_11, tmp_subscript_name_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_24 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_arg_name_9;
        tmp_key_name_9 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;

        goto try_except_handler_7;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_name_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_12, mod_consts[17]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_13 = tmp_class_creation_3__metaclass;
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[17]);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = mod_consts[80];
        tmp_args_name_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_5, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_name_5, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 45;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_name_31, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_name_5);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_14, mod_consts[19]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[21];
        tmp_getattr_default_3 = mod_consts[22];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_name_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_name_15 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[21]);
            Py_DECREF(tmp_expression_name_15);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_8);
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


            exception_lineno = 45;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 45;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_26;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_9;
        }
        if (isFrameUnusable(cache_frame_83c736d3f500ef1ba5abf622178c6551_4)) {
            Py_XDECREF(cache_frame_83c736d3f500ef1ba5abf622178c6551_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_83c736d3f500ef1ba5abf622178c6551_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_83c736d3f500ef1ba5abf622178c6551_4 = MAKE_FUNCTION_FRAME(codeobj_83c736d3f500ef1ba5abf622178c6551, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_83c736d3f500ef1ba5abf622178c6551_4->m_type_description == NULL);
        frame_83c736d3f500ef1ba5abf622178c6551_4 = cache_frame_83c736d3f500ef1ba5abf622178c6551_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_83c736d3f500ef1ba5abf622178c6551_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_83c736d3f500ef1ba5abf622178c6551_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_32;
            tmp_called_name_32 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[11]);

            if (tmp_called_name_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_32 == NULL)) {
                        tmp_called_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_name_32);
                }
            }

            frame_83c736d3f500ef1ba5abf622178c6551_4->m_frame.f_lineno = 46;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, mod_consts[81]);
            Py_DECREF(tmp_called_name_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_name_33;
            tmp_called_name_33 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[11]);

            if (tmp_called_name_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_33 == NULL)) {
                        tmp_called_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_name_33);
                }
            }

            frame_83c736d3f500ef1ba5abf622178c6551_4->m_frame.f_lineno = 47;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, mod_consts[83]);
            Py_DECREF(tmp_called_name_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_name_34;
            tmp_called_name_34 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[11]);

            if (tmp_called_name_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_34 == NULL)) {
                        tmp_called_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_name_34);
                }
            }

            frame_83c736d3f500ef1ba5abf622178c6551_4->m_frame.f_lineno = 48;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, mod_consts[85]);
            Py_DECREF(tmp_called_name_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_83c736d3f500ef1ba5abf622178c6551_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_83c736d3f500ef1ba5abf622178c6551_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_83c736d3f500ef1ba5abf622178c6551_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_83c736d3f500ef1ba5abf622178c6551_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_83c736d3f500ef1ba5abf622178c6551_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_83c736d3f500ef1ba5abf622178c6551_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_83c736d3f500ef1ba5abf622178c6551_4 == cache_frame_83c736d3f500ef1ba5abf622178c6551_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_83c736d3f500ef1ba5abf622178c6551_4);
            cache_frame_83c736d3f500ef1ba5abf622178c6551_4 = NULL;
        }

        assertFrameObject(frame_83c736d3f500ef1ba5abf622178c6551_4);

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
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            tmp_compexpr_right_3 = mod_consts[15];
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto try_except_handler_9;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_12:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_9;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_name_35;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_35 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[80];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 45;
            tmp_assign_source_28 = CALL_FUNCTION(tmp_called_name_35, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_27 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45);
        locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45);
        locals_cryptography$x509$oid$$$class__3_CRLEntryExtensionOID_45 = NULL;
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
        exception_lineno = 45;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_27);
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

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_4;
        tmp_dircall_arg1_4 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_29 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_arg_name_10;
        PyObject *tmp_dict_arg_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_10, tmp_key_name_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = mod_consts[16];
        tmp_metaclass_name_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_name_16 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = mod_consts[8];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_16, tmp_subscript_name_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_arg_name_12;
        tmp_key_name_12 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_12, tmp_key_name_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 51;

        goto try_except_handler_10;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_17, mod_consts[17]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_18 = tmp_class_creation_4__metaclass;
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[17]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        tmp_tuple_element_10 = mod_consts[87];
        tmp_args_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_10 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_name_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 51;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_name_36, tmp_args_name_7, tmp_kwargs_name_7);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_name_7);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_19, mod_consts[19]);
        tmp_operand_name_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_name_4 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[21];
        tmp_getattr_default_4 = mod_consts[22];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_name_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_name_20 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[21]);
            Py_DECREF(tmp_expression_name_20);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_11);
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


            exception_lineno = 51;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 51;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_33;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_cryptography$x509$oid$$$class__4_NameOID_51 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_12;
        }
        if (isFrameUnusable(cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5)) {
            Py_XDECREF(cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5 = MAKE_FUNCTION_FRAME(codeobj_fd5a162683523a5dfc6412b2c39e5fa6, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_type_description == NULL);
        frame_fd5a162683523a5dfc6412b2c39e5fa6_5 = cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fd5a162683523a5dfc6412b2c39e5fa6_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fd5a162683523a5dfc6412b2c39e5fa6_5) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_37;
            tmp_called_name_37 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_37 == NULL)) {
                        tmp_called_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_37);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 52;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, mod_consts[88]);
            Py_DECREF(tmp_called_name_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_38;
            tmp_called_name_38 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_38 == NULL)) {
                        tmp_called_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_38);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 53;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, mod_consts[90]);
            Py_DECREF(tmp_called_name_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_39;
            tmp_called_name_39 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_39 == NULL)) {
                        tmp_called_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_39);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, mod_consts[92]);
            Py_DECREF(tmp_called_name_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_40;
            tmp_called_name_40 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_40 == NULL)) {
                        tmp_called_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 55;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_40);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 55;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, mod_consts[94]);
            Py_DECREF(tmp_called_name_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_41;
            tmp_called_name_41 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_41 == NULL)) {
                        tmp_called_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 56;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_41);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 56;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, mod_consts[96]);
            Py_DECREF(tmp_called_name_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_42;
            tmp_called_name_42 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_42 == NULL)) {
                        tmp_called_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 57;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_42);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 57;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, mod_consts[98]);
            Py_DECREF(tmp_called_name_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_43;
            tmp_called_name_43 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_43 == NULL)) {
                        tmp_called_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 58;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_43);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 58;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, mod_consts[100]);
            Py_DECREF(tmp_called_name_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_44;
            tmp_called_name_44 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_44 == NULL)) {
                        tmp_called_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_44);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 59;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, mod_consts[102]);
            Py_DECREF(tmp_called_name_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_45;
            tmp_called_name_45 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_45 == NULL)) {
                        tmp_called_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 60;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_45);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 60;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_45, mod_consts[104]);
            Py_DECREF(tmp_called_name_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[105], tmp_dictset_value);
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
            PyObject *tmp_called_name_46;
            tmp_called_name_46 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_46 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_46 == NULL)) {
                        tmp_called_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 61;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_46);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 61;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_46, mod_consts[106]);
            Py_DECREF(tmp_called_name_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_47;
            tmp_called_name_47 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_47 == NULL)) {
                        tmp_called_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 62;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_47);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, mod_consts[108]);
            Py_DECREF(tmp_called_name_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_48;
            tmp_called_name_48 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_48 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_48 == NULL)) {
                        tmp_called_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 63;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_48);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_48, mod_consts[110]);
            Py_DECREF(tmp_called_name_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_49;
            tmp_called_name_49 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_49 == NULL)) {
                        tmp_called_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 64;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_49);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 64;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, mod_consts[112]);
            Py_DECREF(tmp_called_name_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_50;
            tmp_called_name_50 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_50 == NULL)) {
                        tmp_called_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_50);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, mod_consts[114]);
            Py_DECREF(tmp_called_name_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_51;
            tmp_called_name_51 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_51 == NULL)) {
                        tmp_called_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_51);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 66;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_51, mod_consts[116]);
            Py_DECREF(tmp_called_name_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_52;
            tmp_called_name_52 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_52 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_52 == NULL)) {
                        tmp_called_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_52);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 67;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_52, mod_consts[118]);
            Py_DECREF(tmp_called_name_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[119], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_53;
            tmp_called_name_53 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_53 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_53 == NULL)) {
                        tmp_called_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_53);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 68;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, mod_consts[120]);
            Py_DECREF(tmp_called_name_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_54;
            tmp_called_name_54 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_54 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_54 == NULL)) {
                        tmp_called_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 69;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_54);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, mod_consts[122]);
            Py_DECREF(tmp_called_name_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_55;
            tmp_called_name_55 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_55 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_55 == NULL)) {
                        tmp_called_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 70;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_55);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, mod_consts[124]);
            Py_DECREF(tmp_called_name_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_56;
            tmp_called_name_56 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_56 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_56 == NULL)) {
                        tmp_called_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 71;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_56);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 71;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_56, mod_consts[126]);
            Py_DECREF(tmp_called_name_56);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_57;
            tmp_called_name_57 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_57 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_57 == NULL)) {
                        tmp_called_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_57);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 72;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_57, mod_consts[128]);
            Py_DECREF(tmp_called_name_57);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_58;
            tmp_called_name_58 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_58 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_58 == NULL)) {
                        tmp_called_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 75;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_58);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, mod_consts[130]);
            Py_DECREF(tmp_called_name_58);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_59;
            tmp_called_name_59 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_59 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_59 == NULL)) {
                        tmp_called_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_59);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 76;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_59, mod_consts[132]);
            Py_DECREF(tmp_called_name_59);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[133], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_60;
            tmp_called_name_60 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_60 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_60 == NULL)) {
                        tmp_called_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 77;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_60);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_60, mod_consts[134]);
            Py_DECREF(tmp_called_name_60);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[135], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_61;
            tmp_called_name_61 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_61 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_61 == NULL)) {
                        tmp_called_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 78;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_61);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 78;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_61, mod_consts[136]);
            Py_DECREF(tmp_called_name_61);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[137], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_62;
            tmp_called_name_62 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_62 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_62 == NULL)) {
                        tmp_called_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 79;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_62);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 79;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_62, mod_consts[138]);
            Py_DECREF(tmp_called_name_62);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[139], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_63;
            tmp_called_name_63 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_63 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_63 == NULL)) {
                        tmp_called_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_63 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 80;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_63);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_63, mod_consts[140]);
            Py_DECREF(tmp_called_name_63);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_name_64;
            tmp_called_name_64 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[11]);

            if (tmp_called_name_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_64 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_64 == NULL)) {
                        tmp_called_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 81;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_name_64);
                }
            }

            frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame.f_lineno = 81;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_64, mod_consts[142]);
            Py_DECREF(tmp_called_name_64);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fd5a162683523a5dfc6412b2c39e5fa6_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fd5a162683523a5dfc6412b2c39e5fa6_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fd5a162683523a5dfc6412b2c39e5fa6_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fd5a162683523a5dfc6412b2c39e5fa6_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fd5a162683523a5dfc6412b2c39e5fa6_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fd5a162683523a5dfc6412b2c39e5fa6_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_fd5a162683523a5dfc6412b2c39e5fa6_5 == cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5);
            cache_frame_fd5a162683523a5dfc6412b2c39e5fa6_5 = NULL;
        }

        assertFrameObject(frame_fd5a162683523a5dfc6412b2c39e5fa6_5);

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
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            tmp_compexpr_right_4 = mod_consts[15];
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto try_except_handler_12;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_16:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__4_NameOID_51, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_12;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_65;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_65 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = mod_consts[87];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_cryptography$x509$oid$$$class__4_NameOID_51;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 51;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_name_65, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_34 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__4_NameOID_51);
        locals_cryptography$x509$oid$$$class__4_NameOID_51 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__4_NameOID_51);
        locals_cryptography$x509$oid$$$class__4_NameOID_51 = NULL;
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
        exception_lineno = 51;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_34);
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

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_36 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_arg_name_13;
        PyObject *tmp_dict_arg_name_14;
        PyObject *tmp_key_name_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_13, tmp_key_name_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = mod_consts[16];
        tmp_metaclass_name_5 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_14, tmp_key_name_14);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_name_21 = tmp_class_creation_5__bases;
        tmp_subscript_name_5 = mod_consts[8];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_21, tmp_subscript_name_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_5);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_name_5, tmp_bases_name_5);
        Py_DECREF(tmp_metaclass_name_5);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_arg_name_15;
        tmp_key_name_15 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_15, tmp_key_name_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 84;

        goto try_except_handler_13;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_name_22;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_22 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_22, mod_consts[17]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_66;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_name_9;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_name_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_23 = tmp_class_creation_5__metaclass;
        tmp_called_name_66 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[17]);
        if (tmp_called_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        tmp_tuple_element_13 = mod_consts[144];
        tmp_args_name_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_9, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_13 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_name_9, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_name_9 = tmp_class_creation_5__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 84;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_name_66, tmp_args_name_9, tmp_kwargs_name_9);
        Py_DECREF(tmp_called_name_66);
        Py_DECREF(tmp_args_name_9);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_expression_name_24;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_name_24 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_24, mod_consts[19]);
        tmp_operand_name_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_name_5 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[21];
        tmp_getattr_default_5 = mod_consts[22];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        tmp_right_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_25;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_right_name_5, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_name_25 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_name_25 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[21]);
            Py_DECREF(tmp_expression_name_25);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_name_5, 1, tmp_tuple_element_14);
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


            exception_lineno = 84;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 84;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_40;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_15;
        }
        if (isFrameUnusable(cache_frame_92ee253e5583cca9aa0a031b20047d63_6)) {
            Py_XDECREF(cache_frame_92ee253e5583cca9aa0a031b20047d63_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_92ee253e5583cca9aa0a031b20047d63_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_92ee253e5583cca9aa0a031b20047d63_6 = MAKE_FUNCTION_FRAME(codeobj_92ee253e5583cca9aa0a031b20047d63, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_92ee253e5583cca9aa0a031b20047d63_6->m_type_description == NULL);
        frame_92ee253e5583cca9aa0a031b20047d63_6 = cache_frame_92ee253e5583cca9aa0a031b20047d63_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_92ee253e5583cca9aa0a031b20047d63_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_92ee253e5583cca9aa0a031b20047d63_6) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_67;
            tmp_called_name_67 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_67 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_67 == NULL)) {
                        tmp_called_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_67 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_67);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_67, mod_consts[145]);
            Py_DECREF(tmp_called_name_67);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_68;
            tmp_called_name_68 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_68 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_68 == NULL)) {
                        tmp_called_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 86;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_68);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_68, mod_consts[147]);
            Py_DECREF(tmp_called_name_68);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[148], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_69;
            tmp_called_name_69 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_69 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_69 == NULL)) {
                        tmp_called_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_69);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_69, mod_consts[149]);
            Py_DECREF(tmp_called_name_69);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_70;
            tmp_called_name_70 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_70 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_70 == NULL)) {
                        tmp_called_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 89;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_70);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 89;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_70, mod_consts[151]);
            Py_DECREF(tmp_called_name_70);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_71;
            tmp_called_name_71 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_71 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_71 == NULL)) {
                        tmp_called_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_71 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_71);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_71, mod_consts[153]);
            Py_DECREF(tmp_called_name_71);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_72;
            tmp_called_name_72 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_72 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_72 == NULL)) {
                        tmp_called_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_72);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_72, mod_consts[155]);
            Py_DECREF(tmp_called_name_72);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_73;
            tmp_called_name_73 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_73 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_73 == NULL)) {
                        tmp_called_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_73);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_73, mod_consts[157]);
            Py_DECREF(tmp_called_name_73);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[158], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_74;
            tmp_called_name_74 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_74 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_74 == NULL)) {
                        tmp_called_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 93;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_74);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_74, mod_consts[159]);
            Py_DECREF(tmp_called_name_74);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_75;
            tmp_called_name_75 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_75 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_75 == NULL)) {
                        tmp_called_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_75 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 94;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_75);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 94;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_75, mod_consts[161]);
            Py_DECREF(tmp_called_name_75);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[162], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_76;
            tmp_called_name_76 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_76 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_76 == NULL)) {
                        tmp_called_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_76);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 95;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_76, mod_consts[163]);
            Py_DECREF(tmp_called_name_76);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[164], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_77;
            tmp_called_name_77 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_77 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_77 == NULL)) {
                        tmp_called_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_77 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 96;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_77);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 96;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_77, mod_consts[165]);
            Py_DECREF(tmp_called_name_77);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_78;
            tmp_called_name_78 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_78 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_78 == NULL)) {
                        tmp_called_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 97;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_78);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 97;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_78, mod_consts[167]);
            Py_DECREF(tmp_called_name_78);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[168], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_79;
            tmp_called_name_79 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_79 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_79 == NULL)) {
                        tmp_called_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 98;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_79);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 98;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_79, mod_consts[169]);
            Py_DECREF(tmp_called_name_79);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_80;
            tmp_called_name_80 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_80 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_80 == NULL)) {
                        tmp_called_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_80 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_80);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_80, mod_consts[171]);
            Py_DECREF(tmp_called_name_80);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_81;
            tmp_called_name_81 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_81 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_81 == NULL)) {
                        tmp_called_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_81);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 100;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_81, mod_consts[173]);
            Py_DECREF(tmp_called_name_81);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[174], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_82;
            tmp_called_name_82 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_82 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_82 == NULL)) {
                        tmp_called_name_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 101;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_82);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 101;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_82, mod_consts[175]);
            Py_DECREF(tmp_called_name_82);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[176], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_83;
            tmp_called_name_83 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_83 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_83 == NULL)) {
                        tmp_called_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_83);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 102;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_83, mod_consts[177]);
            Py_DECREF(tmp_called_name_83);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_84;
            tmp_called_name_84 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_84 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_84 == NULL)) {
                        tmp_called_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_84 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_84);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 103;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_84, mod_consts[179]);
            Py_DECREF(tmp_called_name_84);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[180], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_85;
            tmp_called_name_85 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_85 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_85 == NULL)) {
                        tmp_called_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_85 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 104;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_85);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 104;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_85, mod_consts[181]);
            Py_DECREF(tmp_called_name_85);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[182], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_86;
            tmp_called_name_86 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_86 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_86 == NULL)) {
                        tmp_called_name_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_86 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_86);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 105;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_86, mod_consts[183]);
            Py_DECREF(tmp_called_name_86);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[184], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_name_87;
            tmp_called_name_87 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[11]);

            if (tmp_called_name_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_87 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_87 == NULL)) {
                        tmp_called_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 106;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_name_87);
                }
            }

            frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame.f_lineno = 106;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_87, mod_consts[185]);
            Py_DECREF(tmp_called_name_87);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[186], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_92ee253e5583cca9aa0a031b20047d63_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_92ee253e5583cca9aa0a031b20047d63_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_92ee253e5583cca9aa0a031b20047d63_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_92ee253e5583cca9aa0a031b20047d63_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_92ee253e5583cca9aa0a031b20047d63_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_92ee253e5583cca9aa0a031b20047d63_6,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_92ee253e5583cca9aa0a031b20047d63_6 == cache_frame_92ee253e5583cca9aa0a031b20047d63_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_92ee253e5583cca9aa0a031b20047d63_6);
            cache_frame_92ee253e5583cca9aa0a031b20047d63_6 = NULL;
        }

        assertFrameObject(frame_92ee253e5583cca9aa0a031b20047d63_6);

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
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_compexpr_left_5 = tmp_class_creation_5__bases;
            tmp_compexpr_right_5 = mod_consts[15];
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
            assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_20:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_15;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_name_88;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_name_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_name_88 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_15 = mod_consts[144];
            tmp_args_name_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_10, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_15 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_name_10, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84;
            PyTuple_SET_ITEM0(tmp_args_name_10, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 84;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_name_88, tmp_args_name_10, tmp_kwargs_name_10);
            Py_DECREF(tmp_args_name_10);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_41 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84);
        locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84);
        locals_cryptography$x509$oid$$$class__5_SignatureAlgorithmOID_84 = NULL;
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
        exception_lineno = 84;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_41);
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

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_called_instance_1;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[146]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 112;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[187]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_43 = _PyDict_NewPresized( 20 );
        {
            PyObject *tmp_expression_name_27;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_name_28;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_name_29;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_expression_name_30;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_expression_name_31;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_expression_name_32;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_expression_name_33;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_expression_name_34;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_expression_name_35;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_expression_name_36;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_expression_name_37;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_expression_name_38;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_expression_name_39;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_expression_name_40;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_expression_name_41;
            PyObject *tmp_expression_name_42;
            PyObject *tmp_expression_name_43;
            PyObject *tmp_expression_name_44;
            PyObject *tmp_expression_name_45;
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_27 == NULL)) {
                tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[148]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 113;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[188]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_28 == NULL)) {
                tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[150]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 114;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[188]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_29 == NULL)) {
                tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[152]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 115;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[189]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_30 == NULL)) {
                tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[154]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_1;
            }
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 116;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 116;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[190]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 116;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_31 == NULL)) {
                tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[156]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 117;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[191]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_32 == NULL)) {
                tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[158]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto dict_build_exception_1;
            }
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 118;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 118;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[192]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 118;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_33 == NULL)) {
                tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[162]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_1;
            }
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 119;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 119;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[188]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 119;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_34 == NULL)) {
                tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[164]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 120;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[189]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_35 == NULL)) {
                tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[166]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 121;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[190]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_36 == NULL)) {
                tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[168]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 122;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[191]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_37 == NULL)) {
                tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[170]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 123;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[192]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_38 == NULL)) {
                tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[172]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 124;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[188]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_39 == NULL)) {
                tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[174]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_1;
            }
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 125;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 125;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[189]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 125;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_40 == NULL)) {
                tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[176]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 126;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[190]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_41 == NULL)) {
                tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[178]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_42 == NULL)) {
                tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[180]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_43 == NULL)) {
                tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[182]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_44 == NULL)) {
                tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[184]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_45 == NULL)) {
                tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[186]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_assign_source_43, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_43);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_43);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[194]);
        if (tmp_expression_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_name_46);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_48;
            PyObject *tmp_expression_name_49;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_expression_name_50;
            PyTuple_SET_ITEM0(tmp_subscript_name_6, 0, tmp_tuple_element_16);
            tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_name_49 == NULL)) {
                tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_expression_name_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            tmp_expression_name_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[195]);
            if (tmp_expression_name_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_name_50 == NULL)) {
                tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_name_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_name_48);

                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            tmp_subscript_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[196]);
            if (tmp_subscript_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_name_48);

                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_48, tmp_subscript_name_7);
            Py_DECREF(tmp_expression_name_48);
            Py_DECREF(tmp_subscript_name_7);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_6, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_expression_name_46);
        Py_DECREF(tmp_subscript_name_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_46, tmp_subscript_name_6);
        Py_DECREF(tmp_expression_name_46);
        Py_DECREF(tmp_subscript_name_6);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[193];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_6;
        tmp_dircall_arg1_6 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_44 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_arg_name_16;
        PyObject *tmp_dict_arg_name_17;
        PyObject *tmp_key_name_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_16, tmp_key_name_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = mod_consts[16];
        tmp_metaclass_name_6 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_17, tmp_key_name_17);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_name_51 = tmp_class_creation_6__bases;
        tmp_subscript_name_8 = mod_consts[8];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_51, tmp_subscript_name_8, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_6);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_name_6, tmp_bases_name_6);
        Py_DECREF(tmp_metaclass_name_6);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_arg_name_18;
        tmp_key_name_18 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_18, tmp_key_name_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 135;

        goto try_except_handler_16;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_name_52;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_52 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_52, mod_consts[17]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_89;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_args_name_11;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_name_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_53 = tmp_class_creation_6__metaclass;
        tmp_called_name_89 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[17]);
        if (tmp_called_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        tmp_tuple_element_17 = mod_consts[197];
        tmp_args_name_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_11, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_17 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_name_11, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_name_11 = tmp_class_creation_6__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 135;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_name_89, tmp_args_name_11, tmp_kwargs_name_11);
        Py_DECREF(tmp_called_name_89);
        Py_DECREF(tmp_args_name_11);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_expression_name_54;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_name_54 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_54, mod_consts[19]);
        tmp_operand_name_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_name_6 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[21];
        tmp_getattr_default_6 = mod_consts[22];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        tmp_right_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_55;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_name_55 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_name_55 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[21]);
            Py_DECREF(tmp_expression_name_55);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_right_name_6, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_name_6);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 135;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_48;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[197];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_18;
        }
        if (isFrameUnusable(cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7)) {
            Py_XDECREF(cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7 = MAKE_FUNCTION_FRAME(codeobj_35db5752ad794a3c14ee59ce529c1eeb, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_type_description == NULL);
        frame_35db5752ad794a3c14ee59ce529c1eeb_7 = cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_35db5752ad794a3c14ee59ce529c1eeb_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_35db5752ad794a3c14ee59ce529c1eeb_7) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_90;
            tmp_called_name_90 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[11]);

            if (tmp_called_name_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_90 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_90 == NULL)) {
                        tmp_called_name_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_90 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 136;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_name_90);
                }
            }

            frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame.f_lineno = 136;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_90, mod_consts[198]);
            Py_DECREF(tmp_called_name_90);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[199], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_name_91;
            tmp_called_name_91 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[11]);

            if (tmp_called_name_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_91 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_91 == NULL)) {
                        tmp_called_name_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 137;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_name_91);
                }
            }

            frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_91, mod_consts[200]);
            Py_DECREF(tmp_called_name_91);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[201], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_name_92;
            tmp_called_name_92 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[11]);

            if (tmp_called_name_92 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_92 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_92 == NULL)) {
                        tmp_called_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_92 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_name_92);
                }
            }

            frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_92, mod_consts[202]);
            Py_DECREF(tmp_called_name_92);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[203], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_name_93;
            tmp_called_name_93 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[11]);

            if (tmp_called_name_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_93 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_93 == NULL)) {
                        tmp_called_name_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_93 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 139;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_name_93);
                }
            }

            frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_93, mod_consts[204]);
            Py_DECREF(tmp_called_name_93);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_name_94;
            tmp_called_name_94 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[11]);

            if (tmp_called_name_94 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_94 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_94 == NULL)) {
                        tmp_called_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_94 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_name_94);
                }
            }

            frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame.f_lineno = 140;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_94, mod_consts[206]);
            Py_DECREF(tmp_called_name_94);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[207], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_name_95;
            tmp_called_name_95 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[11]);

            if (tmp_called_name_95 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_95 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_95 == NULL)) {
                        tmp_called_name_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_95 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 141;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_name_95);
                }
            }

            frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame.f_lineno = 141;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_95, mod_consts[208]);
            Py_DECREF(tmp_called_name_95);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_name_96;
            tmp_called_name_96 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[11]);

            if (tmp_called_name_96 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_96 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_96 == NULL)) {
                        tmp_called_name_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_96 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 142;
                        type_description_2 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_called_name_96);
                }
            }

            frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame.f_lineno = 142;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_96, mod_consts[210]);
            Py_DECREF(tmp_called_name_96);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[211], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_35db5752ad794a3c14ee59ce529c1eeb_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_35db5752ad794a3c14ee59ce529c1eeb_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_35db5752ad794a3c14ee59ce529c1eeb_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_35db5752ad794a3c14ee59ce529c1eeb_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_35db5752ad794a3c14ee59ce529c1eeb_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_35db5752ad794a3c14ee59ce529c1eeb_7,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_35db5752ad794a3c14ee59ce529c1eeb_7 == cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7);
            cache_frame_35db5752ad794a3c14ee59ce529c1eeb_7 = NULL;
        }

        assertFrameObject(frame_35db5752ad794a3c14ee59ce529c1eeb_7);

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
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_compexpr_left_6 = tmp_class_creation_6__bases;
            tmp_compexpr_right_6 = mod_consts[15];
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
            assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_24:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_18;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_97;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_name_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_name_97 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_19 = mod_consts[197];
            tmp_args_name_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_12, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_19 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_name_12, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135;
            PyTuple_SET_ITEM0(tmp_args_name_12, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 135;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_name_97, tmp_args_name_12, tmp_kwargs_name_12);
            Py_DECREF(tmp_args_name_12);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_49 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135);
        locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135);
        locals_cryptography$x509$oid$$$class__6_ExtendedKeyUsageOID_135 = NULL;
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
        exception_lineno = 135;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_49);
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

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_7;
        tmp_dircall_arg1_7 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_51 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_arg_name_19;
        PyObject *tmp_dict_arg_name_20;
        PyObject *tmp_key_name_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_19, tmp_key_name_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = mod_consts[16];
        tmp_metaclass_name_7 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_20, tmp_key_name_20);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_name_56 = tmp_class_creation_7__bases;
        tmp_subscript_name_9 = mod_consts[8];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_56, tmp_subscript_name_9, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_7);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_name_7, tmp_bases_name_7);
        Py_DECREF(tmp_metaclass_name_7);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_53;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_arg_name_21;
        tmp_key_name_21 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_21, tmp_key_name_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 145;

        goto try_except_handler_19;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_name_57;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_57 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_57, mod_consts[17]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_98;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_args_name_13;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_name_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_58 = tmp_class_creation_7__metaclass;
        tmp_called_name_98 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[17]);
        if (tmp_called_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        tmp_tuple_element_20 = mod_consts[212];
        tmp_args_name_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_13, 0, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_20 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_name_13, 1, tmp_tuple_element_20);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_name_13 = tmp_class_creation_7__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 145;
        tmp_assign_source_54 = CALL_FUNCTION(tmp_called_name_98, tmp_args_name_13, tmp_kwargs_name_13);
        Py_DECREF(tmp_called_name_98);
        Py_DECREF(tmp_args_name_13);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_expression_name_59;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_name_59 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_59, mod_consts[19]);
        tmp_operand_name_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_name_7 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[21];
        tmp_getattr_default_7 = mod_consts[22];
        tmp_tuple_element_21 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        tmp_right_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_60;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_right_name_7, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_name_60 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_name_60 == NULL));
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[21]);
            Py_DECREF(tmp_expression_name_60);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_right_name_7, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_right_name_7);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 145;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_55;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_56;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[212];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_21;
        }
        if (isFrameUnusable(cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8)) {
            Py_XDECREF(cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8 = MAKE_FUNCTION_FRAME(codeobj_a3f86ec74a0f882f41d71162fb2c597e, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8->m_type_description == NULL);
        frame_a3f86ec74a0f882f41d71162fb2c597e_8 = cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a3f86ec74a0f882f41d71162fb2c597e_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a3f86ec74a0f882f41d71162fb2c597e_8) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_99;
            tmp_called_name_99 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145, mod_consts[11]);

            if (tmp_called_name_99 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_99 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_99 == NULL)) {
                        tmp_called_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_99 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_name_99);
                }
            }

            frame_a3f86ec74a0f882f41d71162fb2c597e_8->m_frame.f_lineno = 146;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_99, mod_consts[213]);
            Py_DECREF(tmp_called_name_99);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145, mod_consts[214], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_name_100;
            tmp_called_name_100 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145, mod_consts[11]);

            if (tmp_called_name_100 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_100 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_100 == NULL)) {
                        tmp_called_name_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_100 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 147;
                        type_description_2 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_called_name_100);
                }
            }

            frame_a3f86ec74a0f882f41d71162fb2c597e_8->m_frame.f_lineno = 147;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_100, mod_consts[215]);
            Py_DECREF(tmp_called_name_100);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145, mod_consts[216], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a3f86ec74a0f882f41d71162fb2c597e_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a3f86ec74a0f882f41d71162fb2c597e_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a3f86ec74a0f882f41d71162fb2c597e_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a3f86ec74a0f882f41d71162fb2c597e_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a3f86ec74a0f882f41d71162fb2c597e_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a3f86ec74a0f882f41d71162fb2c597e_8,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a3f86ec74a0f882f41d71162fb2c597e_8 == cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8);
            cache_frame_a3f86ec74a0f882f41d71162fb2c597e_8 = NULL;
        }

        assertFrameObject(frame_a3f86ec74a0f882f41d71162fb2c597e_8);

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
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_compexpr_left_7 = tmp_class_creation_7__bases;
            tmp_compexpr_right_7 = mod_consts[15];
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
            assert(tmp_condition_result_42 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_28:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_21;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_name_101;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_name_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_name_101 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_22 = mod_consts[212];
            tmp_args_name_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_14, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_22 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_name_14, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145;
            PyTuple_SET_ITEM0(tmp_args_name_14, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 145;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_name_101, tmp_args_name_14, tmp_kwargs_name_14);
            Py_DECREF(tmp_args_name_14);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_56 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_56);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145);
        locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145);
        locals_cryptography$x509$oid$$$class__7_AuthorityInformationAccessOID_145 = NULL;
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
        exception_lineno = 145;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_56);
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

    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_dircall_arg1_8;
        tmp_dircall_arg1_8 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_58 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = PyDict_New();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_arg_name_22;
        PyObject *tmp_dict_arg_name_23;
        PyObject *tmp_key_name_23;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_22, tmp_key_name_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = mod_consts[16];
        tmp_metaclass_name_8 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_23, tmp_key_name_23);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        tmp_condition_result_44 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_name_61 = tmp_class_creation_8__bases;
        tmp_subscript_name_10 = mod_consts[8];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_61, tmp_subscript_name_10, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        tmp_metaclass_name_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_8);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_name_8 = tmp_class_creation_8__bases;
        tmp_assign_source_60 = SELECT_METACLASS(tmp_metaclass_name_8, tmp_bases_name_8);
        Py_DECREF(tmp_metaclass_name_8);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_60;
    }
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_arg_name_24;
        tmp_key_name_24 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_24, tmp_key_name_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 150;

        goto try_except_handler_22;
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_expression_name_62;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_62 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_62, mod_consts[17]);
        tmp_condition_result_46 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_102;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_args_name_15;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_kwargs_name_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_63 = tmp_class_creation_8__metaclass;
        tmp_called_name_102 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[17]);
        if (tmp_called_name_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        tmp_tuple_element_23 = mod_consts[217];
        tmp_args_name_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_15, 0, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_23 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_name_15, 1, tmp_tuple_element_23);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_name_15 = tmp_class_creation_8__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 150;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_name_102, tmp_args_name_15, tmp_kwargs_name_15);
        Py_DECREF(tmp_called_name_102);
        Py_DECREF(tmp_args_name_15);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_operand_name_8;
        PyObject *tmp_expression_name_64;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_name_64 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_64, mod_consts[19]);
        tmp_operand_name_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_left_name_8 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[21];
        tmp_getattr_default_8 = mod_consts[22];
        tmp_tuple_element_24 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        tmp_right_name_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_65;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_right_name_8, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_name_65 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_name_65 == NULL));
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[21]);
            Py_DECREF(tmp_expression_name_65);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_right_name_8, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_right_name_8);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 150;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_62;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[217];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_24;
        }
        if (isFrameUnusable(cache_frame_eac08799dbb15df8939555dc2f420188_9)) {
            Py_XDECREF(cache_frame_eac08799dbb15df8939555dc2f420188_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_eac08799dbb15df8939555dc2f420188_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_eac08799dbb15df8939555dc2f420188_9 = MAKE_FUNCTION_FRAME(codeobj_eac08799dbb15df8939555dc2f420188, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_eac08799dbb15df8939555dc2f420188_9->m_type_description == NULL);
        frame_eac08799dbb15df8939555dc2f420188_9 = cache_frame_eac08799dbb15df8939555dc2f420188_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_eac08799dbb15df8939555dc2f420188_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_eac08799dbb15df8939555dc2f420188_9) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_103;
            tmp_called_name_103 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150, mod_consts[11]);

            if (tmp_called_name_103 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_103 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_103 == NULL)) {
                        tmp_called_name_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_103 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 151;
                        type_description_2 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_called_name_103);
                }
            }

            frame_eac08799dbb15df8939555dc2f420188_9->m_frame.f_lineno = 151;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_103, mod_consts[218]);
            Py_DECREF(tmp_called_name_103);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150, mod_consts[219], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eac08799dbb15df8939555dc2f420188_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_eac08799dbb15df8939555dc2f420188_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eac08799dbb15df8939555dc2f420188_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eac08799dbb15df8939555dc2f420188_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eac08799dbb15df8939555dc2f420188_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eac08799dbb15df8939555dc2f420188_9,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_eac08799dbb15df8939555dc2f420188_9 == cache_frame_eac08799dbb15df8939555dc2f420188_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_eac08799dbb15df8939555dc2f420188_9);
            cache_frame_eac08799dbb15df8939555dc2f420188_9 = NULL;
        }

        assertFrameObject(frame_eac08799dbb15df8939555dc2f420188_9);

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
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_compexpr_left_8 = tmp_class_creation_8__bases;
            tmp_compexpr_right_8 = mod_consts[15];
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
            assert(tmp_condition_result_48 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_32:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_24;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_name_104;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_name_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_name_104 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_25 = mod_consts[217];
            tmp_args_name_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_16, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_25 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_name_16, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150;
            PyTuple_SET_ITEM0(tmp_args_name_16, 2, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 150;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_name_104, tmp_args_name_16, tmp_kwargs_name_16);
            Py_DECREF(tmp_args_name_16);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_63 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_63);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150);
        locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150);
        locals_cryptography$x509$oid$$$class__8_SubjectInformationAccessOID_150 = NULL;
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
        exception_lineno = 150;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_63);
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

    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_dircall_arg1_9;
        tmp_dircall_arg1_9 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_65 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = PyDict_New();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_metaclass_name_9;
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_arg_name_25;
        PyObject *tmp_dict_arg_name_26;
        PyObject *tmp_key_name_26;
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_bases_name_9;
        tmp_key_name_25 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_25, tmp_key_name_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_name_26 = mod_consts[16];
        tmp_metaclass_name_9 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_26, tmp_key_name_26);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        tmp_condition_result_50 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_name_66 = tmp_class_creation_9__bases;
        tmp_subscript_name_11 = mod_consts[8];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_66, tmp_subscript_name_11, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        tmp_metaclass_name_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_9);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_name_9 = tmp_class_creation_9__bases;
        tmp_assign_source_67 = SELECT_METACLASS(tmp_metaclass_name_9, tmp_bases_name_9);
        Py_DECREF(tmp_metaclass_name_9);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_67;
    }
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_arg_name_27;
        tmp_key_name_27 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_27, tmp_key_name_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 154;

        goto try_except_handler_25;
    }
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_name_67;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_67 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_67, mod_consts[17]);
        tmp_condition_result_52 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_name_105;
        PyObject *tmp_expression_name_68;
        PyObject *tmp_args_name_17;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_kwargs_name_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_68 = tmp_class_creation_9__metaclass;
        tmp_called_name_105 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[17]);
        if (tmp_called_name_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        tmp_tuple_element_26 = mod_consts[220];
        tmp_args_name_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_17, 0, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_26 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_name_17, 1, tmp_tuple_element_26);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_name_17 = tmp_class_creation_9__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 154;
        tmp_assign_source_68 = CALL_FUNCTION(tmp_called_name_105, tmp_args_name_17, tmp_kwargs_name_17);
        Py_DECREF(tmp_called_name_105);
        Py_DECREF(tmp_args_name_17);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_68;
    }
    {
        nuitka_bool tmp_condition_result_53;
        PyObject *tmp_operand_name_9;
        PyObject *tmp_expression_name_69;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_name_69 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_69, mod_consts[19]);
        tmp_operand_name_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        tmp_condition_result_53 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_left_name_9 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[21];
        tmp_getattr_default_9 = mod_consts[22];
        tmp_tuple_element_27 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        tmp_right_name_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_70;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_right_name_9, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_name_70 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_name_70 == NULL));
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[21]);
            Py_DECREF(tmp_expression_name_70);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_right_name_9, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_right_name_9);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 154;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_69;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_70;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[220];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_27;
        }
        if (isFrameUnusable(cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10)) {
            Py_XDECREF(cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10 = MAKE_FUNCTION_FRAME(codeobj_b2ec4b532f158ecc85d13cc76b2cb826, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10->m_type_description == NULL);
        frame_b2ec4b532f158ecc85d13cc76b2cb826_10 = cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_b2ec4b532f158ecc85d13cc76b2cb826_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_b2ec4b532f158ecc85d13cc76b2cb826_10) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_106;
            tmp_called_name_106 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[11]);

            if (tmp_called_name_106 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_106 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_106 == NULL)) {
                        tmp_called_name_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_106 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_name_106);
                }
            }

            frame_b2ec4b532f158ecc85d13cc76b2cb826_10->m_frame.f_lineno = 155;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_106, mod_consts[221]);
            Py_DECREF(tmp_called_name_106);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[222], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_name_107;
            tmp_called_name_107 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[11]);

            if (tmp_called_name_107 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_107 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_107 == NULL)) {
                        tmp_called_name_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_107 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_name_107);
                }
            }

            frame_b2ec4b532f158ecc85d13cc76b2cb826_10->m_frame.f_lineno = 156;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_107, mod_consts[223]);
            Py_DECREF(tmp_called_name_107);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[224], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_called_name_108;
            tmp_called_name_108 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[11]);

            if (tmp_called_name_108 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_108 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_108 == NULL)) {
                        tmp_called_name_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_108 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_called_name_108);
                }
            }

            frame_b2ec4b532f158ecc85d13cc76b2cb826_10->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_108, mod_consts[225]);
            Py_DECREF(tmp_called_name_108);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b2ec4b532f158ecc85d13cc76b2cb826_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_b2ec4b532f158ecc85d13cc76b2cb826_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b2ec4b532f158ecc85d13cc76b2cb826_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b2ec4b532f158ecc85d13cc76b2cb826_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b2ec4b532f158ecc85d13cc76b2cb826_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b2ec4b532f158ecc85d13cc76b2cb826_10,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_b2ec4b532f158ecc85d13cc76b2cb826_10 == cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10);
            cache_frame_b2ec4b532f158ecc85d13cc76b2cb826_10 = NULL;
        }

        assertFrameObject(frame_b2ec4b532f158ecc85d13cc76b2cb826_10);

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
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_compexpr_left_9 = tmp_class_creation_9__bases;
            tmp_compexpr_right_9 = mod_consts[15];
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_9, tmp_compexpr_right_9);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
            assert(tmp_condition_result_54 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_36:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_27;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_called_name_109;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_kwargs_name_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_name_109 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_28 = mod_consts[220];
            tmp_args_name_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_18, 0, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_28 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_name_18, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154;
            PyTuple_SET_ITEM0(tmp_args_name_18, 2, tmp_tuple_element_28);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_name_18 = tmp_class_creation_9__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 154;
            tmp_assign_source_71 = CALL_FUNCTION(tmp_called_name_109, tmp_args_name_18, tmp_kwargs_name_18);
            Py_DECREF(tmp_args_name_18);
            if (tmp_assign_source_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_71;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_70 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_70);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154);
        locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154);
        locals_cryptography$x509$oid$$$class__9_CertificatePoliciesOID_154 = NULL;
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
        exception_lineno = 154;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_70);
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

    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_10;
        tmp_dircall_arg1_10 = mod_consts[15];
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_72 = impl___main__$$$function__9__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = PyDict_New();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_name_10;
        nuitka_bool tmp_condition_result_55;
        PyObject *tmp_key_name_28;
        PyObject *tmp_dict_arg_name_28;
        PyObject *tmp_dict_arg_name_29;
        PyObject *tmp_key_name_29;
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_bases_name_10;
        tmp_key_name_28 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_28, tmp_key_name_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_name_29 = mod_consts[16];
        tmp_metaclass_name_10 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_29, tmp_key_name_29);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        tmp_condition_result_56 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_name_71 = tmp_class_creation_10__bases;
        tmp_subscript_name_12 = mod_consts[8];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_71, tmp_subscript_name_12, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        tmp_metaclass_name_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_10);
        condexpr_end_20:;
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_name_10 = tmp_class_creation_10__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tmp_metaclass_name_10, tmp_bases_name_10);
        Py_DECREF(tmp_metaclass_name_10);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_74;
    }
    {
        nuitka_bool tmp_condition_result_57;
        PyObject *tmp_key_name_30;
        PyObject *tmp_dict_arg_name_30;
        tmp_key_name_30 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_30, tmp_key_name_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[16];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 160;

        goto try_except_handler_28;
    }
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_expression_name_72;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_72 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_72, mod_consts[17]);
        tmp_condition_result_58 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_name_110;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_args_name_19;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kwargs_name_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_73 = tmp_class_creation_10__metaclass;
        tmp_called_name_110 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[17]);
        if (tmp_called_name_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        tmp_tuple_element_29 = mod_consts[227];
        tmp_args_name_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_19, 0, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_29 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_name_19, 1, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_name_19 = tmp_class_creation_10__class_decl_dict;
        frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 160;
        tmp_assign_source_75 = CALL_FUNCTION(tmp_called_name_110, tmp_args_name_19, tmp_kwargs_name_19);
        Py_DECREF(tmp_called_name_110);
        Py_DECREF(tmp_args_name_19);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_75;
    }
    {
        nuitka_bool tmp_condition_result_59;
        PyObject *tmp_operand_name_10;
        PyObject *tmp_expression_name_74;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_name_74 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_74, mod_consts[19]);
        tmp_operand_name_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_left_name_10 = mod_consts[20];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[21];
        tmp_getattr_default_10 = mod_consts[22];
        tmp_tuple_element_30 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        tmp_right_name_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_75;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_right_name_10, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_name_75 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_name_75 == NULL));
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[21]);
            Py_DECREF(tmp_expression_name_75);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_right_name_10, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_right_name_10);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_28;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 160;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_28;
    }
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_76;
    }
    branch_end_38:;
    {
        PyObject *tmp_assign_source_77;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_cryptography$x509$oid$$$class__10_AttributeOID_160 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[23];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__10_AttributeOID_160, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_30;
        }
        tmp_dictset_value = mod_consts[227];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__10_AttributeOID_160, mod_consts[25], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_30;
        }
        if (isFrameUnusable(cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11)) {
            Py_XDECREF(cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11 = MAKE_FUNCTION_FRAME(codeobj_aed6b8133e0ef155e67c5baaaa3223ad, module_cryptography$x509$oid, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11->m_type_description == NULL);
        frame_aed6b8133e0ef155e67c5baaaa3223ad_11 = cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_aed6b8133e0ef155e67c5baaaa3223ad_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_aed6b8133e0ef155e67c5baaaa3223ad_11) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_111;
            tmp_called_name_111 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__10_AttributeOID_160, mod_consts[11]);

            if (tmp_called_name_111 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_111 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_111 == NULL)) {
                        tmp_called_name_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_111 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 161;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_name_111);
                }
            }

            frame_aed6b8133e0ef155e67c5baaaa3223ad_11->m_frame.f_lineno = 161;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_111, mod_consts[228]);
            Py_DECREF(tmp_called_name_111);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__10_AttributeOID_160, mod_consts[229], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_called_name_112;
            tmp_called_name_112 = PyObject_GetItem(locals_cryptography$x509$oid$$$class__10_AttributeOID_160, mod_consts[11]);

            if (tmp_called_name_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_name_112 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[11]);

                    if (unlikely(tmp_called_name_112 == NULL)) {
                        tmp_called_name_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
                    }

                    if (tmp_called_name_112 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_called_name_112);
                }
            }

            frame_aed6b8133e0ef155e67c5baaaa3223ad_11->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_112, mod_consts[142]);
            Py_DECREF(tmp_called_name_112);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__10_AttributeOID_160, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_aed6b8133e0ef155e67c5baaaa3223ad_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_aed6b8133e0ef155e67c5baaaa3223ad_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aed6b8133e0ef155e67c5baaaa3223ad_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aed6b8133e0ef155e67c5baaaa3223ad_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aed6b8133e0ef155e67c5baaaa3223ad_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aed6b8133e0ef155e67c5baaaa3223ad_11,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_aed6b8133e0ef155e67c5baaaa3223ad_11 == cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11);
            cache_frame_aed6b8133e0ef155e67c5baaaa3223ad_11 = NULL;
        }

        assertFrameObject(frame_aed6b8133e0ef155e67c5baaaa3223ad_11);

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
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_compexpr_left_10 = tmp_class_creation_10__bases;
            tmp_compexpr_right_10 = mod_consts[15];
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_10, tmp_compexpr_right_10);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto try_except_handler_30;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_40;
            } else {
                goto branch_no_40;
            }
            assert(tmp_condition_result_60 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_40:;
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyObject_SetItem(locals_cryptography$x509$oid$$$class__10_AttributeOID_160, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_30;
        }
        branch_no_40:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_name_113;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_name_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_name_113 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_31 = mod_consts[227];
            tmp_args_name_20 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_20, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_31 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_name_20, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_cryptography$x509$oid$$$class__10_AttributeOID_160;
            PyTuple_SET_ITEM0(tmp_args_name_20, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_name_20 = tmp_class_creation_10__class_decl_dict;
            frame_fefac9a68d257c9a1413d280774a4d30->m_frame.f_lineno = 160;
            tmp_assign_source_78 = CALL_FUNCTION(tmp_called_name_113, tmp_args_name_20, tmp_kwargs_name_20);
            Py_DECREF(tmp_args_name_20);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_77 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_77);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_cryptography$x509$oid$$$class__10_AttributeOID_160);
        locals_cryptography$x509$oid$$$class__10_AttributeOID_160 = NULL;
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

        Py_DECREF(locals_cryptography$x509$oid$$$class__10_AttributeOID_160);
        locals_cryptography$x509$oid$$$class__10_AttributeOID_160 = NULL;
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
        exception_lineno = 160;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_77);
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

    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
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
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_76;
        tmp_expression_name_76 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_name_76 == NULL)) {
            tmp_expression_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[89]);
        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = mod_consts[230];
        tmp_assign_source_79 = _PyDict_NewPresized( 89 );
        {
            PyObject *tmp_expression_name_77;
            PyObject *tmp_expression_name_78;
            PyObject *tmp_expression_name_79;
            PyObject *tmp_expression_name_80;
            PyObject *tmp_expression_name_81;
            PyObject *tmp_expression_name_82;
            PyObject *tmp_expression_name_83;
            PyObject *tmp_expression_name_84;
            PyObject *tmp_expression_name_85;
            PyObject *tmp_expression_name_86;
            PyObject *tmp_expression_name_87;
            PyObject *tmp_expression_name_88;
            PyObject *tmp_expression_name_89;
            PyObject *tmp_expression_name_90;
            PyObject *tmp_expression_name_91;
            PyObject *tmp_expression_name_92;
            PyObject *tmp_expression_name_93;
            PyObject *tmp_expression_name_94;
            PyObject *tmp_expression_name_95;
            PyObject *tmp_expression_name_96;
            PyObject *tmp_expression_name_97;
            PyObject *tmp_expression_name_98;
            PyObject *tmp_expression_name_99;
            PyObject *tmp_expression_name_100;
            PyObject *tmp_expression_name_101;
            PyObject *tmp_expression_name_102;
            PyObject *tmp_expression_name_103;
            PyObject *tmp_expression_name_104;
            PyObject *tmp_expression_name_105;
            PyObject *tmp_expression_name_106;
            PyObject *tmp_expression_name_107;
            PyObject *tmp_expression_name_108;
            PyObject *tmp_expression_name_109;
            PyObject *tmp_expression_name_110;
            PyObject *tmp_expression_name_111;
            PyObject *tmp_expression_name_112;
            PyObject *tmp_expression_name_113;
            PyObject *tmp_expression_name_114;
            PyObject *tmp_expression_name_115;
            PyObject *tmp_expression_name_116;
            PyObject *tmp_expression_name_117;
            PyObject *tmp_expression_name_118;
            PyObject *tmp_expression_name_119;
            PyObject *tmp_expression_name_120;
            PyObject *tmp_expression_name_121;
            PyObject *tmp_expression_name_122;
            PyObject *tmp_expression_name_123;
            PyObject *tmp_expression_name_124;
            PyObject *tmp_expression_name_125;
            PyObject *tmp_expression_name_126;
            PyObject *tmp_expression_name_127;
            PyObject *tmp_expression_name_128;
            PyObject *tmp_expression_name_129;
            PyObject *tmp_expression_name_130;
            PyObject *tmp_expression_name_131;
            PyObject *tmp_expression_name_132;
            PyObject *tmp_expression_name_133;
            PyObject *tmp_expression_name_134;
            PyObject *tmp_expression_name_135;
            PyObject *tmp_expression_name_136;
            PyObject *tmp_expression_name_137;
            PyObject *tmp_expression_name_138;
            PyObject *tmp_expression_name_139;
            PyObject *tmp_expression_name_140;
            PyObject *tmp_expression_name_141;
            PyObject *tmp_expression_name_142;
            PyObject *tmp_expression_name_143;
            PyObject *tmp_expression_name_144;
            PyObject *tmp_expression_name_145;
            PyObject *tmp_expression_name_146;
            PyObject *tmp_expression_name_147;
            PyObject *tmp_expression_name_148;
            PyObject *tmp_expression_name_149;
            PyObject *tmp_expression_name_150;
            PyObject *tmp_expression_name_151;
            PyObject *tmp_expression_name_152;
            PyObject *tmp_expression_name_153;
            PyObject *tmp_expression_name_154;
            PyObject *tmp_expression_name_155;
            PyObject *tmp_expression_name_156;
            PyObject *tmp_expression_name_157;
            PyObject *tmp_expression_name_158;
            PyObject *tmp_expression_name_159;
            PyObject *tmp_expression_name_160;
            PyObject *tmp_expression_name_161;
            PyObject *tmp_expression_name_162;
            PyObject *tmp_expression_name_163;
            PyObject *tmp_expression_name_164;
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_77 == NULL)) {
                tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[91]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[231];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_78 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_78 == NULL)) {
                tmp_expression_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[93]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[232];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_79 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_79 == NULL)) {
                tmp_expression_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[95]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[233];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_80 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_80 == NULL)) {
                tmp_expression_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[97]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[234];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_81 == NULL)) {
                tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[99]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[235];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_82 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_82 == NULL)) {
                tmp_expression_name_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[101]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[236];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_83 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_83 == NULL)) {
                tmp_expression_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_83, mod_consts[103]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[237];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_84 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_84 == NULL)) {
                tmp_expression_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_84, mod_consts[105]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[238];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_85 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_85 == NULL)) {
                tmp_expression_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_85, mod_consts[107]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[239];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_86 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_86 == NULL)) {
                tmp_expression_name_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_86, mod_consts[109]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[240];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_87 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_87 == NULL)) {
                tmp_expression_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_87, mod_consts[111]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[241];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_88 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_88 == NULL)) {
                tmp_expression_name_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_88, mod_consts[113]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[242];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_89 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_89 == NULL)) {
                tmp_expression_name_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_89, mod_consts[115]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[243];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_90 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_90 == NULL)) {
                tmp_expression_name_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_90, mod_consts[117]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[244];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_91 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_91 == NULL)) {
                tmp_expression_name_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_91, mod_consts[119]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[245];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_92 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_92 == NULL)) {
                tmp_expression_name_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_92, mod_consts[121]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[246];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_93 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_93 == NULL)) {
                tmp_expression_name_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_93, mod_consts[123]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[247];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_94 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_94 == NULL)) {
                tmp_expression_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_94, mod_consts[125]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[248];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_95 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_95 == NULL)) {
                tmp_expression_name_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_95, mod_consts[127]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[249];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_96 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_96 == NULL)) {
                tmp_expression_name_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_96, mod_consts[129]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[250];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_97 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_97 == NULL)) {
                tmp_expression_name_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_97, mod_consts[131]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[251];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_98 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_98 == NULL)) {
                tmp_expression_name_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_98, mod_consts[133]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[252];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_99 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_99 == NULL)) {
                tmp_expression_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_99, mod_consts[135]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[253];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_100 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_100 == NULL)) {
                tmp_expression_name_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_100, mod_consts[137]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[137];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_101 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_101 == NULL)) {
                tmp_expression_name_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_101, mod_consts[139]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[139];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_102 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_102 == NULL)) {
                tmp_expression_name_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_102, mod_consts[141]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[141];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_103 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_expression_name_103 == NULL)) {
                tmp_expression_name_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_expression_name_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_103, mod_consts[143]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[254];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_104 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_104 == NULL)) {
                tmp_expression_name_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_104, mod_consts[146]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[255];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_105 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_105 == NULL)) {
                tmp_expression_name_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_105, mod_consts[148]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[256];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_106 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_106 == NULL)) {
                tmp_expression_name_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_106, mod_consts[152]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[257];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_107 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_107 == NULL)) {
                tmp_expression_name_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_107, mod_consts[154]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[258];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_108 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_108 == NULL)) {
                tmp_expression_name_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_108, mod_consts[156]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[259];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_109 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_109 == NULL)) {
                tmp_expression_name_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_109, mod_consts[158]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[260];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_110 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_110 == NULL)) {
                tmp_expression_name_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_110, mod_consts[160]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[261];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_111 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_111 == NULL)) {
                tmp_expression_name_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_111, mod_consts[162]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[262];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_112 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_112 == NULL)) {
                tmp_expression_name_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_112, mod_consts[164]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[263];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_113 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_113 == NULL)) {
                tmp_expression_name_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_113, mod_consts[166]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[264];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_114 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_114 == NULL)) {
                tmp_expression_name_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_114, mod_consts[168]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[265];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_115 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_115 == NULL)) {
                tmp_expression_name_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_115 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_115, mod_consts[170]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[266];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_116 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_116 == NULL)) {
                tmp_expression_name_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_116, mod_consts[172]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[267];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_117 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_117 == NULL)) {
                tmp_expression_name_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_117 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_117, mod_consts[174]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[268];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_118 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_118 == NULL)) {
                tmp_expression_name_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_118 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_118, mod_consts[176]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[269];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_119 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_119 == NULL)) {
                tmp_expression_name_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_119 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_119, mod_consts[178]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[270];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_120 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_120 == NULL)) {
                tmp_expression_name_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_120, mod_consts[180]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[271];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_121 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_121 == NULL)) {
                tmp_expression_name_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_121, mod_consts[182]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[272];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_122 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_122 == NULL)) {
                tmp_expression_name_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_122 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_122, mod_consts[184]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[273];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_123 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_name_123 == NULL)) {
                tmp_expression_name_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_name_123 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_123, mod_consts[186]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[274];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_124 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_expression_name_124 == NULL)) {
                tmp_expression_name_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_expression_name_124 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_124, mod_consts[199]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[275];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_125 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_expression_name_125 == NULL)) {
                tmp_expression_name_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_expression_name_125 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_125, mod_consts[201]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[276];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_126 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_expression_name_126 == NULL)) {
                tmp_expression_name_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_expression_name_126 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_126, mod_consts[203]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[277];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_127 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_expression_name_127 == NULL)) {
                tmp_expression_name_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_expression_name_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_127, mod_consts[205]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[278];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_128 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_expression_name_128 == NULL)) {
                tmp_expression_name_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_expression_name_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_128, mod_consts[207]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[279];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_129 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_expression_name_129 == NULL)) {
                tmp_expression_name_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_expression_name_129 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_129, mod_consts[209]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[280];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_130 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_130 == NULL)) {
                tmp_expression_name_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_130, mod_consts[27]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[281];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_131 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_131 == NULL)) {
                tmp_expression_name_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_131 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_131, mod_consts[29]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[282];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_132 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_132 == NULL)) {
                tmp_expression_name_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_132, mod_consts[31]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[283];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_133 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_133 == NULL)) {
                tmp_expression_name_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_133, mod_consts[33]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[284];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_134 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_134 == NULL)) {
                tmp_expression_name_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_134 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_134, mod_consts[35]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[285];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_135 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_135 == NULL)) {
                tmp_expression_name_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_135, mod_consts[37]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[286];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_136 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_136 == NULL)) {
                tmp_expression_name_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_136, mod_consts[71]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[287];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_137 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_137 == NULL)) {
                tmp_expression_name_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_137 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_137, mod_consts[75]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[287];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_138 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_138 == NULL)) {
                tmp_expression_name_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_138, mod_consts[73]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[288];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_139 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_expression_name_139 == NULL)) {
                tmp_expression_name_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_expression_name_139 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_139, mod_consts[84]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[289];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_140 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_expression_name_140 == NULL)) {
                tmp_expression_name_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_expression_name_140 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_140, mod_consts[86]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[290];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_141 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_expression_name_141 == NULL)) {
                tmp_expression_name_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_expression_name_141 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_141, mod_consts[82]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[291];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_142 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_142 == NULL)) {
                tmp_expression_name_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_142, mod_consts[39]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[292];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_143 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_143 == NULL)) {
                tmp_expression_name_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_143 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_143, mod_consts[41]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[293];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_144 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_144 == NULL)) {
                tmp_expression_name_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_144, mod_consts[43]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[294];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_145 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_145 == NULL)) {
                tmp_expression_name_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_145 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_145, mod_consts[45]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[295];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_146 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_146 == NULL)) {
                tmp_expression_name_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_146 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_146, mod_consts[47]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[296];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_147 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_147 == NULL)) {
                tmp_expression_name_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_147 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_147, mod_consts[49]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[297];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_148 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_148 == NULL)) {
                tmp_expression_name_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_148 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_148, mod_consts[51]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[298];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_149 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_149 == NULL)) {
                tmp_expression_name_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_149 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_149, mod_consts[53]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[299];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_150 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_150 == NULL)) {
                tmp_expression_name_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_150 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_150, mod_consts[55]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[300];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_151 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_151 == NULL)) {
                tmp_expression_name_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_151 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_151, mod_consts[57]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[301];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_152 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_152 == NULL)) {
                tmp_expression_name_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_152 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_152, mod_consts[59]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[302];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_153 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_153 == NULL)) {
                tmp_expression_name_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_153 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_153, mod_consts[61]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[303];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_154 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_154 == NULL)) {
                tmp_expression_name_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_154 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_154, mod_consts[63]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[304];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_155 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_155 == NULL)) {
                tmp_expression_name_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_155 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_155, mod_consts[67]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[305];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_156 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_156 == NULL)) {
                tmp_expression_name_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_156 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_156, mod_consts[69]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[306];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_157 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_expression_name_157 == NULL)) {
                tmp_expression_name_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_expression_name_157 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_157, mod_consts[65]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[307];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_158 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[212]);

            if (unlikely(tmp_expression_name_158 == NULL)) {
                tmp_expression_name_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
            }

            if (tmp_expression_name_158 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_158, mod_consts[216]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[216];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_159 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[212]);

            if (unlikely(tmp_expression_name_159 == NULL)) {
                tmp_expression_name_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
            }

            if (tmp_expression_name_159 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_159, mod_consts[214]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[308];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_160 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[217]);

            if (unlikely(tmp_expression_name_160 == NULL)) {
                tmp_expression_name_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
            }

            if (tmp_expression_name_160 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_160, mod_consts[219]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[309];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_161 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_expression_name_161 == NULL)) {
                tmp_expression_name_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
            }

            if (tmp_expression_name_161 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_161, mod_consts[222]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[310];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_162 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_expression_name_162 == NULL)) {
                tmp_expression_name_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
            }

            if (tmp_expression_name_162 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_162, mod_consts[224]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[311];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_163 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_expression_name_163 == NULL)) {
                tmp_expression_name_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_expression_name_163 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_163, mod_consts[79]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[312];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
            tmp_expression_name_164 = GET_STRING_DICT_VALUE(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[227]);

            if (unlikely(tmp_expression_name_164 == NULL)) {
                tmp_expression_name_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[227]);
            }

            if (tmp_expression_name_164 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_164, mod_consts[229]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = mod_consts[313];
            tmp_res = PyDict_SetItem(tmp_assign_source_79, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_79);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_cryptography$x509$oid, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_79);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fefac9a68d257c9a1413d280774a4d30);
#endif
    popFrameStack();

    assertFrameObject(frame_fefac9a68d257c9a1413d280774a4d30);

    goto frame_no_exception_11;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_fefac9a68d257c9a1413d280774a4d30);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fefac9a68d257c9a1413d280774a4d30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fefac9a68d257c9a1413d280774a4d30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fefac9a68d257c9a1413d280774a4d30, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_11:;

    return module_cryptography$x509$oid;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

