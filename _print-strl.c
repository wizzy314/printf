#include "main.h"

/**
	*_strlen - print's string length
	*@str: string pointer
	*Return: returns 1 at success
	*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (1);
}

/**
 *_strlen - print's string length
	*@str: string pointer
 *Return: returns 1 at success
	*/

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (1);
}

