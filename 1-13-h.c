#include <stdio.h>
#define MAXLEN 10

#define INWORD 0b1
#define ENDWORD 0b10

int main()
{
  unsigned char lengths[MAXLEN+1];
  unsigned char length = 0;
  unsigned char state = 0;
  unsigned char i = 0, i1 = 0;
  char c;

  for (i = 0; i <= MAXLEN; i++)
    lengths[i] = 0;

  while((c = getchar()) != EOF)
  {
    state =
      (c == ' ' || c == '\n' || c == '\t') ?
      (state & INWORD ? ENDWORD : !INWORD ) : INWORD;

    if (state & ENDWORD)
    {
      if (length <= MAXLEN)
        lengths[length]++;
      else
        lengths[MAXLEN]++;
      length = 0;
    }
    else if (state & INWORD)
      length++;
  }

  for (i = 1; i <= MAXLEN; i++ )
  {
    printf("%2d : ", i);

    if (lengths[i] != 0)
      for (i1 = 1; i1 <= lengths[i]; i1++)
        printf("#");

    printf("\n");
  }

  return 0;
}
