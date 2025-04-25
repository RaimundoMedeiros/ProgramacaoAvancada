/* 
Assumindo que um inteiro tem 4 bytes de tamanho, qual será a saída do seguinte programa?
Justifique sua resposta
*/

#include <stdio.h>
void funcao(char **p){
  char *t;
  t = (p += sizeof(int))[-1];
  printf("%s\n", t);
}
int main(){
  char *a[] = { "ab", "cd", "ef", "gh", "ij", "kl"};
  funcao(a);
  return 0;
}

// a função recebe o array de ponteiros a, dentro da função é declarado o ponteiro t que recebe o valor de p que nesse momento é o endereço do primeiro elemento do array a, p é incrimentado em 4 bytes que é o tamanho do inteiro, fazendo com que p aponte para o quinto elemento do array: 'ij' com o [-1], p volta um elemento fazendo com que t aponte para o quarto elemento do array: 'gh', e imprime o valor de t que é 'gh'.
// A saída do programa será: gh