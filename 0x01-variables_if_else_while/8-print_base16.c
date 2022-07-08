#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;
	char car;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (car = 'a'; car <= 'f'; car++)
		putchar(car);
	putchar('\n');

return (0);
}
