#0x0D C. Preprocessor

General Learning Objectives:
 - What are macros and how to use them
 - What are the most common predefined macros
 - How to include guard your header files

The C Preprocessor is a component of the C programming language that performs textual transformations on the source code before compilation. It is a separate phase in the compilation process and is responsible for handling preprocessor directives in the source code.

Key points about the C Preprocessor include:

1. Preprocessor Directives: The preprocessor recognizes and processes preprocessor directives, which are special statements beginning with a '#' symbol. Common directives include #include, #define, #ifdef, #ifndef, #if, #elif, #else, and #endif. These directives control conditional compilation, macro definitions, and file inclusion.

2. Macro Expansion: Macros are defined using the #define directive. They allow developers to create reusable code snippets or constants. The preprocessor performs macro expansion, replacing macro invocations with their corresponding definitions throughout the code.

3. Conditional Compilation: The preprocessor enables conditional compilation using directives such as #ifdef, #ifndef, #if, #elif, #else, and #endif. These directives allow code blocks to be included or excluded based on defined conditions, such as the presence or absence of certain macros.

4. File Inclusion: The #include directive is used to include contents from external files into the source code. The preprocessor replaces the #include directive with the contents of the specified file, effectively "pasting" the contents at the inclusion point.

5. Preprocessor Macros: Macros are defined using the #define directive and can have parameters. They can be used to create function-like macros, allowing code snippets to be parameterized and reused throughout the program.

6. Preprocessor Directives vs. Compiler Directives: It's important to note that preprocessor directives are handled by the preprocessor, which operates before the actual compilation by the compiler. Compiler directives, such as command-line options or pragmas, are specific to the compiler itself and come into play during the compilation phase.

The C Preprocessor plays a significant role in source code manipulation, allowing for code reuse, conditional compilation, and the inclusion of external files. It helps in creating more maintainable and flexible code structures. Understanding how to use and leverage preprocessor directives and macros can be beneficial for writing efficient and modular C programs.
