#include "main.h"

/**
 * empty_buffer - Prints a buffer to the stdout and set size to 0
 * @buffer: Buffer to print.
 * @size: Buffer's size.
 *
 * Return: void.
 */
void empty_buffer(char buffer[], int *size)
{
	write(1, &buffer[0], *size);

	*size = 0;
}

/**
 * _strlen - Calculates the length of a string
 * @str: String to compute
 *
 * Return: Length of str.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
