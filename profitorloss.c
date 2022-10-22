#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter the cost prize of the product: ");
    scanf("%f",&cp);
    printf("Enter the selling price of theproduct:");
     scanf("%f",&sp);
     if(sp>cp)
        printf("Profit: %f",sp-cp);
     else if(sp<cp)
     printf("Loss: %f",cp-sp);
     else
     printf("No profit No loss");
}