#include "main.h"
/**
 * print_persent - prints % if found twice consecutively
 * @list: variable that takes in any argument
 * Return: counter
 */
int print_percent(va_list list)
{
	va_arg(list, int);

	_putchar('%');
	return (1);
}
