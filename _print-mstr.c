#include "main.h"

/**
	*print_mstr - print a modified string
	*@val: argument
	*Return: number of characters printed
	*/

int print_mstr(va_list val)
{
	char *s;
	int i;
	int count = 0;
	int value;

	s = va_arg(val. char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; i s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			value = s[i];

			if (value < 16)
			{
				_putchar('0');
				count++;
			}
			count +=  print_HEX_extra(value);
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}

	return (count);
}

