#include "main.h"
/**
 * prnther_rev - print string in reverse
 * @valher: args
 * Return: str
 */
int prnther_rev(va_list valher)
{
	char *srt = va_arg(valher, char *);
	int x;
	int i = 0;

	if (srt == NULL)
		srt = "(null)";
	while (srt[i] != '\0')
		i++;
	for (x = i - 1; x >= 0; x--)
		_putchar(srt[x]);
	return (i);
}
