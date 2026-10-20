/*
 * 5. Segurança: conserte o gets
 * O código abaixo lê um nome num char buf[8] usando gets — perigoso (aliás, o compilador moderno
 * nem aceita gets !). Reescreva a função echo de forma segura usando fgets , e teste digitando um
 * texto bem maior que 7 caracteres: o programa não pode quebrar.
 *
 * Pratica: buffer overflow e entrada segura. Pergunta: o que, na pilha, o gets poderia sobrescrever se você
 * digitasse demais?
 * */

#include <stdio.h>

void echo(void) {
  char buf[8];
  fgets(buf, sizeof(buf), stdin); // gets(buf); // PERIGOSO: nao limita o tamanho
  printf("Voce digitou: %s\n", buf);
}

int main(void) {
  echo();
  return 0;
}
