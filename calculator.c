//Simulation of a simple calculator.

#include<stdio.h>
void main()
{
int a,b,res;
char op;
printf("Enter a valid arithmetic expression");
scanf("%d%c%d",&a,&op,&b);
switch(op)
{
case '+':printf("\nSum=%d",a+b);
         break;
case '-':printf("\nDifference=%d",a-b);
         break;
case '*':printf("\nProduct=%d",a*b);
         break;
case '/':if(b==0)
         {
         printf("\nDivide by zero erroe!");
         }
     else
         {
         printf("\nQuotient=%d",a/b);
         }
         break;
case '%':if(b==0)
         {
        printf("\nDivide by zero error");
         }
     else
        {
        printf("\nRemainder=%d",a%b);
        }
        break;
          
}
}