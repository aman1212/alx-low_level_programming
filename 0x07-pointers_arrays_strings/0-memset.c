#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s : pointer value that going to be updated
 * @b : characters to be filled
 * @n : how manytimes
 * Return:0 or 1
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