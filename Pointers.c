#include <stdio.h>

void change_value(int *nb);

void main() {
  int nb = 10;
  printf("%d\n", nb);

 change_value(&nb);
  printf("%d\n", nb);
}

void change_value(int *nb) {
  *nb = 320;
}