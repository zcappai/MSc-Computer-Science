#include <stdio.h>

/* 
 Modify the function below so that it prints out the square multiplication tables for any number.  How might you modify this function, or add a new function, so it prints out the multiplication tables for any range of numbers?

 */

void squareMultTable(int n){
	printf("Square Multiplication Tables Up To %d:\n", n);
	/* Iterates 2 ways between 1 and n to produce 2D table */
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
			/* Multiplies integers and prints on one line */
      int multiply = i * j;
      printf("%d\t", multiply);
    }
		/* New line for new numbers */
    printf("\n");
  }
}

void rangeMultTable (int a, int b) {
	/* Only runs function if range is given properly, i.e. a <= b */
  if(a > b) {
    printf("\nInvalid Range! 1st Number MUST Be Smaller Than 2nd!");
  }
  else {
		printf("\nMultiplication Tables For Numbers Between %d and %d:\n", a, b);
		/* Iterates 2 ways between range of numbers given and between 1 and 10 */
		/* Range of numbers multipled only up to 10 to prevent excessive results */
    for(int i = a; i <= b; i++) {
      for(int j = 1; j <= 10; j++) {
				/* Multiplies integers and prints on one line */
        int multiply = i * j;
				printf("%d\t", multiply);
    }
		/* New line for new numbers */
    printf("\n");
  }
  }
}

int main(void) {
	int number;
	printf("Size of square multiplication table: ");
  scanf("%d", &number);
  squareMultTable(number);

	printf("\n\n");

	int first;
	int last;
	printf("First multiplication table: ");
  scanf("%d", &first);
	printf("Last multiplication table: ");
  scanf("%d", &last);
	rangeMultTable(first, last);
  return 0;
}