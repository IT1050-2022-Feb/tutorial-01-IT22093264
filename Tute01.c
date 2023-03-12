/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   float mark1, mark2, average;
   printf( "Enter the marks of the two subjects:-" );
   scanf( "%d%d", &mark1, &mark2 );
   printf( "The average of the two marks is %.2f", (mark1 + mark2 ) / 2.0 );
   
  
  return 0;
}

