#include <stdio.h>
#define MAXLEN 126
#define SPACESTR "\\s"
#define TABSTR "\\t"
#define NEWLINESTR "\\n"

int main()
{
  char freqs[MAXLEN+1];
  char c, i, i1;

  for (i = 0; i <= MAXLEN; i++)
    freqs[i] = 0;

  while ((c = getchar()) != EOF)
    freqs[c]++;

  for (i = 0; i <= MAXLEN; i++)
  {
    if (freqs[i] > 0)
    {
      if (i == ' ')
        printf("%s", SPACESTR);
      else if (i == '\t')
        printf("%s", TABSTR);
      else if (i == '\n')
        printf("%s", NEWLINESTR);
      else
        putchar(i);

      printf(": ");
      for (i1 = 1; i1 <= freqs[i]; i1++)
        printf("#");
      printf("\n");
    }
  }

  return 0;
}
