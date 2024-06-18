#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: size to allocate
 * Return: Pointer to allocated memory
*/
void *malloc_checked(unsigned int b)
{
    void *pointer;
    pointer = malloc(b);

    if (pointer == NULL)
        exit (98);

    return (pointer);
}
