#include <stdio.h>
#define MAXLINE 1000

int getl(char line[], int maxline);
void reverse(char line[]);

int main(void)
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  while (getl(line, MAXLINE) > 0)
  {
    reverse(line);
    printf("%s\n", line);
  }
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

void reverse(char s[])
{
  int i, j;
  char c;
  for(j = 0; s[j+1] != '\0'; j++)
    ;
  for(i = 0; i<j; i++, j--)
  {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
