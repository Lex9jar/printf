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

	if (c == '')
		return (-1);
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
	char *s = va_arg(arg_ptr, char *);

	if (s == NULL)
		s = "(null)";

	return (write(1, &s[0], _strlen(s)));
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

	return(write(1, "%%",1));
}
