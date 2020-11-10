#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* 
 * Lab Sheet 2:
 */

/* Question 1: 
 
 Complete the function below which takes in an integer input between zero and one hundred (0 ≤ n ≤ 100) and prints out the number expressed in English text, with spaces and no dashes (–), e.g. for the number “33”, we would expect to see “thirty three”. Hint: you may want to create additional functions to help.
 
 Call this function from the main to test your program.
 */

void numberToText(int value){
  /* Arrays of words representing numbers */
  char* teens[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  char* less10[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  char* tens[] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  char* hund[] = {"one hundred"};
  char* zero[] = {"zero"};

  /* Numbers must be within given range */
  if (value > 100 || value < 0) {
    printf("Please enter a number between 0 and 100!");
  }
  /* Printing the numbers between 11 and 19, which have unique words */
  else if (10 < value && value < 20) {
    printf("The number %d in words is %s\n", value, teens[value-11]);
  }
  /* Printing numbers less than 10 */
  else if (value < 10 && value!= 0) {
    printf("The number %d in words is %s\n", value, less10[value]);
  }
  /* Printing numbers that are NOT less than 10 and NOT in the 'teens' and NOT 100 */
  else if ((value == 10 || value >= 20) && value != 100) {
    int digi1 = value / 10;
    int digi2 = value % 10;
    printf("The number %d in words is %s ", value, tens[digi1-1]);
    printf("%s\n", less10[digi2]);
  }
  /* Printing the number 100 */
  else if (value == 100) {
    printf("The number %d in words is %s\n", value, hund[0]);
  }
  /* Printing the number 100 */
  else if (value == 0) {
    printf("The number %d in words is %s\n", value, zero[0]);
  }
}

/* Question 2: 
 
 Complete the function below that calculates, and returns, the distance between two points.
 
 Call this function from the main to test your program. Hint: may wish to use the following print statement in your main function, or similar: 

 printf("%1.2f\n", calculateDistance(0, 0, 4, 3));
 */

double calculateDistance(int x1, int y1, int x2, int y2){
  /* Calculating the difference in x and y between 2 coordinates */
  double delta_x = x1 - x2;
  double delta_y = y1 - y2;
  /* Calculating the square of the differences */
  double delta_x_sqr = pow(delta_x, 2);
  double delta_y_sqr = pow(delta_y, 2);
  /* Using Pythagors theorem to calculate distance */
  /* sqrt(x^2 + y^2) */
  double pythagoras = sqrt(delta_x_sqr + delta_y_sqr);
  return pythagoras;
}

/* Question 3: 
 
 Complete the function below that is given an integer, n, where 1 ≤ n ≤ 9999 and prints whether it is even, odd, or/and prime.  The output should be whole sentences for example, 

 1 is odd and not prime.
 2 is even and prime.
 3 is odd and prime.
 4 is even and not prime.
 5 is odd and prime
 
 Call this function from the main to test your program.
 */

void printOddEvenAndOrPrime(int n){
  /* Only numbers in range are accepted */
  if (n >= 1 && n <= 9999) {
    bool prime = true;
    /* Cycles through numbers from 2 to n/2 to check if prime */
    for (int i = 2; i <= n/2; i++) {
      int primeCheck = n % i;
      /* if n completely divides by i (no remainder), then it is not prime */
      if (primeCheck == 0) {
        prime = false;
        break;
      }
      /* if n does NOT completely divide by any i (remainder), then it is prime */
      else {
        continue;
      }
  }
  /* Automatically prime is n = 2 */
  if (n == 2) {
    prime = true;
  }
  int evenOrOdd = n % 2;
  bool evenOdd = false;
  /* if n completely divides by 2, then it is even, else it is odd */
  if (evenOrOdd == 0) {
    evenOdd = true;
  }
  printf("%d is %s and %s", n, evenOdd? "even" : "odd", prime? "prime\n" : "not prime\n");
  }
  /* Printed if negative, non-integer or outside of range */
  else {
    printf("Please enter a non-negative integer between 0 and 9999!\n");
  }
}

int main(void) {
  /* Array of test values */
  int x[] = {2, 4, 8, 16, 32, 64, 90, 99, 100};
  for (int i = 0; i < 9; i++) {
    numberToText(x[i]);
  }

  /* Test coordinates */
  // double x1 = 0.0, y1 = 0.0, x2 = 5.0, y2 = 13.0;
	double x1, y1, x2, y2;
	printf("\nEnter the coordinates: ");
	printf("\nx1: "); scanf("%lf", &x1);
	printf("y1: "); scanf("%lf", &y1);
	printf("x2: "); scanf("%lf", &x2);
	printf("y2: "); scanf("%lf", &y2);
  printf("\nThe distance between coordinates (%1.2f, %1.2f) and (%1.2f, %1.2f) is ", x1, y1, x2, y2);
  printf("%1.2f\n\n", calculateDistance(x1, y1, x2, y2));

	/* Inputting array range */
	int start;
	int end;
	printf("Start of range: ");
  scanf("%d", &start);
	printf("End of range: ");
  scanf("%d", &end);
	int length = end-start;
	/* Creating array of test values */
	int z[length];
	int count = 0;
	for(int i = start; i <= end; i++) {
		z[count] = i;
		count++;
	}
	printf("\nEven/Odd and Prime/Not: \n\n");
  for (int i = 0 ; i <= length; i++) {
    printOddEvenAndOrPrime(z[i]);
  }
  return 0;
}