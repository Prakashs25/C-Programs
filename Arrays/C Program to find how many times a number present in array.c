/* Find how many times a number present in array */

#include<stdio.h>
#define MAX 100
void main()
{
    int arr[MAX],n,i,item,count=0,a[MAX];
    printf("Enter size of Array: ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter element you want to search: ");
    scanf("%d",&item);
    for(i=0; i<n; i++)
        {
            if(arr[i]==item)
                {
                    a[count]=i+1;
                    count++;
                }
        }
    if(count!=0)
        {
            printf("Item found at  ");
            for(i=0; i<count; i++)
                {
                    printf("%d ",a[i]);
                }
        }
    else
        {
            printf("Item not found");
        }
}