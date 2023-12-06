#include "main.h"
/**
 * prnther_rot13 - outputs rot13
 * @valher: parameter
 * Return: tally
 */
int prnther_rot13(va_list valher)
{
	int a, b, tally = 0;
	int j = 0;
	char *srt = va_arg(valher, char*);
	char x[] = {"abcdefghijklmnopqrstuvwxyz"};
	char z[] = {"zyxwvutsrqponmlkjihgfedcba"};

	if (srt == NULL)
	srt = "(null)";
	for (a = 0; srt[a]; a++)
	{
		j = 0;
		for (j = 0; x[b] && !j; b++)
		{
			if (srt[a] == x[b])
			{
				_putchar(z[b]);
				tally++;
				j = 1;
			}
		}
		if (!j)
		{
			_putchar(srt[a]);
			tally++;
		}
	}
	return (tally);
}
