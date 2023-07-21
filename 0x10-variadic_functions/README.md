#0x10. C - Variadic functions

###Learning Objectives:
 - What are variadic functions
 - How to use va_start, va_arg and va_end macros
 - Why and how to use the const type qualifier

# Variadic Functions

## What are Variadic Functions?

Variadic functions are functions in programming languages that can accept a variable number of arguments. Unlike regular functions that have a fixed number of parameters, variadic functions allow developers to pass different numbers of arguments based on the specific use case.

## How to Use va_start, va_arg, and va_end Macros?

In C programming, variadic functions are commonly used in combination with three macros: `va_start`, `va_arg`, and `va_end`, which are defined in the `stdarg.h` header.

1. `va_start`: This macro initializes the argument list processing for a variadic function. It takes two arguments: the `va_list` variable (usually named `ap`) and the last named parameter before the ellipsis (`...`).

2. `va_arg`: This macro retrieves the next argument from the argument list. It takes two arguments: the `va_list` variable and the type of the next argument.

3. `va_end`: This macro cleans up the `va_list` variable after all the arguments have been processed.

## Why and How to Use the `const` Type Qualifier?

The `const` type qualifier in C is used to specify that a variable's value cannot be modified after its initialization. When working with variadic functions, using `const` can offer several advantages:

1. **Safety and Reliability**: By marking certain arguments as `const`, you can prevent accidental modifications to critical data within the variadic function, ensuring safer and more reliable code.

2. **Code Maintainability**: The `const` qualifier serves as a documentation tool, indicating that certain parameters are intended for read-only purposes. This makes the code more maintainable and understandable for other developers.

3. **Compiler Optimizations**: When the compiler knows that certain values won't change, it may apply optimizations that can improve the overall performance of the program.

Using `const` with variadic functions can be achieved by declaring the appropriate parameters with the `const` qualifier in the function prototype and then using `va_arg` to access those arguments accordingly.

Keep in mind that variadic functions should be used judiciously, as they can be error-prone if not handled carefully.

Remember to include the `stdarg.h` header to use variadic functions and the related macros in your C programs.

