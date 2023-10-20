#include "main.h"

/**
	*print_HEX_extra - print hexadecimal digit
	*@num: unsigned integer
	*Return: number of characters printed
	*/

int print_HEX_extra(unsigned int num)
{
	int i;
	int count = 0;
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
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);

	return (count);
}

