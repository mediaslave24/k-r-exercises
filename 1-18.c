#include <stdio.h>
#define MAXLINE 1000

int getl(char line[], int maxline);
int rstrip(char line[]);

int main(void)
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  while (getl(line, MAXLINE) > 0 && rstrip(line) > 0)
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

int rstrip(char s[])
{
  int i, len;
  for(i = 0; s[i] != '\0'; i++)
    ;
  len = i;
  i--;
  while(s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
  {
    s[i--] = '\0';
  }
  return len;
}
