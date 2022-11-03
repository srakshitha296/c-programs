// Program to check whether a entered character is uppercase or lower case

#include<stdio.h>
int main()
 {
  char ch;

  printf("Enter a character : ");
  scanf("%c", &ch);

  if(ch>='A' && ch<='Z')
     printf("Uppercase");
  else if(ch>='a' && ch<='z')
     printf("Lowercase");
  else
     printf("Not an  english alphabet!");

    
  return 0;
}