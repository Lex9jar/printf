#include "main.h"

/**
 * print_char - Writes a character to the stdout
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: On success 1,
 * On error -1, and errno is set appropriately.
 */
int print_char(va_list arg_ptr, char buffer[])
{
	char c = va_arg(arg_ptr, int);

	UNUSED(buffer);

	return (_putchar(c));
}

/**
 * print_string - Prints a null terminated string
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of characters printed.
 */
int print_string(va_list arg_ptr, char buffer[])
{
	int i = 0, len = 0;
	char *s = va_arg(arg_ptr, char *);

	UNUSED(buffer);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
		len += _putchar(s[i]);

	return (len);
}

/**
 * print_percent - Prints a percent '%' sign
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: On success 1,
 * On error -1, and errno is set appropriately.
 */
int print_percent(va_list arg_ptr, char buffer[])
{
	UNUSED(arg_ptr);
	UNUSED(buffer);

	return (_putchar('%'));
}

/**
 * print_int - format and prints an int value
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of characters printed.
 */
int print_int(va_list arg_ptr, char buffer[])
{
	int i, len, neg_flg = 0;
	int num = va_arg(arg_ptr, int);

	buffer[BUFFER_SIZE - 1] = '\0';
	if (num < 0)
	{
		neg_flg = 1;
		num *= -1;
	}

	i = BUFFER_SIZE - 2;
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	if (neg_flg)
		buffer[i--] = '-';
	len = BUFFER_SIZE - i - 1;
	i++;
	len--;
	return (write(1, &buffer[i], len));
}
