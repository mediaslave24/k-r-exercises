#include <stdio.h>

main()
{
  int tabs, newlines, whitespaces;
  tabs = newlines = whitespaces = 0;
  char c;
  while((c = getchar()) != EOF)
    if (c == '\n')
      ++newlines;
    else if (c == '\t')
      ++tabs;
    else if (c == ' ')
      ++whitespaces;
  printf("\nNewlines: %i\nTabs: %i\nWhitespaces: %i\n", newlines, tabs, whitespaces);
  return 0;
}
