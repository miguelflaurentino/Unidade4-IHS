#include <stdio.h>
#include "mathlib.h"

int main(void) {
  int n1, n2, n3;
  
  printf("Dois inteiros: ");
  scanf("%d %d", &n1, &n2);
  printf("Maior: %d\n", maior(n1, n2));

  printf("n para o fatorial: ");
  scanf("%d", &n3);
  printf("Fatorial: %ld\n", fatorial(n3));

  return 0;
}
