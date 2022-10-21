#include "main.h"

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);

	for (i = 2; i <= 100; n++)
	{
		if ((i % 15) == 0)
			printf(" FizzBuzz");
		else if ((i % 3) == 0)
			printf(" Fizz");
		else if ((i % 5) == 0)
			printf(" Buzz");
		else
			print("%d", i);
	}
	printf("\n");
	return (0);
}
