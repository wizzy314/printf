#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
	*struct format - provide data tyoe for _printf
	*@id: first member
	*@f: second member
	*/

struct format
{
	char *id;
	int (*f)();
};

/**
	*match - typedef for the struct format
	*/
	typedef struct format match;

int _putchar(char ch);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_str(va_list val);
int _strlen(const char *str);
int _strlen(char *str);
int print_pcent(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unint(va_list args);
int print_oct(va_list args);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_mstr(va_list val);
int print_hex_extra(unsigned long int num);
int print_ptr(va_list val);
int print_rstr(va_list val);
int print_rot13(va_list val);

#endif /* _MAIN_H_ */

