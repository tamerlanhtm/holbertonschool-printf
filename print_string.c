#include <stdio.h>

int print_string(char *ptr)
{
	int len;

	if (ptr == 0)
		print_string(0);

	while (*ptr)
	{
		putchar(ptr);
		len++;
	}

	return len;
}
