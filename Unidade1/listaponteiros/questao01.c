#include <stdio.h>

int main() {
    int i=3,j=5;
    int *p, *q;
    p = &i;
    printf("p = &i: %p \n", (void *)(p = &i));
    q = &j;
    printf("q = &j: %p \n", (void *)(q = &j));
    printf("p == &i: %d (1 = verdadeiro, 0 = falso)\n", p == &i);
    // p == &i; o valor será verdadeiro pq p está armazenando o endereço de i
    printf("*p - *q: %d \n", *p - *q);
    // *p - *q, o valor será -2 pois *p está acessando o endereço armazenado em p que é &i e pega o valor de i que é 3, *q está acessando o endereço armazenado em &j e pega o valor de j que é 5, dando -2
    printf("**&p: %d\n",**&p);
    /* &p: retorna o endereço na memória onde o ponteiro p está armazenado
     * *&p: retorna o valor que está armazenado no endereço de p que é &i
     * **&p: retorna o valor que está armazenado em *&p ou seja, do &i, que é 3
    */
    printf("3 - *p / (*q) + 7: %d\n", (3 - *p/(*q) + 7));
    // *p e *q retornam os valores armazenados nos endereços apontados por p e q (que são i e j), resultando em 3 e 5 respectivamente, como são ponteiros de inteiros, a divisão de 3/5 é 0, fazendo com que o resultado seja 3+7 = 10

    return 0;
}