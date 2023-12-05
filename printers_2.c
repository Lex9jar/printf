#include "main.h"

/**
 * print_String - Prints both printable and non-printable characters
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: Number of arguments printed.
 */
int print_String(va_list arg_ptr, char buffer[])
{
	char *str;
	char hex_arr[] = "0123456789ABCDEF";
	int i = 0, j = 0, count = 0;
	char non_printable;

	str = va_arg(arg_ptr, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		if (str[i] >= 32 && str[i] < 127)
			buffer[j++] = str[i];
		else
		{
			non_printable = str[i];
			if (non_printable < 0)
				non_printable *= -1;
			buffer[j++] = '\\';
			buffer[j++] = 'x';
			buffer[j++] = hex_arr[non_printable / 16];
			buffer[j++] = hex_arr[non_printable % 16];
		}
		i++;
	}
	buffer[j] = '\0';

	for (i = 0; buffer[i]; i++)
		count += _putchar(buffer[i]);
	return (count);
}
