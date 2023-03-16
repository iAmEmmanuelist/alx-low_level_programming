#include <stdlib.h>
#include <stdio.h>

/**
  * main - program that multiplies two numbers
  *
  * @argc: holds the number of arguments passed
  * @argv: array pointer that holds the arguments passed
  *
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
