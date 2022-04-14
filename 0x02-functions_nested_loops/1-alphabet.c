#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char fx;
	int i;

	for (i = 0; i < 10; i++)
	{
		for(fx = 'a'; fx <= 'z'; fx++)					          _putchar (fx);
	_putchar ('\n');					
	}
}

