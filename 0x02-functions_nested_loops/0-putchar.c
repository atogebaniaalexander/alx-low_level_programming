
/**
 * main - Entry point
 *
 * Description: a c function to print _putchar using putchar prototype
 *
 * Return: Always 0 (success)
 *
*/

int main(void)
{
	char outPutString[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
		_putchar(outPutString[i]);
	_putchar('\n');

	return (0);
}
