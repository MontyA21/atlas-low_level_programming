#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: byte size of each element
 * Return: Void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *array;
    unsigned int x;

    if (nmemb == 0 || size == 0)
        return (NULL);
    
    array = malloc(nmemb * size);
    if (array == NULL)
        return (NULL);
    
    for (x = 0; x < (nmemb * size); x++)
        array[x] = 0;
    return (array);
}
