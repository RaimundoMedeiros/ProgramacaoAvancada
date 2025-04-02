#include <stdio.h>

/* Para ler dois valores reais do teclado, calcular e imprimir na tela:
 * a. A soma destes valores
 * b. O produto deles
 * c. O quociente entre eles */

int main() {
    // Variáveis com nomes autoexplicativos
    float primeiro_valor, segundo_valor;
    float soma, produto, quociente;

    // Entrada de dados clara
    printf("Informe dois valores numericos:\n");
    printf("Primeiro valor: ");
    scanf("%f", &primeiro_valor);
    printf("Segundo valor: ");
    scanf("%f", &segundo_valor);

    // Cálculos organizados
    soma = primeiro_valor + segundo_valor;
    produto = primeiro_valor * segundo_valor;
    quociente = primeiro_valor / segundo_valor;

    // Saída formatada e alinhada
    printf("\nResultados:\n");
    printf("- Soma......: %8.2f\n", soma);      
    printf("- Produto...: %8.2f\n", produto);   
    printf("- Quociente.: %8.2f\n", quociente); 

    return 0;
}