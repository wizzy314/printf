#include "main.h"

/**
		*print_rot13 - print characters of string replaced by the 13th one
	*@val: argument
	*Return: number of characters --> count
	*/

int print_rot13(va_list val)
{
	int i;
	int j;
	int k = 0;
	int count = 0;
	char *str = va_arg(val, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTIVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[i]);
				count++;
				k = i;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}

	return (count);

}

