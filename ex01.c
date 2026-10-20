/*
 * 1. Biblioteca de funções puras
 * Implemente duas funções que só calculam e retornam (sem imprimir nada dentro delas), e um main
 * que lê e chama:
 * int maior(int a, int b) — devolve o maior dos dois.
 * long fatorial(int n) — devolve n! (pode ser com laço).
 * Exemplo:
 * Dois inteiros: 7 3
 * Maior: 7
 * n para o fatorial: 5
 * Fatorial: 120
 * */

#include <stdio.h>

int maior(int a, int b);
long fatorial(long n);

int main() {
  int n1, n2, n3;
  
  printf("Dois inteiros: ");
  scanf("%d%d", &n1, &n2);
  printf("Maior: %d\n", maior(n1, n2));

  printf("n para o fatorial: ");
  scanf("%d", &n3);
  fatorial(n3);
  printf("Fatorial: %ld\n", fatorial(n3));

  return 0;
}

int maior(int a, int b) {
  if(a > b) { return a; }
  else { return b; }
}

long fatorial(long n) {
  int result = 1;
  for(int i = 2; i <= n; i++) {
    result *= i;
  }

  return result;
}
