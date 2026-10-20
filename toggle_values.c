#include <stdio.h>

void toggle_value(int *a, int *b);

int main() {
  int num1, num2;

  printf("Type two numbers separeted by space: ");
  scanf("%d%d", &num1, &num2);

  printf("num1: %d and num2: %d\n", num1, num2);
  toggle_value(&num1, &num2);
  printf("num1: %d and num2: %d\n", num1, num2);

  return 0;
}

void toggle_value(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
