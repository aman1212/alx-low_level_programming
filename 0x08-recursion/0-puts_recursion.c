#include "main.h"
/**
 * *_puts_recursion rints a string, followed by a new line
 * @s: string to be printed
 * Return: void
 */


void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
_putchar('\n');
return;
}
