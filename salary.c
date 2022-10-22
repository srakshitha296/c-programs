/*Rameshs basic salary is input through keyboard,his dearness allowance is 40% of basic salary,and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
  int salary,grossS;
  printf("Enter the salary : ");
  scanf("%d",&salary);
  printf("Dearness allowance : %.2f\nHouse allowance : %.2f\nGross salary : %.2f",.4*salary, .2*salary, salary+(.4*salary)+(.2*salary));
  return 0;
}
