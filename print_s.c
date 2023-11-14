#include "main.h"
/**
 * print_string - prints a string
 * @args: arguments
 * Return: the length of the string.
 */
int print_string(va_list args)
{
	char *str;
	int i;
	int length;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
