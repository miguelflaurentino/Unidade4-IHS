/*
 * 3. Dois resultados de uma vez (por referência)
 * Uma função só pode return um valor — mas, por referência, pode devolver vários. Implemente void
 * divmod(int a, int b, int *q, int *r) que calcula o quociente (em *q ) e o resto (em *r ). No
 * main , leia a e b , chame divmod(a, b, &q, &r) e imprima.
 * Exemplo:
 * Dividendo e divisor: 17 5
 * Quociente: 3, Resto: 2
 * Pratica: por que o scanf usa & — é exatamente isto: a função escreve no endereço que você deu.
 * */

/*
 * scanf usa & porque altera o valor da referência da variável.
 * */

#include <stdio.h>

void divmod(int a, int b, int *q, int *r);

int main() {
  int a, b, q, r;
  printf("Dividendo e divisor: ");
  scanf("%d%d", &a, &b);

  divmod(a, b, &q, &r);

  printf("Quociente: %d; Resto: %d;\n", q, r);

  return 0;
}

void divmod(int a, int b, int *q, int *r) {
  *r = a % b;
  *q = a / b;
}
