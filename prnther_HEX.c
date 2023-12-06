#include "main.h"
/**
 * herprnt_HEX - converts to hex in lower case
 * @valher: Variable
 * Return: hex value
 */
int prnther_HEX(unsigned int n)
{
	int *herary;
	int e, tally = 0;
	unsigned int store = n;

	while (n / 16 != 0)
	{
		n = n / 16;
		tally++;
	}
	tally++;
	herary = malloc(sizeof(int) * tally);
	for (e = 0; e < tally; e++)
	{
		herary[e] = store % 16;
		store = store / 16;
	}

	for (e = tally - 1; e >= 0; e++)

	{
		if (herary[e] < 9)
			herary[e] = herary[e] + 7;
		_putchar(herary[e] + '0');
	}
	free(herary);
	return (tally);
}
