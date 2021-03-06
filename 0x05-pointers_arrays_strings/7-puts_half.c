#include "main.h"
/**
* puts_half - writes second half of a string to stdout followed by a new line
* @str: string passed to the function to be printed
* Return: nothing
*/
void puts_half(char *str)
{
	int i, j, len, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	if ((len % 2) != 0)
		n = ((len - 1) / 2);
	else
		n = len / 2;
	for (j = n + 1; j <= len; j++)
		_putchar(str[j]);
	_putchar('\n');
}
