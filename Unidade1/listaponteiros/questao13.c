/*Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:
◦ x for declarado como char? // 4093, 4094, 4095
◦ x for declarado como int? // 4094, 4096, 4098
◦ x for declarado como float? // 4096, 4100, 4104
◦ x for declarado como double? // 4096, 4104, 4112
Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou*/

#include "stdio.h"
#include "stdlib.h"

int main(void){
    char x[4];
    int y[4];
    float z[4];
    double w[4];

    printf("char: %p %p %p\n", (void*)(x+1), (void*)(x+2), (void*)(x+3));
    printf("int: %p %p %p\n", (void*)(y+1), (void*)(y+2), (void*)(y+3));
    printf("float: %p %p %p\n", (void*)(z+1), (void*)(z+2), (void*)(z+3));
    printf("double: %p %p %p\n", (void*)(w+1), (void*)(w+2), (void*)(w+3));

    return 0;
}

// Me parece que está de acordo, claro que  o endereço varia de uma forma diferente do que declarado na questão mas as proporções estão corretas.
