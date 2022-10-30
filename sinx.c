//Program to compute sinx using Taylors series
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float degree,x,sum,term;
    printf("Enter the value in degree :");
    scanf("%f",&degree);
    x=degree*3.14593/180;
    term=x;
    sum=x;
    for(i=1;i<10;i++)
    {
        term=-term*x*x/(2*i*(2*i+1));
        sum+=term;
    }
    printf("The calculated sum is = %f\n",sum);
    printf("The mathematical sine value is = %f\n",sin(x));
    return 0;

}
