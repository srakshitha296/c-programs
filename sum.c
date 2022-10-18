#include<stdio.h>
float sum( float x,float y);
int main()
{
   float a,b;
    printf("Enter 2 numbers to be added:\n");
    scanf("%f%f",&a,&b);
    printf("Sum=%f",sum(a,b));
    return 0;
}
float sum(float x,float y)
{
    float sum=x+y;
    return(sum);
}