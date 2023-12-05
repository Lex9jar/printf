#include "main.h"

/**
 * print_unsigned_int - Formats and prints and unsigned integer
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of bytes printed.
 */
int print_unsigned_int(va_list arg_ptr, char buffer[])
{
	unsigned int num;
	int i, j, count = 0;

	num = va_arg(arg_ptr, unsigned int);
	buffer[BUFFER_SIZE - 1] = '\0';
	i = BUFFER_SIZE - 2;

	if (num == 0)
		buffer[i--] = '0';
	while (num > 0)
	{
		buffer[i--] = '0' + (num % 10);
		num /= 10;
	}
	i++;

	for (j = i; buffer[j]; j++)
		count += _putchar(buffer[j]);

	return (count);
}

/**
 * print_octal - Prints an unsigned int in octal
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of characters printed.
 */
int print_octal(va_list arg_ptr, char buffer[])
{
	unsigned int octal;
	int i, j, count = 0;

	octal = va_arg(arg_ptr, unsigned int);
	buffer[BUFFER_SIZE - 1] = '\0';
	i = BUFFER_SIZE - 2;

	if (octal == 0)
		buffer[i--] = '0';
	while (octal > 0)
	{
		buffer[i--] = '0' + (octal % 8);
		octal /= 8;
	}
	i++;

	for (j = i; buffer[j]; j++)
		count += _putchar(buffer[j]);

	return (count);
}

/**
 * print_lowHex - Prints an unsigned int in lowercase Hexa
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of Characters printed.
 */
int print_lowerHex(va_list arg_ptr, char buffer[])
{
	unsigned int lowHex;
	char hex_arr[] = "0123456789abcdef";
	int i, j, count = 0;

	lowHex = va_arg(arg_ptr, unsigned int);
	buffer[BUFFER_SIZE - 1] = '\0';
	i = BUFFER_SIZE - 2;


	if (lowHex == 0)
		buffer[i--] = '0';
	while (lowHex > 0)
	{
		buffer[i--] = hex_arr[lowHex % 16];
		lowHex /= 16;
	}
	i++;

	for (j = i; buffer[j]; j++)
		count += _putchar(buffer[j]);

	return (count);
}

/**
 * print_upperHex - Prints an unsigned int in uppercase Hexa
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of characters printed.
 */
int print_upperHex(va_list arg_ptr, char buffer[])
{
	unsigned int upperHex;
	char hex_arr[] = "0123456789ABCDEF";
	int i, j, count = 0;

	upperHex = va_arg(arg_ptr, unsigned int);
	buffer[BUFFER_SIZE - 1] = '\0';
	i = BUFFER_SIZE - 2;

	if (upperHex == 0)
		buffer[i--] = '0';
	while (upperHex > 0)
	{
		buffer[i--] = hex_arr[upperHex % 16];
		upperHex /= 16;
	}
	i++;

	for (j = i; buffer[j]; j++)
		count += _putchar(buffer[j]);

	return (count);
}
