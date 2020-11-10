#include <stdio.h>
#include <string.h>
#include <math.h>

  /* 
  * Lab Sheet 3
  */

  /* Question 1
  
  Complete the function below which converts a hexadecimal string into its decimal value. (Do not use a C standard library function.) 

  The main function calls this function with an example hexadecimal value. Change this value to test your program.
  */

/* Converts individual Hex character to Dec */
int decDefine(char x) {
	int decChar;
	if(x == '0') {
		decChar = 0;
	}
	else if (x == '1') {
		decChar = 1;
	}
	else if (x == '2') {
		decChar = 2;
	}
	else if (x == '3') {
		decChar = 3;
	}
	else if(x == '4') {
		decChar = 4;
	}
	else if (x == '5') {
		decChar = 5;
	}
	else if (x == '6') {
		decChar = 6;
	}
	else if (x == '7') {
		decChar = 7;
	}
	else if (x == '8') {
		decChar = 8;
	}
	else if (x == '9') {
		decChar = 9;
	}
	else if(x == 'A' || x == 'a') {
		decChar = 10;
	}
	else if (x == 'B' || x == 'b') {
		decChar = 11;
	}
	else if (x == 'C' || x == 'c') {
		decChar = 12;
	}
	else if (x == 'D' || x == 'd') {
		decChar = 13;
	}
	else if (x == 'E' || x == 'e') {
		decChar = 14;
	}
	else if (x == 'F' || x == 'f') {
		decChar = 15;
	}
	return decChar;
}
/* Hex can be converted to Dec by the following:
 * For "FF3", where "F" = 15 and "3" = 3, since Hex is a base 16 number
 * Dec = 15*16^2 + 15*16^1 + 3*16^0
 * So the Dec equivalent of the Hex character is multiplied by 16 raised
 * to the power of the digit location.
 * The last character has a location of 0, the 2nd to last is 1, and so on.
 */
long int hexToDec(char hex[]){
	/* Calculates length of Hex code */
	int len = strlen(hex);
	long int deciCode = 0;
	/* Calculates Dec equivalent of each Hex character and adds to 'deciCode' */
	for(int i = 0; i <= len - 1; i++) {
		deciCode = deciCode + decDefine(hex[i]) * pow(16, len - i - 1);
	}
  return deciCode;
}

/* Question 2
 Complete the function below that print out a tree shape such as the following: 

    *
   ***
  *****
 *******
*********
   ***
   ***
   ***
   ***

  Note you can (and probably should) implement additional functions to help.

  You can assume that the width of the tree will be odd and hence every line will have an odd number of asterisks. The trunk will always have a width of three.

  Call this function from the main to test your program.
*/

void printTree(int width, int trunkLength){
	/* Used to calculate amount of whitespace before asterisks */
	int whitespace;
	int whitespaceReset = (width - 1)/2;
	/* Used to print correct number of asterisks for tree */
	int numLeaves;
	int leavesReset = 1;
	/* Used to determine when to stop printing asterisks for tree */
	int widthReset = width;
	printf("Tree:\n");
	while(widthReset > 0) {
		/* Prints whitespace before asterisks for leaves */
		for(whitespace = whitespaceReset; whitespace > 0; whitespace--) {
			printf(" ");
		}
		/* Prints asterisks */
		for(numLeaves = 1; numLeaves <= leavesReset; numLeaves += 1) {
			printf("*");
		}
		/* Reduces whitespace before asterisks and length of loop by 1 */
		widthReset--;
		whitespaceReset--;
		/* Increases number of asterisks printed for next iteration by 2 */
		if(leavesReset < width) {
			leavesReset = leavesReset + 2;
		}
		/* Breaks out of loop is next iteration prints more asterisks than width */
		else {
			printf("\n");
			break;
		}
		printf("\n");
	}
	int trunkWidth = 3;
	/* Whitespace before asterisks for trunk */
	int trunkWhite;
	while(trunkLength > 0) {
		/* Prints whitespace before asterisks for trunk */
		for(trunkWhite = (width - 1)/2 - 1; trunkWhite > 0; trunkWhite--) {
			printf(" ");
		}
		/* Prints asterisks for trunk */
		for(widthReset = trunkWidth; widthReset > 0; widthReset--) {
			printf("*");
		}
		printf("\n");
		/* Reduces length of loop */
		trunkLength--;
	}
}

int main(void) {
  char hex[40] = "FF3";
  printf("The hex value %s is %ld in decimal\n\n", hex, hexToDec(hex));

	int width = 13;
	int trunkLength = 4;
	printTree(width, trunkLength);
  return 0;
}