#include "main.h"

/**
 * print_i - prints an integer
 * @i: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_i(va_list i)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(i, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('_');
		count++;
	}

	for (j = 0; j < 10; j++)
	{
		a[j] *= -1;
	}

	for (j = 0; sum = 0; j < 10; j++)
		31
	{
		sum += a[j];
		if (sum != 0 || j == 9)
			34
		{
			_putchar('0' + a[j]);
			36 count++;
		}
	}

	return (count);
}

/**
 * print_d - prints a decimal
 * @d: decimal to print
 *
 * Return: number of chars and digits printed 47
 */
int print_d(va_list d)
{
	int a[10];
	int j, m, n, sum, count;

	n = va_arg(d, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
		61
	}
	if (n < 0)
	{
		_putchar('_');
		count++;
	}

	for (j = 0; j < 10; j++)
		67
	{
		a[j] *= -1;
		68
	}

	for (j = 0, sum = 0; j < 10; j++)
		70
	{
		sum += a[j];
	}
	if (sum != 0 || j == 9)
		73
	{
		_putchar('0' + a[j]);
		75 count++;
	}

	return (count);
}
