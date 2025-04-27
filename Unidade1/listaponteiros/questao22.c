#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int (*Comparar)(int, int);

// Função de comparação para qsort
int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

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

int compararCrescente(int a, int b) {
    return a - b;
}

int main() {
    int tamanho = 10000;
    int *array1 = malloc(tamanho * sizeof(int));
    int *array2 = malloc(tamanho * sizeof(int));

    // Preenchendo os arrays com valores aleatórios
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        int valor = rand() % 10000;
        array1[i] = valor;
        array2[i] = valor;
    }

    // Medindo o tempo da função 'ordenar'
    clock_t inicio = clock();
    ordenar(array1, tamanho, compararCrescente); // Usando a função 'ordenar' com ordem crescente
    clock_t fim = clock();
    double tempoOrdenar = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Medindo o tempo do qsort
    inicio = clock();
    qsort(array2, tamanho, sizeof(int), comparar);
    fim = clock();
    double tempoQsort = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Exibindo os resultados
    printf("Tempo de execução da função 'ordenar': %.6f segundos\n", tempoOrdenar);
    printf("Tempo de execução do qsort: %.6f segundos\n", tempoQsort);

    // Liberando memória
    free(array1);
    free(array2);

    return 0;
}

/* 
    Tempo de execução da função 'ordenar': 0.318367 segundos
    Tempo de execução do qsort: 0.001942 segundos 
    é inegável que o qsort é muito mais rápido que a minha função, certamente o quicksort foi feito de uma forma muito mais eficiente.


*/