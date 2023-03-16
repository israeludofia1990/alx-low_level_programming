#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - fuction that concats two strings but with s2 by n amount.
 * @s1: base sting to concat to. `Null` will return as empty.
 * @s2: string to copy from. 'NULL' will return as empty string.
 * @n: amount of s2 to copy.
 * Return: pointer to allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, L1, L2, i;
	char *s3;
	char *empty = "";

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;

	L1 = 0;
	while (s1[L1])
		L1++;
	L2 = 0;
	while (s2[L2])
		L2++;
	if (n < L2)
		L2 = n;
	size = L1 + L2 + 1;

	s3 = malloc(sizeof(char) * size);
	if (s3 == NULL)
		return (0);

	for (i = 0; i < L1; i++)
		s3[i] = s1[i];

	for (i = 0; i < L2; i++)
		s3[L1 + i] = s2[i];

	s3[size - 1] = '\0';

	return (s3);
}
