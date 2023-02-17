#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= '2')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
