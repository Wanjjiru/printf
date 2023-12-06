#include "main.h"
/**
 * prnther_ptr - outputs a pointer
 * @valher: parameter
 * Return: interger
 */
int prnther_ptr(va_list valher)
{
	void *prt;
	char *srt = "(nil)";
	long int e;
	int x;
	int c = 0;

	prt = va_arg(valher, void *);
	if (prt == NULL)
	{
		for (x = 0; srt[x] != '\0'; x++)
			_putchar(srt[x]);
		return (x);
	}
	e = (unsigned long int)prt;
	_putchar('0');
	_putchar('e');
	c += 2;
	prnther_hex(e);
	return (c);
}
