#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],n,i,key,low,high,mid;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements.\n",n);
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
     mid=(low+high)/2;
     if(key==a[mid])
     {
        printf("Search successful.\nElement found in location %d\n",mid+1);
        exit(0);
     }
    if(key>a[mid])
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;

    } 
    }
    printf("Search unsuccessful!");
    
    return 0;
}