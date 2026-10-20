/*
 * 4. Recursão × iteração
 * Implemente a soma 1 + 2 + ... +
 * n de duas formas:
 * long soma_rec(int n) — recursiva (identifique o caso-base e o passo recursivo).
 * long soma_iter(int n) — iterativa (com laço).
 * No main , leia n e imprima as duas (devem dar o mesmo).
 * Exemplo:
 * n: 100
 * rec = 5050, iter = 5050
 * Pratica: recursão. Pergunta: qual versão usa mais memória e por quê? (Pense na pilha: quantos quadros
 * a recursiva abre ao mesmo tempo?)
 * */

/*
 * A versão iterativa é mais leve que a recursiva.
 * A recursiva empilha várias chamadas de si mesmo.
 * Empilha em quantidade de n.
 * */
#include <stdio.h>

long soma_rec(int n);
long soma_iter(int n);

int main() {
  int n;
  printf("n: ");
  scanf("%d", &n);

  printf("rec = %ld, iter = %ld\n", soma_rec(n), soma_iter(n));

  return 0;
}

long soma_rec(int n) {
  if(n <= 1) { return 1; }
  return n + soma_rec(n - 1);
}

long soma_iter(int n) {
  long result = n;
  for(int i = 1; i < n; i++) {
    result += i;
  }
  return result;
}
