/*Program to calculate perimeter of rectangle.
Take sides a & b,from the user. */

#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter the sides :");
    scanf("%f%f",&a,&b);

    printf("Perimeter : %f",2*(a+b));
    return 0;
}