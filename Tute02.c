/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>


//function main begin program execution
int main() {
  
  float distance, payment;
  
  printf( "Enter the distance  the van has travelled in killometers :" ); // prompt
  scanf( "%f", &distance ); // reading the distance
  
  if( distance <= 30 ){ // condition checking
    payment = distance * 50; // calculation
  }
  else{ // check condition
    payment = 30 * 50 + (distance - 30) * 40; // calculation
  }
  
  printf( "The total amount need to pay is :%.2f", payment ); // print the final payment

  
  
  return 0;
}// end of the main function
