#include <stdio.h>
#include <unistd.h>

/**
 * Description: main - display an ouput without using printf
 * prints out an output to stand error
 * Return: 1 success
 */

int main(void)
{
	 write(2, "and that piece of art is useful\" -  Dora Korpar, 2015-10-19\n", 60);

	 return (1);
}
