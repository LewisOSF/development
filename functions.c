#include<stdio.h>

void greet();
void multiply(int x, int y);

int main() {
  greet();
  multiply(5, 3);

  return 0;
}

void multiply(int x, int y) {
  int result;
  result = x * y;

  printf("The result is %d\n", result);
}

void greet() {
  printf("Greetings!\n");
}
