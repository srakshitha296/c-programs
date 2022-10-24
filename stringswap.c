#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], temp[100];
    printf("a=");
    scanf("%s",str1);
    printf("b=");
    scanf("%s",str2);
      strcpy(temp,str1);
      strcpy(str1,str2);
      strcpy(str2,temp);
    printf("\na=%s\n", str1);
    printf("b=%s\n",str2);
return 0;
}