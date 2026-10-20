/*
 * 2. Troca por referência 
 * Implemente void troca(int *a, int *b) que troca os valores de duas variáveis. No main , leia dois
 * inteiros, chame troca(&x, &y) e imprima os dois depois.
 * Exemplo:
 * Dois inteiros: 2 9
 * Depois: x = 9, y = 2
 * Pratica: passagem por referência ( * no parâmetro, & na chamada). Pergunta: por que isso não
 * funcionaria se troca recebesse int a, int b (por valor)?
 * */


/*
 * A função `troca` acessa a unidade de memória das variáveis e altera ela,
 * assim, a variável é alterada completamente em tempo de execução.
 * Se apenas a e b fossem passados, e não *a e *b (que representa sua a
 * referência de memória das variáveis, e não uma cópia do valor delas),
 * o que o programa faria seria alterar a copia, e se a copia não fosse
 * retornada pela função, se perderia quando a função saísse da pilha de
 * execução.
 * */
#include <stdio.h>

void troca(int *a, int *b);

int main() {
  int x, y;
  printf("Dois inteiros: ");
  scanf("%d%d", &x, &y);
  troca(&x, &y);

  printf("Depois: x = %d, y = %d\n", x, y);

  return 0;
}

void troca(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
