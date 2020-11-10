#include <stdio.h>

/*
 * Complete the fibonacci function below such that it calculates the 
 * nth term of the Fibonacci sequence using iteration.
 * 
 * The first 4 terms of the Fibonacci sequence in this example 
 * are  1, 1, 2, 3
 *
 * For example if we call fibonacci(1) we should get the value 1 returned,
 * if we call fibonacci(4) we should get the value 3 returned. 
 */

int fibonacci(int term){
  /* Initialises 1st and 2nd terms */
  int prev = 1;
  int curr = 1;

  /* Next term in sequence */
  int next;
  
  /* 'for' loop calculates next term in sequence from previous 2 terms */
  for (int i = 2; i < term; i++) {
    next = prev + curr;
    prev = curr;
    curr = next;
  }
  /* Returns next term in Fibonacci sequence */
  return curr;
}

int main(void) {
  /* Prints out Fibonacci sequence up to nth term */
  int n;
	printf("Number of Fibonacci Terms: ");
	scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    printf("The %dth term of the Fibonacci sequence is %d\n", i, fibonacci(i));
  }
  return 0;
}