#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9,
  * followed by a new line.
  * Return: 0 on success
  */

void print_numbers(void)
{
	int a =  0;

	while (a < 10)
	{
		_putchar(a++ + '0');
	}
	_putchar('\n');
}
