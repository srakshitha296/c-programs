#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter row no : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     for(j=i;j<n;j++)
     {
        printf(" ");
     }
     for(k=0;k<i;k++)
     {
        printf(" *");
     }printf("\n");
    }
    return 0;
}

