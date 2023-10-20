#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * @...: Variable number of arguments for format.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
             write(1, format, 1);
            printed_chars++;
        }
        else
        {
            format++;
												if (*format == 'c')
            {
                char c = va_arg(args, int);
                write(1, &c, 1);
                printed_chars++;
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                if (s)
                {
                    write(1, s, strlen(s));
                    printed_chars += strlen(s);
                }
                else
                {
                    write(1, "(null)", 6);
                    printed_chars += 6;
                }
            }
            else if (*format == '%')
            {
                write(1, "%", 1);
                printed_chars++;
            }
	       }
        format++;

					}

    va_end(args);

    return printed_chars;
}

