#include "main.h"

/**
	*print_oct - print octer digits
	*@val: argument
	*Return: number of characters printed
	*/

int print_oct(va_list val)
{
	int i;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array;
	unsigned int tmp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 8;
		tmp = tem / 8;
	}
	for (i = 0; count - 1 >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);

	return (count);
}

