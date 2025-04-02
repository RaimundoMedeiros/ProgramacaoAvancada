/*#include <stdio.h>

int main() {
    int i=2,j=3;
    int *p, *q;
    p = &i; //  atribui o endereço de i para o ponteiro p, está correto.
    *q = &j; // q não foi inicializado e *q espera que retorne um inteiro e &j é um int*, está errado.
    p = &*&i; // retorna o endereço de i, está correto.
    i = (*&)j; // a sintaxe é inválida, está errado.
    i = *&j; // *& está se anulando, i = j, está correto.
    i = *&*&j; // *& está se anulando, i = j, está correto
    q = *p; // q é do tipo int* e *p está reotornando um int, está errado
    i = (*p)++ + *q; // (*p)++ está correto, daria 3 no meu contexto porém o *q não foi inicializado, fazendo com que dê problema, está errado.

    return 0;
}
    */