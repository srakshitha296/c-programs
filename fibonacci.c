#include<stdio.h>
 int main()
{
    int n, i, fib[100];
    printf("ENTER A NUMBER WHOSE FIBONACCI SERIES HAS TO BE GENERATED\n");
    scanf("%d",&n);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=n;i++)
    {
      fib[i]=(fib[i-1]+fib[i-2]);
    }
    printf("Fibonacci series of %d : ",n);
    for(i=0;i<=n;i++)
    {
      printf("%d\t",fib[i]);
    }
}
  