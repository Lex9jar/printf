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
	UNUSED(buffer);
	char c = va_arg(arg_ptr, int);

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
	UNUSED(buffer);
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
	if (num == 0)
		buffer[i--] = '0';
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

/**
 * print_binary - formats and print a binary value
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of characters printed.
 */
int print_binary(va_list arg_ptr, char buffer[])
{
	UNUSED(buffer);
	unsigned int  n;
	unsigned int arr[32];
	int input = 0, output, count = 0;
	char byte;

	n = va_arg(arg_ptr, unsigned int);
	if (n == 0)
		arr[input++] = 0;
	while (n > 0)
	{
		arr[input++] = n % 2;
		n /= 2;
	}

	for (output = input - 1; output >= 0; output--)
	{
		byte = arr[output] + '0';
		count += _putchar(byte);
	}

	return (count);
}
