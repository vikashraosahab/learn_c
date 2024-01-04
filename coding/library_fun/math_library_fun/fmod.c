#include <stdio.h>
#include <math.h>

int main(void) {
  double val = 10.223;
  double val2 = 20.33;
  double remainder = fmod(val2 / val);
  printf("%ld", remainder); // Use %f for double
  return 0;
}
