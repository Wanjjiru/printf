#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct format - converts to printf
 * @srt: character pointer
 * @fxn: function specifier
 */
typedef struct format
{
	char *srt;
	int (*fxn)();
} assign;

int _printf(const char *format, ...);
int herprnt_percent(void);
int herprnt_unsignedint(va_list agr);
int prnt_str(va_list shval);
int prnther_rot13(va_list valher);
int herconst_strlen(const char *strpntr);
int _strlen(char *strpntr);
int herprnt_decimal(va_list agr);
int herprnt_integer(va_list agr);
int prnther_hex(unsigned long int n);
int prnther_ptr(va_list valher);
int prnther_rev(va_list valher);
int herprnt_exc_str(va_list valher);
int prnther_HEX(unsigned int n);
int herprnt_oct(va_list valher);
int herprnt_hex(va_list valher);
int herprnt_HEX(va_list valher);
int _putchar(char a);
int herprnt_binary(va_list herval);
int prnt_char(va_list sharg);
#endif
