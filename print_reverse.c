#include "main.h"

/**
 * print_reverse - function that prints string in reverse
 * @list: va_list list
 * Return: none
 **/
int print_reverse(va_list list)
{
	char *str = va_arg(list, char *);
	int i, counter = 0;

	if (str == NULL)
		str = ")llun(";
	while (str[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		counter++;
	}
	return (counter);
}
