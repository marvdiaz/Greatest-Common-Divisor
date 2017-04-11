// GCD.c
// Marvin Diaz
// maerdiaz
// lab8
// This program only takes positive integers and will ask for it. 
// The two positive integers will be used to get the greatest common divisor

#include<stdio.h>
#include<stdlib.h>

int main(){
   int i, n, x, y;
   char str[100]; // string (i.e. char array) for discarding bad input

   // input 1
   printf("Enter a positive integer: ");
   while( 1 ){ // seemingly infinite loop
      n = scanf(" %d", &x); // try to read a integer
      while( n!=1 ){ // if the read failed, because its not a integer
         scanf("%s", str); // discard the non-integer
         printf("Please enter a positive integer: "); // ask again
         n = scanf(" %d", &x); // try to read a integer
      }
      // at this point we have a integer in the variable x
      if( x>0 ) break; // get out of the loop if its positive
      printf("Please enter a positive integer: "); // otherwise ask again
   }
   // break lands here


   // input 2
   printf("Enter another positive integer: ");
   while( 1 ){ // seemingly infinite loop
      n = scanf(" %d", &y); // try to read a integer
      while( n!=1 ){ // if the read failed, because its not a integer
         scanf("%s", str); // discard the non-integer
         printf("Please enter a positive integer: "); // ask again
         n = scanf(" %d", &y); // try to read a integer
      }
      // at this point we have a double in the variable y
      if( x>0 ) break; // get out of the loop if its positive
         printf("Please enter a positive integer: "); // otherwise ask again
   }
   // break lands here


   // calculate GCD
   int a = x, b = y, remainder;
   while( b != 0){
      remainder = a % b; // Remainder of the two inputs
      a = b; // The number that needs to be divided by is b
      b = remainder; // The remainder will divide m and get a new remainder
   }


   printf("The GCD of %d and %d is %d\n", x, y, a);

   return 0;
}
