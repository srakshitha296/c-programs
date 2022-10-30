//Sorting numbers using bubbble sort
#include<stdio.h>
int main()
{
    int a[50], n, i, j, temp;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
        }
    }
    printf("The sorted elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
    }