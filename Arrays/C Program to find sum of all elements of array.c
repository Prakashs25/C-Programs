/*Sum of all elements of array*/


#include<stdio.h>
#define MAX 100
void main()
{
	int arr[MAX],n,i,sum=0;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
	for(i=0; i<n; i++)
		{
			sum= sum+arr[i];
		}
	printf("Sum of array : %d ",sum);
}