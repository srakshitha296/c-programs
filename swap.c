#include<stdio.h>
void swap(int ,int);
int main()
{
int x,y;
printf("Enter 2 numbers to be swapped:\t");
scanf("%d%d",&x,&y);
swap(x,y);
}
void swap(int a,int b) 
{
    int temp=a;
    a=b;
    b=temp;
    printf("After swapping:  %d %d",a,b);
}