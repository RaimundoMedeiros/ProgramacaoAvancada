/*Justifique porque a saída do seguinte programa é mostrado o valor 22*/

#include <stdio.h>
int f(int a, int *pb, int **ppc) { // a é um inteiro que recebeu c no main, pb é um ponteiro para inteiro que recebeu o endereço de c e ppc é um ponteiro para ponteiro de inteiro que recebeu o endereço de b
  int b, c; // b e c são declarados como inteiros localmente dentro da função f
  **ppc += 1; // o valor apontado por ppc se decompormos ele, temos o valor de b que é o endereço de c, então o valor de c é incrementado em 1
  c = **ppc; // c recebe o valor apontado por ppc, que agora é 6
  //printf("%d\n", c); 
  *pb += 2; // como o valor de c foi aumentado em 1, o valor de b que é o endereço de c, recebe o valor de c + 2, ou seja, 6 + 2 = 8
  b = *pb; // b recebe o valor apontado por pb, que agora é 8
  a += 3; // a recebe o valor de a + 3, ou seja, 5 + 3 = 8
  return a + b + c; // a + b + c = 8 + 8 + 6 = 22
}
/*void main() {
  int c, *b, **a; //c é declarado como inteiro, b ponteiro para inteiro, a é um ponteiro para ponteiro de inteiro
  c = 5; // c recebe 5
  b = &c; // b recebe o endereço de c
  //printf("%d\n", *b);
  a = &b; // a recebe o endereço de b
  //printf("%d\n", **a);
  printf("%d\n", f(c, b, a)); // chama a função f passando c, b e a como parâmetros
  //getchar(); 
}*/