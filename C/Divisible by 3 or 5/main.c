#include <stdio.h>
#include <stdbool.h>

/*
 * Write a function which returns true if a number is divisible by 3 and  
 * false if it is not.  Hint: use the modulo (%) operator.
 *
 * Modify your code so that your function now returns true if a number is divisible 
 * by 3 or 5 and false if it is not.
 *
*/

/* Defining functions */
bool div3(int x);
bool div3or5(int x);

int main(void) {
  /* Inputting array range */
	int start;
	int end;
	printf("Start of range: ");
  scanf("%d", &start);
	printf("End of range: ");
  scanf("%d", &end);
	int length = end-start;
	/* Creating array of test values */
	int x[length];
	int count = 0;
	for(int i = start; i <= end; i++) {
		x[count] = i;
		count++;
	}

  /* For loop to iterate over test values */
  for (int i = 0; i <= length; i++) {
    /* If 'x' is divisible by 3, 'div3' will return 'true', else 'false' */
    printf("\nIs the integer %d divisible by 3? %s", x[i], div3(x[i]) ? "TRUE" : "FALSE");
    /* If 'x' is divisible by 3 or 5, 'div3or5' will return 'true', else 'false' */
    printf("\nIs the integer %d divisible by 3 or 5? %s\n", x[i], div3or5(x[i]) ? "TRUE" : "FALSE");
  }  
  return 0;
}

/* Returns 'true' if 'x' divisible by 3, 'false' if 'x' NOT divisible by 3 */
bool div3(int x) {
  /* If statement checks if condition is true or false */
  if ( x % 3 == 0) {
    return true;
  }
  else {
    return false;
  }
}

/* Returns 'true' if 'x' divisible by 3 or 5, 'false' if 'x' NOT divisible by 3 or 5 */
bool div3or5(int x) {
  /* If statement checks if condition is true or false */
  if ( x % 3 == 0 || x % 5 == 0) {
    return true;
  }
  else {
    return false;
  }
}