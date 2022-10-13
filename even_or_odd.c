#include<stdio.h>
void main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
if(num%2==0)
{
printf("\n%d is an even number\n",num);
}
else
{
printf("%d is an odd number.",num);
}
}