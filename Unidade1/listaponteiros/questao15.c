/*O que será mostrado na tela pelo seguinte programa? Justifique sua resposta.*/

#include <stdio.h>
int main(){
  unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},
  {7, 8, 9}, {10, 11, 12}};
  //printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}

// x+3 desloca o ponteiro x 3 posições, o que resulta no endereço de x[3]
// *(x+3) desreferencia o ponteiro x+3, resultando no endereço de x[3][0]
// *(x+2)+3 desreferencia o ponteiro x+2, resultando no endereço de x[2][0] + 3, ou seja, o endereço de x[2][3] que não existe, mas o compilador não verifica isso, então ele mostra o endereço de x[2][0] + 3
// a tela mostrará os endereços de x[3], x[3][0] e x[2][0] + 3, que são os endereços de memória correspondentes a essas posições.