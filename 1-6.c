#include <stdio.h>

main()
{
  char c;
  while((c = getchar()) != EOF) {
    printf("%i", c != EOF);
  }
  printf("%i", c != EOF);
  return 0;
}
