#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],m,n,p,q,i, j,k;
    printf("Enter the order of matrix A and B:");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    if(n!=p)
    {
        printf("Matrix Multiplication not possible");
        exit(0);
    }
    printf("Enter the elements of Matrix A");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    { 
     scanf("%d",&a[i][j]);
   }
    }
    printf("Enter the elements of Matrix B");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
    { 
     scanf("%d",&b[i][j]);
   }
    }
    printf("Multiplied Matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
             c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
     for(j=0;j<q;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}


}