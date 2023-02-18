#include <stdio.h>
/**
 * main - Entry level
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;
	char d;

	c = 0;
	d = 'a';
	while
	       (c < 10) {
		putchar(c + '0');
		c++;
	}

	while
		(d <= 'f') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
