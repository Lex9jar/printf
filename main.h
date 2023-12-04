#ifndef _MAIN_H_
#define _MAIN_H_

/* = = = = = HEADERS = = = = = */
#include <unistd.h>
#include <stdarg.h>

/* = = = = = MACROS = = = = = */
#define BUFFER_SIZE 1024
#define UNUSED(arg) ((void)(arg))

/* = = = = = STRUCT = = = = = */
typedef struct node
{
	char c;
	int (*func)(va_list arg_ptr);
} store;

/* = = = = = FUNCTIONS = = = = = */
int _printf(const char *format, ...);
int _putchar(char c);
void empty_buffer(char buffer[], int *size);
int fmt_n_print(const char *format, int spc_idx, va_list arg_ptr);

int print_char(va_list arg_ptr);
int print_string(va_list arg_ptr);
int print_percent(va_list arg_ptr);

int _strlen(char c);

#endif /* _MAIN_H_ */
