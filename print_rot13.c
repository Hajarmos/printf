#include "main.h"

/**
 * print_rot13 - function that encodes a string using rot13
 * @list: va_list list
 * Return: counter
 **/
int print_rot13(va_list list)
{
	char *msg = va_arg(list, char *);
	int i, j, counter = 0;
	char forward[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotate[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (!msg)
		msg = "(AHYY)";
	for (i = 0; msg[i]; i++)
	{
		for (j = 0; forward[j]; j++)
		{
			if (forward[j] == msg[i])
			{
				_putchar(rotate[j]);
				counter++;
				break;
			}
		}
		if (!forward[j])
		{
			_putchar(msg[i]);
			counter++;
		}
	}
	return (counter);
}
