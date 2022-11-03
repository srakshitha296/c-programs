/* Write a program to give grades to a student
marks<30 is c
30<=marks<70 is B
70<=marks<90 is A
90<=marks<=100 is A+ */

#include<stdio.h>
int main(){
    int percentage;
    printf("Enter percentage :");
    scanf("%d",&percentage);

   percentage<30?printf("C"):(percentage==30 || percentage<70?printf("B"):(percentage==70 || percentage<90?printf("A"):printf("A+")));
    return 0;
}

