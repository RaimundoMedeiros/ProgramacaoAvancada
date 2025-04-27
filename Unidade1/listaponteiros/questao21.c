#include <stdio.h>

// Função de ordenação de comparar para inteiros
typedef int (*Comparar)(int, int);

void ordenar(int *array, int tamanho, Comparar comparar) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (comparar(array[j], array[j + 1]) > 0) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Função de comparação para ordem crescente
int compararCrescente(int a, int b) {
    return a - b;
}

// Função de comparação para ordem decrescente
int compararDecrescente(int a, int b) {
    return b - a;
}

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    int tamanho = sizeof(array) / sizeof(array[0]);

    printf("Array original: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Ordenar em ordem crescente
    ordenar(array, tamanho, compararCrescente);

    printf("Array ordenado em ordem crescente: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Ordenar em ordem decrescente
    ordenar(array, tamanho, compararDecrescente);

    printf("Array ordenado em ordem decrescente: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}