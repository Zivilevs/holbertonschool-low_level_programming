/**
 * _islower - a function that checks for lowercase character.
 * Return: 1 if true and 0 if false *
 * You can only use _putchar twice in your code.
 * @c: is integer
 */

#include "holberton.h"

int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
