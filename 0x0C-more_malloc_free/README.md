#0x0C More Malloc Free

Malloc and Free are functions in the C programming language that are used for dynamic memory management.

malloc stands for "memory allocation." It is used to dynamically allocate memory during program execution. When you use malloc, you specify the amount of memory you want to allocate in bytes, and it returns a pointer to the beginning of the allocated block of memory. 

Free is used to deallocate the memory that was previously allocated with malloc.

It's crucial to note that free should only be called with a pointer that was returned by malloc, calloc, or realloc. Calling free on a pointer that was not dynamically allocated or has already been freed can result in undefined behavior.

Remember to always balance malloc calls with corresponding free calls to avoid memory leaks, where allocated memory is not properly released.
