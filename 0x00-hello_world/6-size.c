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

	printf("Size of a char is: %zu byte(s)\n", sizeof(i));
	printf("Size of an int is: %zu byte(s)\n", sizeof(n));
	printf("Size of a long int is: %zu byte(s)\n", sizeof(ln));
	printf("Size of a long long int is: %zu byte(s)\n", sizeof(lln));
	printf("Size of a float is: %zu byte(s)\n", sizeof(f));

	return (0);
}
