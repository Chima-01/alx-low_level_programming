#include "main.h"

/**
 * _strstr - function finds the first occurrence of the
 * substring needle in the string haystack
 * The terminating null bytes (\0) are not compared
 * @haystack: parameter super-string
 * @needle: parameter sub-string
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hay = haystack;
		char *need = needle;

	while (*hay == *need && *need != '\0')
	{
		hay++;
		need++;
	}
	if (*need == '\0')
	{
		return (haystack);
	}
		haystack++;
	}
		return ('\0');
}
