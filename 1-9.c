#include <stdio.h>
#define MAXWHITESPACES 1

main()
{
  char c, whitespaces_count;
  whitespaces_count = 0;

  while((c = getchar()) != EOF)
    if ( c == ' ' && whitespaces_count < MAXWHITESPACES ) {
      ++whitespaces_count;
      putchar(c);
    }
    else if (c != ' ') {
      whitespaces_count = 0;
      putchar(c);
    }
  return 0;
}
