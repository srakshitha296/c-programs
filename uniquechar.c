#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int n, i, j;
    printf("Enter a string :");
    scanf("%s",str);
    n=strlen(str);
      for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                
            if(str[i]==str[j]&&str[i]!='"')
            {
            printf("false");
            exit(0);
            }
            }
        }
    printf("true");
    return 0;
    
}