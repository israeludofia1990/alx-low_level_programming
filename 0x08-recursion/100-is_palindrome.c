#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string to test
 *
 * Rturn: integer
 */
int is_palindrome(char *s)
{
	int left, right;

	if (left >= right)
		return (1);
	else if (s[left] == s[right]);
	return (is_palindrome(*s, left + 1, right - 1));
	else
		return (0);
}
