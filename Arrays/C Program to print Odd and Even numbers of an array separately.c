/* Print odd and even numbers of  an array separately */

#include<stdio.h>
#define MAX 100
void main()
{
	int arr[MAX],n,i;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d positive elements\n",n);
	for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
	printf("Even numbers: ");
	for(i=0; i<n; i++)
		{
			if(arr[i]%2==0)
				{
					printf("%d  ",arr[i]);
				}
		}
	printf("\nOdd numbers: ");
	for(i=0; i<n; i++)
		{
			if(arr[i]%2!=0)
				{
					printf("%d  ",arr[i]);
				}
		}
}