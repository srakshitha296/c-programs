//Given a five digit integer, print the sum of its digits.
#include <stdio.h>
int main() 
{
    int n, a, b, c, d;
    scanf("%d", &n);
    a=n%10;
    n/=10;
    b=n%10;
    n/=10;
    c=n%10;
    n/=10;
    d=n%10;
    n/=10;
    printf("%d",a+b+c+d+n);
    return 0;
}