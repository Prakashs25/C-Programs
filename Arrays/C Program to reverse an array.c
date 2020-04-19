/* Reverse an array*/


#include<stdio.h>
#define MAX 100
void main()
{
	int arr[MAX],n,i,temp;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
	for(i=0; i<n/2; i++)
		{
			temp=arr[i];
			arr[i]=arr[n-i-1];
			arr[n-i-1]=temp;
		}
	printf("Array after reversing : ");
	for(i=0; i<n; i++)
		{
			printf("%d\t\n",arr[i]);;
		}
}