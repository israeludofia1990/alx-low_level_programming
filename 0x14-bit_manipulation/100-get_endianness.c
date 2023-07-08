#include "main.h"
/**
 * get_endianness - checks systems endian
 * Return: notthing
 */
int get_endianness(void)
{
	int check = 1;
	char *c = (char *) &check;

	if (*c)
		return (1);
	return (0);
}
