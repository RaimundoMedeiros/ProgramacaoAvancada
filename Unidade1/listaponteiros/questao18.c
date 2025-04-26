/* Um ponteiro para uma função é uma variável que armazena o endereço de uma função. Ele permite que você chame a função através do ponteiro, o que é útil para implementar callbacks, tabelas de funções e outras técnicas avançadas de programação. */

#include <stdio.h> // biblioteca para entrada e saída

// Função simples que será chamada através de um ponteiro
int soma(int a, int b) {
    return a + b;
}

int main() {
    // Declaração de um ponteiro para uma função que recebe dois inteiros e retorna um inteiro
    int (*ponteiro_para_funcao)(int, int);

    // Atribuímos o endereço da função 'soma' ao ponteiro
    ponteiro_para_funcao = soma;

    // Chamamos a função 'soma' através do ponteiro
    int resultado = ponteiro_para_funcao(5, 3);

    // Exibimos o resultado
    printf("O resultado da soma é: %d\n", resultado);

    return 0;
}



