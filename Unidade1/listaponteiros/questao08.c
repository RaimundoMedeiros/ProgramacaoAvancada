/*Assumindo que pulo[] é um vetor do tipo int, qual das seguintes expressões referenciam o valor
do terceiro elemento do vetor?*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int pulo[] = {1,2,3,4,5};

    printf("pulo1 = %d\n", *(pulo+2));
    printf("pulo1 = %d\n", *(pulo+4));
    printf("pulo1 = %p\n", pulo+2);
    printf("pulo1 = %p\n", pulo+4);

}