/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */
  
  #include <stdio.h>


// function main begin program execution
int main() {
  int end_Point, i, sum = 0;

  printf( "Enter the ending number :" ); // prompt
  scanf( "%d", &end_Point ); //read the ending number

  for( i = 1; i <= end_Point; ++i){
    sum = sum + i; // adding numbers

  }
  printf( "The total is :%d", sum ); // print the total

  
  return 0;
}// end of the main program
  
  

