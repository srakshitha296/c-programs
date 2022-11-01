//Check whether a given character is a digit or not

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    ch=getchar();
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    printf("It is an alphabet");
    else if((ch>='0' && ch<='9'))
    printf("It is a digit");
    else
     printf("It is a special character");
    return 0;
}