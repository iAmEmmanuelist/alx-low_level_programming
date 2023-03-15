#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that prints its name
  *
  * @argc: holds the number of arguments passed
  * @argv: array pointer that holds the arugments passed
  *
  * Return: 0 on success
  */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
