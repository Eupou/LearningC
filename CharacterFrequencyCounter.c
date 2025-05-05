#include <stdio.h>

void main() {
  int freq[26] = {0};
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++freq[c - 'a'];
        }
    }

    // Exibir frequências
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            printf("%c: %d\n", i + 'a', freq[i]);
    }

}