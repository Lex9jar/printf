#ifndef _MAIN_H_
#define _MAIN_H_

/* = = = = = HEADERS = = = = = */
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* = = = = = MACROS = = = = = */
#define BUFFER_SIZE 1024
#define UNUSED(arg) ((void)(arg))

/* = = = = = STRUCT = = = = = */
typedef struct node
{
	char c;
	int (*func)(va_list arg_ptr, char buffer[]);
} store;

/* = = = = = FUNCTIONS = = = = = */
int _printf(const char *format, ...);
int _putchar(char c);
void empty_buffer(char buffer[], int *size);
int fmt_n_print(const char *format, int *spc_idx, va_list arg_ptr, char buffer[]);

/* PRINT FUNCTIONS */
int print_char(va_list arg_ptr, char buffer[]);
int print_string(va_list arg_ptr, char buffer[]);
int print_percent(va_list arg_ptr, char buffer[]);
int print_int(va_list arg_ptr, char buffer[]);
int print_binary(va_list arg_ptr, char buffer[]);
int print_unsigned_int(va_list arg_ptr, char buffer[]);
int print_octal(va_list arg_ptr, char buffer[]);
int print_lowerHex(va_list arg_ptr, char buffer[]);
int print_upperHex(va_list arg_ptr, char buffer[]);
int print_String(va_list arg_ptr, char buffer[]);

/* HANDY TOOLS */
int _strlen(char *str);

#endif /* _MAIN_H_ */
