/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float marks1,marks2,average;
  
  printf("enter marks for 1st subject: ");
  scanf("%f", &marks1);
   printf("enter marks for 2nd subject: ");
  scanf("%f", &marks2);

  average = (marks1 + marks2) / 2.0;
  printf("average is : %.2f", average);
  return 0;
}

