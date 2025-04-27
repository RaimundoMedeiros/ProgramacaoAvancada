#include <stdio.h>
#define TAM 10
int funcao1(int vetor[], int v)
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        if (vetor[i] == v)
            return i;
    }
    return -1;
}
int funcao2(int vetor[], int v, int i, int f)
{
    int m = (i + f) / 2;
    if (v == vetor[m])
        return m;
    if (i >= f)
        return -1;
    if (v > vetor[m])
        return funcao2(vetor, v, m + 1, f);
    else
        return funcao2(vetor, v, i, m - 1);
}
int main()
{
    int vetor[TAM] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    printf("%d - %d", funcao1(vetor, 15), funcao2(vetor, 15, 0, TAM - 1));
    printf("\n");
    return 0;
}

// O resultado é 7 - 7, pois a função funcao1 percorre o vetor linearmente e encontra o valor 15 na posição 7. Portando a primeira afirmação é verdadeira.

// a função 2 faz uma busca binária, o que é muito mais eficiente que a busca linear da função1. logo a segunda afirmação é Falsa.

//  A fun~çao2 implementada de forma recursiva, não iterativa, o que é uma diferença importante entre as duas funções. A função 1 é iterativa e a função 2 é recursiva. Portanto a terceira afirmaçção é negativa.

// a alternativa correta é a letra (a)
