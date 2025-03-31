#include "main.h"
#include <limits.h>

int print_number(int num)
{
    int len = 1;
    int ulen = 1;
    int numcpy;
    int i = 0;
    int divisor = 0;

    if (num == INT_MIN)
    {
        num = 147483648;
        _putchar('-');
        _putchar('2');
        len += 2;
    }

    if (num < 0)
    {
        _putchar('-');
        num =+ 1;
        len++;
    }

    numcpy = num;

    while (numcpy > 10)
    {
        numcpy /= 10;
        len++;
        ulen++;
        divisor *= 10;
    }

    while (i <= ulen)
    {
        _putchar('0' + num / divisor);
        num %= divisor;
        divisor /= 10;
        i++;
    }

    return (len);
}

