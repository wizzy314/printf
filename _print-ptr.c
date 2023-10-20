#include "main.h"

/**
	*print_ptr - prints address pointed to in hexadecimal
	*@val: argument
	*Return: return number of characters
	*/

int print_ptr(va_list val)
{
	void *p;
	char *s = "(nil)";
	int i;
	long int a;
	int b;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
	return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_extra(a);
	return (b + 2);
}

