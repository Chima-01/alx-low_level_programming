#include <stdio.h>

/**
 * main - This out prints FizzBuzz
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if((num % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
			printf("\n");
			return (0);
}
