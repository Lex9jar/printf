#include "main.h"

/**
 * print_char - Writes a character to the stdout
 * @arg_ptr: Argument pointer
 *
 * Return: On success 1,
 * On error -1, and errno is set appropriately.
 */
int print_char(va_list arg_ptr)
{
	char c = va_arg(arg_ptr, int);

	return (_putchar(c));
}

/**
 * print_string - Prints a null terminated string
 * @arg_ptr: Argument pointer
 *
 * Return: Number of characters printed.
 */
int print_string(va_list arg_ptr)
{
	int i = 0, len = 0;
	char *s = va_arg(arg_ptr, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		len += _putchar(s[i]);

	return (len);
}

/**
 * print_percent - Prints a percent '%' sign
 * @arg_ptr: Argument pointer
 *
 * Return: On success 1,
 * On error -1, and errno is set appropriately.
 */
int print_percent(va_list arg_ptr)
{
	UNUSED(arg_ptr);

	return (_putchar('%'));
}
