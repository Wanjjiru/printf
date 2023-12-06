#include "main.h"
/**
 * herprnt_binary - converts unsigned unsigned int to binary
 * @herval: arguments passed
 * Return: an int on success
 */
int herprnt_binary(va_list herval)
{
	int mark = 0;
	int tally = 0;
	int e, r = 1, d;
	unsigned int n = va_arg(herval, unsigned int);
	unsigned int x;

	for (e = 0; e < 32; e++)
	{
		x = ((r << (32 - e)) & n);
		if (x >> (32 - e))
			mark = 1;
		if (mark)
		{
			d = x >> (31 - e);
		       _putchar(d + 48);
	       tally++;
		}
	}
	if (tally == 0)
	{
		tally++;
		_putchar('0');
	}
	return (tally);
}
