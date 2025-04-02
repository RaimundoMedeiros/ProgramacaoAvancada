#include <stdio.h>

/*
 * Calcula a média final (aritmética) das 3 provas e determina a situação do aluno:
 * - Média >= 7: Aprovado
 * - 5 <= Média < 7: Recuperação
 * - Média < 5: Reprovado
 */
int main() {
    float nota1, nota2, nota3, media;

    // Entrada de dados
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Saída formatada
    printf("\nMédia do aluno: %.2f\n", media);

    // Determinação da situação
    if (media >= 7.0) {
        printf("Situação: Aprovado!\n");
    } 
    else if (media >= 5.0) {
        printf("Situação: Recuperação.\n");
    } 
    else {
        printf("Situação: Reprovado.\n");
    }

    return 0;
}