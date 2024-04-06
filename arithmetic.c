#include<stdio.h>

int main() {
  int x,y;
  float z;

  x = 25;
  y = 37;
  z = 42.15f;

  printf("X + Y = %d\n", (x+y));
  printf("X - Y = %d\n", (x-y));
  printf("X * Y = %d\n", (x*y));

  double result = (double)x/y;
  printf("X / Y = %f\n", (result));

  printf("X / Z = %f\n", (x/z));

  x++;
  printf("X = %d\n", x);

  int modResult = 9 % 2;
  printf("modResult = %d\n", modResult);

  return 0;
}
