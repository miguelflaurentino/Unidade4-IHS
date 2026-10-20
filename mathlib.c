#include "mathlib.h"

int maior(int a, int b) {
  if (a > b) { return a; }
  return b;
}

long fatorial(long n) {
  long result = 1;
  for (long i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}
