#include <stdio.h>
#define IN 10
#define OUT 11

int main()
{
  char c, state;

  state = OUT;
  while((c = getchar()) != EOF)
    if ( state == IN && ( c == ' ' || c == '\t') ) {
      state = OUT; 
      putchar('\n');
    }
    else {
      state = IN; 
      putchar(c);
    }
  return 0;
}
