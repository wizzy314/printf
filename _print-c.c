#include "main.h"

/**
	*print_char - prints a char
	*@val: arguments
	*Return: always 1 at success
	*/

int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
va_end(val);

	return (1);
}

