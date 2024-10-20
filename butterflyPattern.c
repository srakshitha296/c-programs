#include <stdio.h>

int main() {
    int i,j,n=5;
    for(i = 1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<= i || j>=11-i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    for(i = 1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<= 6-i || j>=5+i)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}