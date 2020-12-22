#include <stdio.h>

void printHelloWorld(int myVar);
void printXTenTimes(int x);
void convertMetricToImperialHeights(int height_cm);
void fibonacci(int max);
void volumeOfACylinder(double height, double radius);

int main(void) {
  printf("Question 1\n");
  printHelloWorld(7);

  printf("\nQuestion 2\n");
  printXTenTimes(5);

  printf("\nQuestion 3\n");
  convertMetricToImperialHeights(192);

  printf("\nQuestion 4\n");
  fibonacci(8);

  printf("\nQuestion 5\n");
  volumeOfACylinder(14.7, 5.2);
  return 0;
}

/* 
 * Lab Sheet 1:
 */

 /* Question 1: 
 
 Adapt the “HelloWorld” code below to produce a program that defines a variable capable of holding an integer of your choice. The program should add 3 to that number, multiply the result by 2, subtract 4, subtract twice the original number, add 3, then print the result and a new line.
 */
 
void printHelloWorld(int myVar){
  printf("Hello World\n");
  int newVar; /* Defining variable for final result */
  newVar = myVar + 3;
  newVar = newVar * 2;
  newVar = newVar - 4;
  newVar = newVar - myVar * 2;
  newVar = newVar + 3;
  printf("My original integer is %d\n", myVar);
  printf("My new integer is %d\n", newVar);
}

 /* Question 2: 
 
 Complete the function below so that it prints every integer from x to x + 10.  Do not use loops. 
 
 Call this function from the main to test your program.
 */

void printXTenTimes(int x){
  printf("The integer x is %d\n", x);
  printf("The integers from x to x + 10 are");
  printf(" %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", x, x+1, x+2, x+3, x+4, x+5, x+6, x+7, x+8, x+9, x+10);

}

 /* Question 3: 
 
 Complete the function below so that it converts the height of a person from centimetres to feet and inches. Use integer division (rounding down is acceptable, which is the default for integer division). 
 
 Hint: 254 cm is exactly 100 inches and 12 inches is exactly 1 foot. 
 
 Call this function from the main to test your program.  For example you could test your program with the follow five values, where "?" replaced with the true value.

 101 cm is 3 feet 3 inches to the nearest inch.
 3 cm is 0 feet 1 inches to the nearest inch.
 15 cm is ? feet ? inches to the nearest inch.
 192 cm is ? feet ? inches to the nearest inch.
 124 cm is ? feet ? inches to the nearest inch.
 */

void convertMetricToImperialHeights(int height_cm){
  /* 1 inch is 2.54 cm */
  int height_ft = (height_cm/2.54)/12; /* Height in feet */
  int height_inch = height_cm/2.54; /* Height in inches */
  int height_inch_rem = height_inch - height_ft*12; /* Remaining height in inches */
  printf("A person is %d cm tall, which is %d feet and %d inches\n", height_cm, height_ft, height_inch_rem);
}

 /* Question 4: 
 
 Complete the function below so that it uses three variables (current, previous, next) to calculate and print out the first ten numbers of the Fibonacci sequence, each on a new line: i.e. the first four lines should be as follows:

 0 
 1 
 1 
 2
 
 Call this function from the main to test your program.
 */

 void fibonacci(max){
   int previous = 0;
   int current = 1;
   printf("The Fibonacci Sequence:\n");
   printf("%d\n", previous);
   printf("%d\n", current);

   /* Loop to calculate next number and reassign 'previous' and 'current' variables */
   for(int i = 1; i <= max; i++) {
     int next = previous + current;
     previous = current;
     current = next;
     printf("%d\n", next);
   }
 }

 /* Question 5: 
 
 Complete the function below so that it uses two variables: height and radius. Use these two variables and print to the screen, the volume of a cylinder. 

 Call this function from the main to test your program.  For example, you could test your program with the following values, 

 height 7.0cm and radius 4.0cm
 height 20.0cm and radius 3.0cm
 height 14.7cm and radius 5.2cm
 
 Which print out, the cylinder with height 7.0cm and radius 4.0cm has a volume of 351.86cm^3
 
*/

void volumeOfACylinder(double height, double radius){
  double PI = 3.141593;
  double csa = PI*radius*radius; /* Cross-Sectional Area */
  double volume = csa*height; /* Volume */
  printf("Cylinder Height: %f cm\nCylinder Radius: %f cm\nCylinder Volume: %f cm^3\n", height, radius, volume);
}