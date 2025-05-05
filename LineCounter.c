#include <stdio.h>


// to count how lines we have, we just need to count the '\n'
void main() {
  int lineCount = 0;
  int c;
  
  while((c = getchar()) != EOF) {
    if (c == '\n') ++lineCount;
  }

  printf("%d linhas foram adicionadas", lineCount);
}