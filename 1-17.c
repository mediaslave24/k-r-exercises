#include <stdio.h>
#define MAXLINE 1000
#define LENGTH 80

int getl(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  while ((len = getl(line, MAXLINE)) > 0)
    if (len > LENGTH)
      printf("%s", line);
  return 0;
}

int getl(char s[], int lim)
{
  int c, i, j;
  j = 0;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    if (i < lim-1)
      s[j++] = c;
  if (c == '\n') {
    s[j++] = c;
  }
  s[j] = '\0';
  return i;
}
