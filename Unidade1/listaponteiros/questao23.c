#include <stdio.h>
#include <stdlib.h>

void somaVetores(int *vetor1, int *vetor2, int *vetorSoma, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int *vetor1 = (int *)malloc(tamanho * sizeof(int));
    int *vetor2 = (int *)malloc(tamanho * sizeof(int));
    int *vetorSoma = (int *)malloc(tamanho * sizeof(int));


    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    somaVetores(vetor1, vetor2, vetorSoma, tamanho);

    printf("Vetor soma:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorSoma[i]);
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    free(vetorSoma);

    return 0;
}