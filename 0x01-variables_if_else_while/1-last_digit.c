#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry code
 * Description: prints "last digits"
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else if (last < 6)
		printf("last digit of %d is %d and is less than 6and not 0\n", last);
	return (0);
}
