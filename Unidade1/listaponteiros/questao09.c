/*quais das seguintes expressões são válidas? Justifique*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int mat[4], *p, x;


    p = mat + 1; // p aponta para o segundo elemento do vetor mat
    //  p = mat++; // não é válido, pois mat é um array e não pode ser incrementado
    //  p = ++mat; // não é válido, pois mat é um array e não pode ser incrementado
    x = (*mat); // x recebe o valor do primeiro elemento do vetor mat

}