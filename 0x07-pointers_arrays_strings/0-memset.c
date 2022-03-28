#include "main.h"

/**
* _memset -memset
*
*@s: pointer
*@b: value to be saved
*@n: number of characters
*Return: dest
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned char *p = s;
while (n--)
{
*p++ = (unsigned char)b;
}
return s;
}