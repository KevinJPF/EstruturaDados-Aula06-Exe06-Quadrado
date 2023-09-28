#include <stdio.h>

int Quadrado(n) {
  if (n == 1)
    return 1;

  return Quadrado(n - 1) + (n * 2 - 1);
}

int main(void) {
  int n;
  printf("Digite o valor de n: ");
  scanf("%d", &n);

  printf("O %d² e: %d\n", n, Quadrado(n));
  return 0;
}