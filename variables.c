#include<stdio.h>

int main() {
  char x;
  x='A';

  char y;
  y='B';

  int age = 23;
  float gpa = 3.14f;
  double exact = 2.4536f;

  printf("The value of X: %c\n", x);
  printf("The value of Y: %c\n", y);
 
  printf("Lewis is %d years old\n", age);
  printf("My GPA is %0.2f", gpa);

  return 0;
}
