#include "stdio.h"

/**
 * main - entry point
 * 
 * Return:1- success
 * do fizz buzz
 */

int main(void)
{
 int i;

 for (i = 1; i <= 100; i++)
 {
		if (i % 15 == 0)
		{
			printf("%s", "FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz ");
		}
		else
		{
			printf("%d"
										"%s",
										i, " ");
		}
 }
 printf("\n");
 return (0);
}