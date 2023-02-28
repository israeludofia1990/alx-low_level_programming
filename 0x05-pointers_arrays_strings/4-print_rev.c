#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: size of elements in the array
 */
void print_rev(char *s)
{
	int left = 0;
	int len = strlen(s);
	int i;
	char tmp;
	int right = len - 1;

	for (i = left; i < right; i++)
	{
		tmp = s[i];
		s[i] = s[right];
		s[right] = tmp;
		right--;
	}
}
