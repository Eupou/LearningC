#include <stdio.h>

// Create a function that raises x to the power of y

int power(int x, int y);

void main() {
  printf("%d", power(3, 3));
}

int power(int x, int y) {
  if (y == 0) return 1;
  if (y == 1) return x;

  if (y > 1) {
    return x * power(x, y - 1);
  } 
}


