#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 * Return: Nothing!
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	print("%ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	print("\n");
	return (0);
}
