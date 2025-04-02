#include <stdio.h>

/* Calcula e exibe o quociente e resto da divisão inteira entre dois números */
int main() {
    int dividendo, divisor;
    int quociente, resto;

    // Entrada de dados
    printf("Digite o dividendo (número a ser dividido): ");
    scanf("%d", &dividendo);
    
    printf("Digite o divisor (número que divide): ");
    scanf("%d", &divisor);

    // Cálculos matemáticos
    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    // Exibição dos resultados
    printf("\nResultados:\n");
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}