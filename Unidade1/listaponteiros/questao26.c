/*(ENADE, 2023) Na programação de sistemas embarcados, algumas posições de memória servem
para diferentes propósitos, não apenas para armazenar valores. Em algumas dessas memórias,
cada um os bits possui um significado diferente, sendo necessário manipulá-los
individualmente ou em pequenos grupos. Por isso, o conhecimento da álgebra booliana, bem
como dos operadores tilizados para realizar operações binárias nas linguagens de programação,
é essencial para o desenvolvimento desse tipo de sistema. A partir dessas informações, observe
o código apresentado a seguir, escrito na linguagem C, que faz uso de operações binárias sobre
variáveis inteiras.*/

#include <stdio.h>

int main()
{
    int a, b;
    int x, y, z;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    z = a + b; // x = 10, y = 1, z = 11
    while (a)  // enquanto a for diferente de 0
    {
        x = x | b;       // x = 10 | 1 - 1010 | 0001 = 1011 = 11
        y = y ^ a;       // y = 1 ^ 10 - 0001 ^ 1010 = 1011 = 11
        z = z & (a + b); // z = 11 & (10 + 1) - 1011 & 1011 = 1011 = 11
        a = a >> 1;      // a = 10 >> 1 = 5 // a é deslocado 1 bit para a direita, 10 é 1010 em binário, deslocando 1 para direita, fica 0101 que é 5
        b = b << 1;      // b = 1 << 1 = 2 // b é deslocado 1 bit para a esquerda, 1 é 0001 em binário, deslocando 1 para esquerda, fica 0010 que é 2

        /*
        Na 2ª iteração do while:
        x = 11 | 2 = 11
        y = 11 ^ 5 = 14
        z = 11 & (5 + 2) = 11 & 7 = 3
        a = 5 >> 1 = 2
        b = 2 << 1 = 4
        se continuarmos
        Na 3ª iteração do while:
        x = 11 | 4 = 15
        y = 14 ^ 2 = 12
        z = 3 & (2 + 4) = 3 & 6 = 2
        a = 2 >> 1 = 1
        b = 4 << 1 = 8
        Na 4ª iteração do while:
        x = 15 | 8 = 15
        y = 12 ^ 1 = 13
        z = 2 & (1 + 8) = 2 & 9 = 0
        a = 1 >> 1 = 0
        b = 8 << 1 = 16

        a = 0, então o while termina
        */
    }
    printf("%d %d %d\n", x, y, z);
    return 0;
}

/*Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
será, exatamente, o valor da saída do programa? Explique, PASSO-A-PASSO, os cálculos
realizados pelo programa para chegar a esse resultado.*/