#include <stdio.h>
#include <locale.h>

#define CIGARROS_POR_CARTEIRA 20
#define DIAS_POR_ANO 365

/*
 * Calcula o valor total gasto por um fumante
 * com base nos anos fumando, cigarros por dia
 * e preço da carteira.
 */
int main() {
    // Configuração para formato brasileiro
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variáveis
    int anos, cigarros_dia;
    float preco_carteira, total;

    // Entrada de dados
    printf("\n=== CALCULADORA DE GASTOS COM CIGARRO ===\n\n");
    
    printf("Anos fumando: ");
    scanf("%d", &anos);
    
    printf("Cigarros por dia: ");
    scanf("%d", &cigarros_dia);
    
    printf("Preço da carteira (20 unidades): R$ ");
    scanf("%f", &preco_carteira);

    // Cálculo
    total = (cigarros_dia / (float)CIGARROS_POR_CARTEIRA) 
            * preco_carteira * DIAS_POR_ANO * anos;

    // Apresentação dos resultados
    printf("\n=== RESUMO DE GASTOS ===\n");
    printf("Anos fumando....: %d\n", anos);
    printf("Cigarros/dia....: %d\n", cigarros_dia);
    printf("Preço carteira..: R$ %.2f\n", preco_carteira);
    printf("----------------------------\n");
    printf("TOTAL GASTO.....: R$ %'.2f\n\n", total);

    return 0;
}