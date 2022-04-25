#include <stdio.h>

void main()
{
	int i, j, n, temp, x[50];
	printf("Enter range of array:\t");
	scanf("%d", &n);
	printf("Elements of array are:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	for (i = 0; i < n; i++)
	{
		temp = x[i];
		j = i - 1;
		while ((temp < x[j]) && (j >= 0))
		{
			x[j + 1] = x[j];
			j = j - 1;
		}
		x[j + 1] = temp;
	}
	printf("The sorted array:");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", x[i]);
	}
}
