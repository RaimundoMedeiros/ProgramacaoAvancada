#include <stdio.h>

// Que informe a área e o volume de um cilindro.

#define PI 3.14159265358979323846

int main() {
    double raio, altura, raio_ao_quadrado, area, volume;
    
    // Entrada de dados
    printf("Digite o raio do cilindro (em cm): ");
    scanf("%lf", &raio);
    printf("Digite a altura do cilindro (em cm): ");
    scanf("%lf", &altura);

    // Cálculos
    raio_ao_quadrado = raio * raio;
    area = 2 * PI * raio * altura + 2 * PI * raio_ao_quadrado;
    volume = PI * raio_ao_quadrado * altura;

    // Saída
    printf("\nArea: %.2f cm²\n", area);
    printf("Volume: %.2f cm³\n", volume);

    return 0;
}