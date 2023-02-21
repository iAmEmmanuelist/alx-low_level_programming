#include <stdio.h>

/**
  * main - print the alphabet in lowercase,
  * followed by a new line, expect q and e
  *
  * Return: always 0 (Sucess)
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
