#include<stdio.h>
int main()
    {
        int n,a,b,c;
        printf("Enter a 3 digit number: \n");
        scanf("%d",&n);
        a=n%10;
        n/=10;
        b=n%10;
        c=n/10;
        printf("Sum=%d",a+b+c);
        return 0;
    }
