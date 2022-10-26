#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50][50], b[50][50], add[50][50], i, j, m, n;
    printf("Enter the order of Matrix : ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of Matrix A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of Matrix B\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}