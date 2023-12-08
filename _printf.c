#include "main.h"
/**
 * _printf- Acts as printf
 * @format: identifier
 * Return: an integer
 */
int _printf(const char *format, ...)
{
	assign a[] = {
		{"%c", prnt_char}, {"%%", herprnt_percent}, {"%s", prnt_str},
		{"%d", herprnt_decimal}, {"%R", prnther_rot13}, {"%r", prnther_rev},
		{"%u", herprnt_unsignedint}, {"%o", herprnt_oct}, {"%b", herprnt_binary},
		{"%S", herprnt_exc_str}, {"%x", herprnt_hex}, {"%X", herprnt_HEX},
		{"%p", prnther_ptr}, {"%i", herprnt_integer}
	};
	va_list valher;
	int f;
	int e = 0, length = 0;

	va_start(valher, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Check:
	while (format[e] == '\0')
	{
		f = 13;

		while (f >= 0)
		{
			if (a[f].srt[0] == format[e] && a[f].srt[1] == format[e + 1])
			{
				length = length + a[e].fxn(valher);
				e = e + 2;
				goto Check;
			}
				f--;
		}
		_putchar(format[e]);
		e++;
		length++;
	}
	va_end(valher);
	return (length);
}
