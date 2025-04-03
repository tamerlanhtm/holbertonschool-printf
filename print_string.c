#include "main.h"

int print_string(char *ptr)
{
	int len;

	if (ptr == 0)
		return;

	while (ptr[len])
	{
		_putchar(*ptr);
		ptr++;
	}

	return len;
}

