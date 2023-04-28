#include "main.h"
/**
 * length_number - return the length of number
 * @x: the number
 * Return: int
 */
int length_number(int x)
{
	int len = 0;

	while (x / 10)
	{
		len++;
		x /= 10;
	}
	return (len);
}

/**
 * divisible_number - Divisible number to restore the number on the far left
 * @x: The number of times 10 is multiplied by itself
 * Return: int
 */
int divisible_number(int x)
{
	if (x > 1)
		return (10 * divisible_number(--x));
	if (x == 0)
		return (1);
	return (10);
}
/**
 * print_string - prints a string
 * @ls: list of variable
 * Return: counter
 */
int print_string(va_list ls)
{
	int i = 0;
	char *str = va_arg(ls, char *);

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_char - prints a character
 * @ls: variable that takes in any argument
 * Return: counter
 */
int print_char(va_list ls)
{
	char c = (char)va_arg(ls, int);

	_putchar(c);
	return (1);
}
/**
 * print_integer - prints a number
 * @ls: variable that takes in any argument
 * Return: counter
 */
int print_integer(va_list ls)
{
	int len, d, x, counter = 0;
	int n = va_arg(ls, int);

	if (n < 0)
	{
		_putchar('-');
		counter++;
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	do {
		len = length_number(n);
		d = divisible_number(len);
		x = n / d;
		_putchar(x + '0');
		counter++;
		n %= d;
	} while (n && d != 1);
	return (counter);
}
