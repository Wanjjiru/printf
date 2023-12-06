#include "main.h"

/**
 * _strlen - Function calculates the string len
 * @strpntr: pointer to a string
 * Return: Number of character in string
 */
int _strlen(char *strpntr)
{
	int e;

	for (e = 0; strpntr[e] != 0; e++)
	{
		/*loop body*/
	}
	return e;
}
/**
 * const_strlen - This fxn is used when string is constant
 * @strpntr: pointer to a string
 * Return: (e) on success
 */
int const_strlen(const char *strpntr)
{
	int e;

	for (e = 0; strpntr[e] != 0; e++)
	{
		/*loop body*/
	}
	return e;
}
