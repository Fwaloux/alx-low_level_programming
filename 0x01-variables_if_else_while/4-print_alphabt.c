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

char car;
char e;
char q;

for (car = 'a'; car <= 'z'; car++)
{
	while (car != q && car != e)
	{
		putchar(car);
	}
	putchar('\n');
}
return (0);
}
