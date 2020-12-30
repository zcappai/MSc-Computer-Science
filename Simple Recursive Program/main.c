#include <stdio.h>

/* 
 * The recursive function below performs multiplication of two 
 * numbers without using the inbuilt * sign
 */

/* Multiplies 2 numbers together by recursion */
int multiply(int number, int by){
  /* if statement runs only if number is final one in sequence of number's */
  if (by == 1) {
    return number;
  }
  /* case for multiplication by 0 */
  else if (by == 0) {
    return 0;
  }
  /* else statements runs while number isn't last in sequence */
  else {
    return number + multiply(number, by - 1);
  }
}

int main(void) {
  printf("The multiplication of 2 by 3 is %d\n", multiply(2,3));
  return 0;
}

/* Round 1: number = 2, by = 3. So it goes to 'else' statement and calls function again
 * Round 2: number = 2, by = 2. So it goes to 'else' statement and calls function again
 * Round 3: number = 2, by = 1. So now it goes to 'if' statement and return number, which * is equal to 2.
 * Round 2: Return statement of 'else' becomes 2 + 2, which is 4.
 * Round 1: Return statement of 'else' becomes 2 + 4, which is 6.
 * So final answer is multiply(2,3) = 6, which is correct.
 *
 * The whole process is essentially 2 + 2 + 2
*/
