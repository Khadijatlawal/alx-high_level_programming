nclude <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (; i < max; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
				sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
