#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - produces output according to a format
 * @format:  character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ls_arg;
	unsigned int i = 0, j = 0, con_c = 0, flag;
	specifier specifiers[] = {{'c', print_char}, {'s', print_string},
		{'d', print_integer}, {'i', print_integer},
		{'%', print_percent}, {'r', print_reverse}, {'R', print_rot13},
		{'\0', NULL}};

	if (!format)
		return (-1);
	va_start(ls_arg, format);
	while (format[i])
	{
		flag = 0;
		if (format[i] == '%')
		{
			j = 0;
			while (specifiers[j].find && flag == 0)
				if (format[i + 1] == specifiers[j].find)
					flag = 1, con_c += specifiers[j].func(ls_arg);
				else
					j++;
			if (!specifiers[j].find)
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				con_c += 2;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			con_c++, i++;
		}
	}
	va_end(ls_arg);
	return (con_c);
}
