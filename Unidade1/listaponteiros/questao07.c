/*. Determine o que será mostrado pelo seguinte programa. Compile-o, execute-o e explique se
foram obtidas as respostas esperadas. Justifique o porque de cada uma.*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");
    for(i = 0 ; i <= 4 ; i++) {
        printf("i = %d",i); // Imprime a interação atual do loop
        printf(" vet[%d] = %.1f",i, vet[i]); // Imprime o valor do vetor na posição i
        printf(" *(f + %d) = %.1f",i, *(f+i)); //  Imprime o valor de vet na posição i acessando o ponteiro f
        printf(" &vet[%d] = %X",i, &vet[i]); // Imprime o endereço de vet na posição i
        printf(" (f + %d) = %X",i, f+i); // Imprime o endereço de vet na posição i acessando o ponteiro f
        printf("\n");
    }
    return 0;
  }

  