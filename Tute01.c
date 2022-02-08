/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
{
  int mark1,mark2,tot,avg;
   
   printf("Input mark 1:");
   scanf("%i",&mark1);
   
   printf("Input mark 2:");
   scanf("%i",&mark2);   
   
   tot=mark1+mark2;
   avg=tot/2;
   
   printf("Avarage of 2 marks %i",avg);
   
  return 0;
}

