/* O que é memory leak? Crie um exemplo de programa em C que contenha um memory leak e
proponha uma correção para o mesmo.*/


#include <stdio.h>
#include <stdlib.h>
/*Programa que causa memory leak
int main() {
    int *teste = (int *)malloc(sizeof(int) * 10); 

    for (int i = 0; i < 10; i++) {
        teste[i] = i * 2;
    }
    return 0;
}
*/

/*Correção do memory leak*/
int main() {
    int *teste = (int *)malloc(sizeof(int) * 10); 

    for (int i = 0; i < 10; i++) {
        teste[i] = i * 2;
    }
    free(teste); // libera a memória alocada
    return 0;
}
