#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 * Description: The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: 0
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= 9; c++)
	{
		for (i = '0'; i <= 9; c++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
