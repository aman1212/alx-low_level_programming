#include "main.h"

/**
 * swap_int - function that concatenates two strings
 * @dest: pointer
 * @src: pointer
 * Return:0 or 1
 */

char *_strcat(char *dest, char *src)
{
while (*dest)  
{
dest++;   
}
while (*src)   
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return dest;
}
