#include "main.h"
/**
 * _putchar - Prints char
 * @a: Character to be printed
 * Return: (1) if successful, (-1) for error
 */
int _putchar(char a)
{
	return(write(1, &a, 1));
	}
