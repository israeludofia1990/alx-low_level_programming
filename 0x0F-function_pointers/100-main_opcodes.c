#include <stdio.h>
#include <stdlib.h>

void printopcod(int numBytes);
/**
 * main - prints opcode
 * @argc: count
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int numBytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);
	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	printopcod(numBytes);

	return (0);
}
/**
 * printopcod - prints opcode
 * @numBytes: bytes
 * Return: void
 */
void printopcod(int numBytes)
{
	int i;
	unsigned char *mainptr;

	mainptr = (unsigned char *)main;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x ", mainptr[i]);
	}

	printf("\n");
}
