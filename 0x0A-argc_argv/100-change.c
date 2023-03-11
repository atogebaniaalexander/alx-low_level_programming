#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int value, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	value = atoi(argv[1]);
	while (value != 0)
	{
		if (value >= 25)
		{
			count += value / 25;
			value = value % 25;
		}
		else if (value >= 10)
		{
			count += value / 10;
			value = value % 10;
		}
		else if (value >= 5)
		{
			count += value / 5;
			value = value % 5;
		}
		else if (value >= 2)
		{
			count += value / 5;
			value = value % 5;
		}
		else
		{
			count += value / 1;
			value = value % 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
