#include "main.h"

int print_string(char ptr)
{
	int len = 0;

	if (ptr == NULL)
	{
		print_string("(null)");
		return 6;
	}

	while (ptr[len] != '\0')
	{
		_putchar(ptr);
		len++;
	}

	return len;
}
