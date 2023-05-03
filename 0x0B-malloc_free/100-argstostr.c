#include "main.h"

/**
 * argstostr - This function that concatenates all the arguments
 * of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, len = 0, c = 0, j;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		len++;
	}
		i++;
	}
	ptr = malloc(sizeof(char) * (len + ac + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < ac; i++)
		{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			ptr[c] = av[i][j];
		}
			ptr[c] = '\n';
			c++;
		}
			ptr[c] = '\0';
			return (ptr);
}
