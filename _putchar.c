#include "main.h"

/**
 *_putchar - writes a character to stdout
* @ch: The character to print
 *
 *Return: On success 1. On error, -1
 */

int _putchar(char ch)
{
			return (write(1, &ch, 1));
}

