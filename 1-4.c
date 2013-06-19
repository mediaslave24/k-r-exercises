#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -50;
  upper = 100;
  step = 10;

  printf("%3s %6s\n", "C", "F");
  celsius = lower;
  while(celsius <= upper) {
    fahr = celsius * 5.0 / 9.0 + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}
