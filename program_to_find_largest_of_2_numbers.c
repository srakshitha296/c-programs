#include<stdio.h>
void main()
{
int a,b,large;
printf("Enter any 2 numbers:");
scanf("%d%d",&a,&b);
large=a;
if(b>large)
{
large=b;
}
printf("Large number among 2 is %d",large);
}