#include "main.h"

/**
 * fmt_n_print - Sought for a function for a particular specifier.
 * @format: Format string to get specifier.
 * @spc_idx: Index number of specifier in format.
 * @arg_ptr: Argument pointer
 * @buffer: Buffer for formatting and printing
 *
 * Return: printed number of characters from a function.
 */
int fmt_n_print(const char *format, int *spc_idx, va_list arg_ptr,
		char buffer[])
{
	store fetch[] = {
		{'c', print_char}, {'s', print_string},
		{'%', print_percent}, {'d', print_int},
		{'i', print_int}, {'b', print_binary},
		{'\0', NULL}
	};
	int i = 0;

	while (fetch[i].c)
	{
		if (fetch[i].c == format[*spc_idx])
			return (fetch[i].func(arg_ptr, buffer));
		i++;
	}

	va_end(arg_ptr);
	return (-1);
}
