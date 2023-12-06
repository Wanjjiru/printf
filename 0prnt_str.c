#include "main.h"
/**
 * prnt_str - Prints a string
 * @shval: Arguments given
 * Return: Strlen
 */
int prnt_str(va_list shval)
{
	int e;
	char *sc;
	int len;

	sc = va_arg(shval, char *);
	if (sc == NULL)
	{
		sc = "(NULL)";
	len = _strlen(sc);
	for (e = 0; e < len; e++)
		_putchar(sc[e]);
	return (len);
	}
	else
	{
		len = _strlen(sc);
		for (e = 0; e < len; e++)
			_putchar(sc[e]);
		return (len);
	}
}
