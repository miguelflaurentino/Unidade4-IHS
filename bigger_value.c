#include <stdio.h>

int bigger_value(int a, int b);

int main() {
  int num1, num2, big_num;
  printf("Type two numbers separeted by space: ");
  scanf("%d%d", &num1, &num2);
  
  big_num = bigger_value(num1, num2);

  printf("The bigger num is: %d\n", big_num);

  return 0;
}

int bigger_value(int a, int b) {
  if (a > b) {
    return a;
  } 
  else {
    return b;
  }
}
