/*In a town the percentage of man is 52,
 The percentage of total literacy is 48,
  if total percentage of literate men is 35 of the total population,
   Write a program to find the total number of illetarate men and women if the population of the town is 80,000.*/
#include<stdio.h>
int main()
{
   int TP,TM,TW,LM,LW,TL;
   TP=80000;
   TM=.52*TP;
   TW=TP-TM;
   TL=.48*TP;
   LM=.35*TP;
   LW=TL-LM;
   printf("Total number of illeterate men : %d\nTotal number of illeterate women : %d",TL-LM,TL-LW);
}