#include "main.h"
/**
 * main- Entry
 *
 * Return: 0
 */
int main(void)
{
	char volume[9] = "_putchar";

	int i = 0;


	while (i < 8)
	{
		_putchar(volume[i]);						 
		i++;							  
	}
	_putchar('\n');
        return (0);
}
