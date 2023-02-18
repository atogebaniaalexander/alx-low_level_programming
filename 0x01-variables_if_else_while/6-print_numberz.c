#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 from 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
