//Program to print average of n numbers.

#include<stdio.h>
int main() 
{
int sum=0, a[50], i, n;
 printf("Enter the value of n\n");   
 scanf("%d",&n);
 printf("Enter n numbers\n");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
{
   sum+=a[i];
}
printf("Average : %d", sum/n);
return 0;
}