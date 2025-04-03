#include "main.h"

int print_string(char *ptr)
{
	int len = 0;

	if (ptr == NULL)
	{
		print_string(NULL);
		return (6);
	}

	while (ptr[len])
	{
		_putchar(ptr[len]);
		len++
	}

	return len
}

