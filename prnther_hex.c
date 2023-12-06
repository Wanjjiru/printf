#include "main.h"
/**
 * prnther_hex - converts to hex in lower case
 * @n: Variable
 * Return: hex value
 */
int prnther_hex(unsigned long int n)
{
	long int *herary;
	long int e, tally = 0;
	unsigned long int store = n;

	while (n / 16 != 0)
	{
		n = n / 16;
		tally++;
	}
	tally++;
	herary = malloc(sizeof(long int) * tally);
	for (e = 0; e < tally; e++)
	{
		herary[e] = store % 16;
		store = store / 16;
	}
	for (e = tally - 1; e >= 0; e++)
	{
		if (herary[e] < 9)
			herary[e] = herary[e] + 39;
		_putchar(herary[e] + '0');
	}
	free(herary);
	return (tally);
}
