#include "main.h"
/**
 * herprnt_unsignedint - Prints an interger
 * @agr: Arguments to be printed
 * Return: Total No. of chars printed
 */
int herprnt_unsignedint(va_list agr)
{
	unsigned int e = va_arg(agr, unsigned int);
	int n, l = e % 10, d, i = 1;
	int m = 1;

	e = e / 10;
	n = e;

	if (l < 0)
	{
		_putchar('-');
		n = -n;
		e = -e;
		l = -l;
		m++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			i = i * 10;
			n = n / 10;
		}
		n = e;
		while (i > 0)
		{
			d = n / i;
			_putchar(d + '0');
			n = n - (d * i);
			i = i / 10;
			m++;
		}
	}
	_putchar(l + '0');

	return (m);
}
