//Simulation of a simple calculator.

#include<stdio.h>
void main()
{
int a,b,res;
char op;
printf("Enter a valid arithmetic expression\n");
scanf("%d%c%d",&a,&op,&b);
switch(op)
{
case '+':printf("Sum=%d\n",a+b);
         break;
case '-':printf("Difference=%d\n",a-b);
         break;
case '*':printf("Product=%d\n",a*b);
         break;
case '/':if(b==0)
         {
         printf("Divide by zero error!\n");
         }
     else
         {
         printf("Quotient=%d\n",a/b);
         }
         break;
case '%':if(b==0)
         {
        printf("Divide by zero error!\n");
         }
     else
        {
        printf("Remainder=%d\n",a%b);
        }
        break;
         default:printf("Invalid arithmetic expression!");
          
}
}
