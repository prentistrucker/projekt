#include<stdio.h>

void nqueen(int r) {
	int i,p,arr[10][10]={0};
	if(r%2==0)
		p=1;
	else
		p=0;

	for(i=0;i<r;i++) {
		arr[i][p]=1;
		if(r%2==1)
			p=(p+2)%r;
		else {
			if(p==r-1)
				p=0;
			else
				p=p+2;
		}
	}
	for(i=0;i<r;i++) {
		for(p=0;p<r;p++) {
			printf("%d\t",arr[i][p]);
		}
		printf("\n");
	}
}

void main() {
	int r;
	printf("\n enter the value of r:-");
	scanf("%d",&r);
	nqueen(r);
}
