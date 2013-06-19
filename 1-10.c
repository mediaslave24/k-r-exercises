#include <stdio.h>
#define  TABSTRING "\\t"
#define  BSSTRING "\\b"
#define  SLASHSTRING "\\\\"

main()
{
  char c;
  while((c = getchar()) != EOF)
    if (c == '\t')
      printf("%s", TABSTRING);
    else if (c == '\b')
      printf("%s", BSSTRING);
    else if ( c == '\\' )
      printf("%s", SLASHSTRING);
    else putchar(c);
  return 0;
}
