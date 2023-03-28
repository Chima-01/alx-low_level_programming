#include "main.h"
#include <string.h>

/**
 * rev_string - This function displays a string in reversal
 * @s: parameter to display
 */

void rev_string(char *s)
{
	int i = strlen(s);
	int rev;
	int str;

	for (rev = 0; rev < i / 2; rev++)
	{
		str = s[rev];
		s[rev] = s[i - rev - 1];
		s[i - rev - 1] = str;
	}
}
