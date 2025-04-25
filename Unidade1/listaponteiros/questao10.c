#include <stdio.h>
/*int main(){
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }
    printf("\n");
}

Imprime o valor armazenado no endereço de vet[i], ou seja, o valor do vetor na posição i.

*/
int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
    printf("%X ",vet+i);
    }
    printf("\n");
}
/*Imprime o endereço de vet[i], ou seja, o endereço do vetor na posição i.
*/