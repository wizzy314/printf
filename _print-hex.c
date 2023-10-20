#include "main.h"

/**
	*print_hex - print hexadecimal digits
	*@val: argument
	*Return: number of characters printed
	*/

int print_hex(va_list val)
{
	int i;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array;
	unsigned int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		array[i] = tmp % 16;
		tmp = tem / 16;
	}
	for (i = 0; count - 1 >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);

	return (count);
}

