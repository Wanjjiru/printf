#include "main.h"
/**
 * prnt_char - Prints character
 * @sharg: args
 * Return: (1) on success
 */
int prnt_char(va_list sharg)
{
	char sc;

	sc = va_arg(sharg, int);
	_putchar(sc);
	return (1);
}
