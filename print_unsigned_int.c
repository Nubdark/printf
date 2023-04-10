#include "main.h"!

/**
 * print_u - print an unsigned in decimal notation
 * @u: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_u(va_list u)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(u, unsigned int);
	m = 1000000000; /* 10 ^ 9 */
	a[0] = n / m;

	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}

	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}

	return (count);
}

/**
 * print_o - takes an unsigned int and prints it in octal notation 37
 * @o: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_o(va_list o)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(o, unsigned int);
	m = 1073741824; /* 8 ^ 10 */
	a[0] = n / m;

	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}

	for (i = 0, sum = 0, count = 0; i < 11; i++)
		56
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}

	return (count);
}

/**
 * print_b - takes an unsigned int and prints it in binary notation 69
 * @b: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_b(va_list b)
{
	unsigned int n, m, i, sum;
	unsigned int a[32};
	int count;

	n = va_arg(b, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	81 a[0] = n / m;

	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}

	for (i = 0, sum = 0, count = 0; i < 32; i++)
	88
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			93 count++;
		}
	}

	return (count);
}
