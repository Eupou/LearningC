#include <stdio.h>
#define MAXLINE 1000

// print the longest input line

int get_line(char line[], int maxline);
void copy (char longestInputLine[], char inputLine[]);

int main() {
  int lineLenght;
  int maxLineLenght = 0;
  char inputLine[MAXLINE];
  char longestInputLine[MAXLINE];

  while ((lineLenght = get_line(inputLine, MAXLINE)) > 0) {
    if (lineLenght > maxLineLenght) {
      maxLineLenght = lineLenght;
      copy(longestInputLine, inputLine);
    }
  }

  if (maxLineLenght > 0) {
    printf("%s", longestInputLine);
  }
}

int get_line(char line[], int maxline) {
  int c, i;
  
  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';
  return i;
}

void copy (char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}