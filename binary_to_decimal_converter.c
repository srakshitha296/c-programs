//program to convert a binary number to decimal number using recursive function.

#include <stdio.h>  
int bintodec(int n);
void main()
{
    int n;
    printf("Enter a binary number\n");
    scanf("%d",&n);
    printf("%d in binary is %d in decimal",n, bintodec(n));
}
int bintodec(int n)
{
    if(n==0)
    return 0;
    else
return(n%10+bintodec(n/10)*2);
}





