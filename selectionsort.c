#include<stdio.h>
#include<conio.h>
void SS(int a[],int n)
{
	int i,j,k,min,temp;

	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=(i+1);j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		printf("\n After Ineration %d\n",i);
		for(k=0;k<n;k++)
		{
			printf("%d\t",a[k]);
		}
	}
	printf("\n\nThe sorted numbers are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void main()
{
	int a[20],i,n;
	clrscr();
	printf("Enter the range of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	SS(a,n);
	getch();
}
