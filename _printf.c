#include "main.h"

/**
 * _printf - format and print string
 * @format: string to foromat and print
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list arg_ptr;
	char buffer[BUFFER_SIZE];
	int i = 0, char_counter = 0, printed = 0, buf_idx = 0;

	if (format == NULL)
		return (-1);
	va_start(arg_ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer[buf_idx++] = format[i];
			if (buf_idx == BUFFER_SIZE)
				empty_buffer(buffer, &buf_idx);
			char_counter++;
		}
		else
		{
			empty_buffer(buffer, &buf_idx);
			i++;
			printed = fmt_n_print(format, &i, arg_ptr, buffer);
			if (printed == -1)
				return (-1);
			char_counter += printed;
		}
		i++;
	}

	empty_buffer(buffer, &buf_idx);
	va_end(arg_ptr);

	return (char_counter);
}
