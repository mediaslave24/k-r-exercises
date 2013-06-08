#include <stdio.h>

main()
{
  printf("null: \\0, ignore-character, used to mark the end of string\n");
  printf("bell: \\a, audible, beep\n");
  printf("backspace: \\b, erase last character\n");
  printf("horizontal tab: \\t, moves printing position some spaces to right\n");
  printf("line feed: \\n, end of line marker\n");
  printf("form feed: \\f, clear the screen, causes printer to eject the paper\n");
  printf("carriage return: \\r\n");
  printf("escape: \\e, GCC only\n");
  return 0;
}
