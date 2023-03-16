#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  * @argc: The number of command-line arguments
  * @argv: An array oof pointers to the arguments
  *
  * Return: 0 if the program ran successful, 1 otherwise
  */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/**
	  * Check the number of arguments
	  */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/**
	  * Parse the argument
	  */
	cents = atoi(argv[1]);

	/**
	  * Check if the ammount is negative
	  */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/**
	  * Calcluate the number of coins
	  */
	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}

	/**
	  * Print the result
	  */
	printf("%d\n", coins);

	return (0);

}
