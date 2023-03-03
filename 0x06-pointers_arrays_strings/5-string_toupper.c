#include "main.h"

/**
 * string_toupper - function
 * @ch: pointer chae
 * Return: char
 */

char *string_toupper(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	{
		if (*(ch = i) >= 97)
			if (*(ch + i) <= 122)
		{
			*(ch + i) = *(ch + i) - ' ';
		}
		i++;
	}
	return (ch);
}
