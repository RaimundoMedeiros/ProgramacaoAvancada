#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort
int comparar(const void *a, const void *b) { // a e b são ponteiros void, que podem apontar para qualquer tipo de dado
    return (*(float *)a > *(float *)b) - (*(float *)a < *(float *)b); // retorna 1 se a > b, -1 se a < b e 0 se a == b
    // *(float *)a/b faz o cast do ponteiro void para float e desreferencia o ponteiro, retornando o valor armazenado no endereço apontado por a
}

void ordenarValoresComQsort() {
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n); // Lê a quantidade de valores a serem ordenados

    // Alocação dinâmica de memória
    float *valores = (float *)malloc(n * sizeof(float));

    // Leitura dos valores
    printf("Digite os valores: \n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]); // Lê os valores do usuário e armazena no vetor alocado dinamicamente
    }

    // Ordenação dos valores usando qsort
    qsort(valores, n, sizeof(float), comparar); // qsort é uma função da biblioteca padrão que ordena um array usando o algoritmo quicksort

    // Exibição dos valores ordenados
    printf("Valores em ordem crescente: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]); // Exibe os valores ordenados com duas casas decimais
    }

    // Liberação da memória alocada
    free(valores); 
}

int main() {
    ordenarValoresComQsort(); // Chama a função que ordena os valores
    return 0;
}

