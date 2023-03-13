/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum( int no1, int no2 );// declaring function
int maximum( int no1, int no2 );// declaring function
int multiply( int no1, int no2 );// declaring function


// function main begin program execution
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : "); // prompt
   scanf("%d", &no1); // read an integer
   printf("Enter a value for no 2 : "); // prompt
   scanf("%d", &no2); //read an integer
   printf("%d ", minimum(no1, no2)); // calling function
   printf("%d ", maximum(no1, no2)); // calling function
   printf("%d ", multiply(no1, no2)); // calling function
   return 0;
}// end of the main function
int minimum( int no1, int no2 ){ // function implementation
   if( no1 < no2 ){
      return no1; // return value
   }
   else{
      return no2; // return value
   }
} // end of the functio

int maximum( int no1, int no2 ){ // function implementation
   if( no1 > no2 ){
      return no1; // return value
   }
   else{
      return no2; // return value
   }
}// end of the function
int multiply( int no1, int no2 ){// function implementation
   return no1 * no2; // return value
} // end of the function



