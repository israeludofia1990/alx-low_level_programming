/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 * Return: int
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	if (n > 1)
		print_binary(n >> 1);
	num = (n & 1) + '0';
	_putchar(num);
}
