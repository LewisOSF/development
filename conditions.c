#include<stdio.h>

int main() {

  int minAge = 18;
  int age = 19;

  int citizen = 0; //1 = true, 0 = false

  if (age >= minAge && citizen == 1) {
    printf("This person is eligible to vote!\n");
  } else {
    printf("This person is not eligible to vote!!\n");
  }

  int grade = 97;
  char letterGrade;

  if (grade >= 90) {
    letterGrade = 'A';
  } else if (grade >= 80) {
    letterGrade = 'B';
  } else if (grade >= 70) {
    letterGrade = 'C';
  } else if (grade >= 60) {
    letterGrade = 'D';
  } else {
    letterGrade = 'F';
  }

  printf("Your Grade: %c", letterGrade);

  return 0;
}
