#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
        char *ptr;
        if (b==0)
        return(NULL);
        ptr = (void *)malloc(b);
        if (ptr == NULL)
                exit(98);
        return (ptr);
}
