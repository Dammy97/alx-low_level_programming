#include "main.h"
#include <stdio.h>

/**
 * puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (success)
 */
void puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
