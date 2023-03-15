#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length;
	int s2_length;
	int size;
	int i;
	char *s3;
	char *empty = "";

/** if the content of s1 and s2 is NULL treat as empty string */
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;

/** get the length of s1 and s2 */
	s1_length = 1;
	while (s1[s1_length])
		s1_length++;
	s2_length = 1;
	while (s2[s2_length])
		s2_length++;
	size = s1_length + s2_length + 1;

/** newly alocated space in memory*/
	s3 = (char *)malloc(sizeof(char) * size);

/** copy content of s1 into s3 */
	for (i = 0; i < s1_length; i++)
		s3[i] = s1[i];

/** copy content of s2 into s3 */
	for (i = 0; i < s2_length; i++)
		s3[s1_length + i] = s2[i];
	s3[size - 1] = '\0';
	return (s3);
}
