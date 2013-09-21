#include <stdio.h>

float celsius_to_fahr(float celsius)
{
  float fahr;
  fahr = celsius * 5.0 / 9.0 + 32.0;
  return fahr;
}

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("%3s %6s\n", "C", "F");
  celsius = upper;
  while(celsius >= lower) {
    printf("%3.0f %6.1f\n", celsius, celsius_to_fahr(celsius));
    celsius = celsius - step;
  }
  return 0;
}
