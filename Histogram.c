#include <stdio.h>
#define IN 0
#define OUT 1

int main() {
  // a histogram for how many letters the words have
  int freq[15] = {0};
  int freqBlancks[15] = {0};
  int c;
  int wordLenght = 0;
  int wordStatus = OUT;

  while((c = getchar()) != EOF) {

    if (c == ' ' || c == '\n') {
      wordStatus = OUT;
    } else {
      wordStatus = IN;
    }

    if (wordStatus == IN) {
      ++wordLenght;
    } else if (wordLenght > 0) {
      ++freq[wordLenght];
      wordLenght = 0;
    }
  }

  // vertical
  for (int i =0; i < 15; ++i) {
    if (freq[i] > 0) {
      printf("%d: ", i);
      for (int j=0; j < freq[i]; j++) {
        printf("*");
      }
      printf("\n");
    }
  }

  return 0;
}