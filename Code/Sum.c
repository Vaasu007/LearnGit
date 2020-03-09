// Return Valid Sum
// Otherwise print can't calculate sum

#include <limits.h>

// Good Code
int sumValid(int a, int b) {
  int result = 0;
  if (((b > 0) && (a > (INT_MAX - b))) ||
      ((b < 0) && (a < (INT_MIN - b)))) {
    /* Handle error */
 	printf("\n Overflow/Underflow...")
  } else {
  	  result = a + b;
  }
  return result;
}

// Bad Code
int sumBad(int a, int b) {
	return a + b;
}

int main() {
	return 0;
}

