#include<stdio.h>

void qsort(int x[10], int first, int last) {
	int pivot,j,temp,i;
	if(first<last) {
		pivot=i=first;
		j=last;
		while(i<j) {
			while(x[i]<=x[pivot] && i<last) {
				i++;
			}
			while(x[j] > x[pivot]) {
				j--;
			}
			if (i<j) {
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
		temp = x[pivot];
		x[pivot] = x[j];
		x[j] = temp;
		qsort(x,first,j-1);
		qsort(x,j+1,last);
	}
}

void main() {
	int x[20],size,i;
	printf("\t\t***Quick sort***\n");
	printf("Enter size of the array: ");
	scanf("%d", &size);
	printf("Enter %d elements: ",size);
	for (i=0;i<size;i++) {
		scanf("%d", &x[i]);
	}
	printf("Entered Array is: ");
	printf("[ ");
	for (i = 0;i < size; i++) {
		printf("%d", x[i]);
		printf(" ");
	}
	printf("]");
	qsort(x,0,size-1);
	printf("\nSorted elements: ");
	printf("[ ");
	for (i = 0;i < size; i++) {
		printf("%d", x[i]);
		printf(" ");
	}
	printf("]");
}
