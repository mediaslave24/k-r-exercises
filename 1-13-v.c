#include <stdio.h>
#define MAXLEN 10

#define INWORD 0b1
#define ENDWORD 0b10

int main()
{
  unsigned char freqs[MAXLEN+1];
  unsigned char length = 0;
  unsigned char maxfreq = 0;
  unsigned char state = 0;
  unsigned char i = 0, i1 = 0;
  char c;

  for (i = 0; i <= MAXLEN; i++)
    freqs[i] = 0;

  while((c = getchar()) != EOF)
  {
    state =
      (c == ' ' || c == '\n' || c == '\t') ?
      (state & INWORD ? ENDWORD : !INWORD ) : INWORD;

    if (state & ENDWORD)
    {
      if (length <= MAXLEN)
        freqs[length]++;
      else
        freqs[MAXLEN]++;
      length = 0;
    }
    else if (state & INWORD)
      length++;
  }

  for (i = 0; i <= MAXLEN; i++)
    if (maxfreq < freqs[i])
      maxfreq = freqs[i];

  for (i1 = 1; i1 <= MAXLEN; i1++)
    printf("---");

  printf("\n");

  for (i = maxfreq; i > 0; i--)
  {
    for (i1 = 1; i1 <= MAXLEN; i1++)
      printf("%3s", (freqs[i1] >= i) ? "#" : " ");
    putchar('\n');
  }

  for (i1 = 1; i1 <= MAXLEN; i1++)
    printf("---");

  printf("\n");

  for (i1 = 1; i1 <= MAXLEN; i1++)
    printf("%3d", i1);

  return 0;
}
