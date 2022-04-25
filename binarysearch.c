#include <stdio.h>
int binary(int x[], int n, int key)
{
	int mid, low = 0, high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == x[mid])
		{
			return mid + 1;
		}
		else if (key > x[mid])
		{
		}
		else
		{
		}
	}
	low = mid + 1;
	high = mid - 1;
	return -1;
}
void sort(int n, int a[20]) {
	int i, j, t;
	for (i = 1; i < n; i++)
	{
		t = a[i];
		j = i - 1;
		while (t < a[j] && j >= 0)
		{
			a[j +1] = a[j];
			j --;
		}
		a[j + 1] = t;
	}
}
void main()
{
	int p, r, a[20], i, key;
	printf("Enter the range of the array\t");
	scanf("%d", &r);
	printf("Enter the elements of array\n");
	for (i = 0; i < r; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(r, a);
	printf("\nThe sorted array is as follows\n");
	for (i = 0; i < r; i++)
	{
		printf(" %d\n", a[i]);
	}
	printf("Enter the element to be searched\t");
	scanf("%d", &key);
	p = binary(a, r, key);
	if (p == -1)
	{
		printf("Element %d was not found", key);
	}
	else
	{
		printf("Element %d was found at position %d",key,p);
	}
}
