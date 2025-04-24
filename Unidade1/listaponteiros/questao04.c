#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    // valor recebe 10, p1 recebe o endereço de valor, *p1 acessa valor e altera para 20.
    // Resposta esperada: 20
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);

    /* (b) */
    // temp recebe 26.5, p2 recebe o endereço de temp, *p2 acessa temp e altera para 29.0.
    // Resposta esperada: 29.0
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);

    /* (c) */
    // p3 recebe o endereço do primeiro caractere de nome, aux recebe o valor apontado por p3 que é 'P'>
    // Resposta esperada: P
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);

    /* (d) */
    // p3 recebe o endereço do quinto caractere de nome, aux recebe o valor apontado por p3 que é 'e'.
    // Resposta esperada: e
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    /* (e) */
    // p3 aponta para o primeiro elemento de nome, *p3 retorna o valor do primeiro caractere ('P').
    // Resposta esperada: P
    p3 = nome;
    printf("%c \n", *p3);

    /* (f) */
    // p3 aponta para o primeiro elemento do nome, p3 é incrementado em 4 posições, apontando para o quinto caractere que é 'e'.
    // Resposta esperada: e
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* (g) */
    // p3 é decrementado em 1 posição, apontando para o caractere anterior ('t').
    // Resposta esperada: t
    p3--;
    printf("%c \n", *p3);

    /* (h) */
    // as posições de vetor estão recebendo os valores 31, 45 e 27, p4 aponta para o inicio de vetor, idade recebe o valor apontado por p4 que é '31'.
    // Resposta esperada: 31
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* (i) */
    // p5 aponta para o segundo elemento de vetor, idade recebe o valor apontado por p5 que é '45'.
    // Resposta esperada: 45
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);

    /* (j) */
    // p4 aponta para o terceiro elemento de vetor, idade recebe o valor apontado por p4 que é '27'.
    // Resposta esperada: 27
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    /* (l) */
    // p4 no momento está apontando para o terceiro elemento de vetor, p4 é decrementado em 2 posições, apontando para o primeiro elemento de vetor que é '31'.
    // Resposta esperada: 31
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* (m) */
    // p5 está recebendo o endereço do terceiro elemento do vetor menos 1, ou seja, p5 aponta para o segundo elemento de vetor que é '45'.
    // Resposta esperada: 45
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* (n) */
    // p5 que atualmente está apontando para o segundo elemento de vetor, é incrementado em 1 posição, apontando para o terceiro elemento de vetor que é '27'.
    // Resposta esperada: 27
    p5++;
    printf("%d \n", *p5);

    return(0);
}