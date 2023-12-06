#include "main.h"
/**
 * herprnt_exc_str - prints string exclusive
 * @valher: variable
 * Return: Total chars printed
 */
int herprnt_exc_str(va_list valher)
{
	int e, length = 0;
	char *prt;
	int d;


	prt = va_arg(valher, char *);
	if (prt == NULL)
		prt = "(NULL)";
	for (e = 0; prt[e] != '\0'; e++)
	{
		if (prt[e] < 32 || prt[e] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			d = prt[e];
			if (d < 16)
			{
			_putchar('0');
			length++;
			}
			length = length + prnther_HEX(d);
		}
		else
		{
			_putchar(prt[e]);
			length++;
		}
	}
	return(length);
}
