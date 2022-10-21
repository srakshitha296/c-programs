#include<stdio.h>
#include<stdlib.h>
void main()
{
    int amount;
    printf("Enter tne amount:");
    scanf("%d",&amount);
    while(amount>0)
    {
    if(amount>=2000)
    {
        printf("2000 rs notes: %d\n",amount/2000);
        amount%=2000;
    }
    else if(amount>=1000)
    {
         printf("1000 rs notes: %d\n",amount/1000);
        amount%=1000;
    }
    else if(amount>=500)
    {
         printf("500 rs notes: %d\n",amount/500);
        amount%=500;
    }
    else if(amount>=100)
    {
         printf("100 rs notes: %d\n",amount/100);
        amount%=100;
    }
    else if(amount>=50)
    {
         printf("50 rs notes: %d\n",amount/50);
        amount%=50;
    }
    else if(amount>=20)
    {
         printf("20 rs notes: %d\n",amount/20);
        amount%=20;
    }
    else if(amount>=10)
    {
         printf("10 rs notes: %d\n",amount/10);
        amount%=10;
    }
    else if(amount>=5)
    {
         printf("5 rs notes: %d\n",amount/5);
        amount%=5;
    }
    else if(amount>=2)
    {
         printf("2 rs coin: %d\n",amount/2);
        amount%=2;
    }
    else if(amount>=1)
    {
        printf("1 rs coin: %d\n",amount/1);
        amount%=1; 
        
    }
    }
    printf("\n Thank you...visit again!");
}

