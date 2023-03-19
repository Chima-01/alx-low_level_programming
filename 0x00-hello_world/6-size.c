#include <stdio.h>

/**
 * Description: main -  Outputing size of data types
 * Return: 0 if success
 */

int main(void)
{
	char i;
	int n;
	long int ln;
	long long int lln;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(i));
	printf("Size of an int: %zu byte(s)\n", sizeof(n));
	printf("Size of a long int: %zu byte(s)\n", sizeof(ln));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lln));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}
