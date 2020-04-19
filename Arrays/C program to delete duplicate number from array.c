/* Remove duplicate number from array */

#include<stdio.h>
#define MAX 100
void main()
{
    int arr[MAX],n,i,j,k,temp,size=0;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0; i<n-1-size; i++) //-size is used because the size of array
        {
            //is reducing after removing duplicate element
            for(j=i+1; j<n-size; j++)
                {
                    if(arr[i]==arr[j])
                        {
                            for(k=j; k<n-1-size; k++)
                                {
                                    arr[k]=arr[k+1];
                                }
                            size++;
                        }
                }
        }
    printf("Total repeated Elements were : %d\n",size);
    printf("Array after removing duplicate element\n");
    n=n-size;//reducing size of array by removing duplicate elements
    for(i=0; i<n; i++)
        {
            printf("%d\n",arr[i]);
        }
}