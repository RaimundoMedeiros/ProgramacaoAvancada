/*Resposta à questão 19: Implementação de uma função em C que lê n valores do tipo float, os ordena em ordem crescente utilizando o método da bolha e exibe os valores. A memória é alocada dinamicamente para armazenar os valores.*/

#include <stdio.h>
#include <stdlib.h>

void ordenarValores() {
    int n;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    // Alocação dinâmica de memória
    float *valores = (float *)malloc(n * sizeof(float)); // float *valores declara um ponteiro para float, (float *) faz o cast do retorno de malloc para float, malloc(n * sizeof(float)) aloca n vezes o tamanho de float em bytes.
    // Leitura dos valores
    printf("Digite os valores: \n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Ordenação dos valores por bubblesort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (valores[j] > valores[j + 1]) {
                float temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }

    // Exibição dos valores ordenados
    printf("Valores em ordem crescente: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]);
    }

    // Liberação da memória alocada
    free(valores);
}

int main() {
    ordenarValores();
    return 0;
}

