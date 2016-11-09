#ifndef DEBUG_MEMORY
#define DEBUG_MEMORY

#include <stdlib.h>

#if _DEBUG
    #define debug_malloc(size) debug_malloc_imp(size, __FILE__, __LINE__)
    void *debug_malloc_imp(size_t size, char *FileName, int FileLine);

    #define debug_free(mem) debug_free_imp(mem)
    void debug_free_imp(void *Mem);

    #define debug_print() debug_print_imp()
    void debug_print_imp(void);
#else
    #define debug_malloc(size) malloc(size)

    #define debug_free(mem) free_(mem)

    #define debug_print()
#endif

#endif