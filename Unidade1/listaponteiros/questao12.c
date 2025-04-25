#include <stdio.h>
void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}

// O programa não vai compilar nada pois o ponteiro x é const, não pode ser alterado, além de que o valor 3 não é um enderemo de memória