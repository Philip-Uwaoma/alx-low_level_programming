#include "main.h"

/**
 * File: _purchar.c
 * main: Print the word _putchar.
 *
 * Desc: A function that prints characters.
 * Return: Always 0 (Success)
 */

int main(void)
/**
 * main - Prints putchar.
 *
 * Return: Always 0.
 */
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
