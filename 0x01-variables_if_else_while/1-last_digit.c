#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description: main - Returning the last number of a random
 * number
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;

	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	}
	else if (lastNum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	}
	else if (lastNum < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	}

	return (0);
}