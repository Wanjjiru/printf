#include "main.h"
/**
 * herprnt_oct - prints octal rep of a number
 * @valher: Variable
 * Return: octal value
 */
int herprnt_oct(va_list valher)
{
	int *herary;
	int e, tally = 0;
	unsigned int n = va_arg(valher, unsigned int);
	unsigned int store = n;

	while (n / 8 != 0)
	{
		n = n / 8;
		tally++;
	}
	tally++;
	herary = malloc(sizeof(int) * tally);

	for (e = 0; e < tally; e++)
	{
		herary[e] = store % 8;
		store = store / 8;
	}
	for (e = tally - 1; e >= 0; e--)
		_putchar(herary[e] + '0');
	free(herary);
	return (tally);
}
