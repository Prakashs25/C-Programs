/*Program to show sum of 10 elements of array & show the average.*/

#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	float av;
	printf("enter elements of an aaray: ");
	for(i=0; i<10; i++)
		scanf("%d",&a[i]);
	for(i=0; i<10; i++)
		sum=sum+a[i];
	printf("sum=%d",sum);
	av=sum/10;
	printf("average=%.2f",av);
	return 0;
}

/*
OUTPUT:

enter elements of an array: 4
4
4
4
4
4
4
4
4
4
sum=40
average=4.00

*/