#include "main.h"
/**
 *malloc_checked - allocate memory
 *
 *@b:input
 *
 *Description:allocate size
 *
 *Return: address
 *
 */

void *malloc_checked(unsigned int b)
{
    char *x;
    
    x = malloc(b);
    if (x == NULL)
    {
    exit(98);
    }
    return (x);
     
}