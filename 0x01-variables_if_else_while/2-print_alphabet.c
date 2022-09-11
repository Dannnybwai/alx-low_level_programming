#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Description: using the main function
 * this program prints "Programming is positive,zero, or negative
 * return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
