/*Find maximum and second maximum in an array*/

#include<stdio.h>
#define MAX 100
void main()
{
	int arr[MAX],n,i,max,smax;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
	max=arr[0];
	for(i=1; i<n; i++)
		{
			if(arr[i]>max)
				{
					smax=max;
					max=arr[i];
				}
		}
	printf("Maximum : %d  Second Maximum:%d ",max,smax);
}