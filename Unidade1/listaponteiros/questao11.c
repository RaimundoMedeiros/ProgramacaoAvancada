/*Um programador pretendia armazenar em um struct (acessível através de um ponteiro) o nome
de um usuário e um valor inteiro associado e preparou o seguinte programa. Há algum erro
presente no código? Se sim, qual é ele e como pode ser corrigido?
*/
/*#include <stdio.h>

struct teste{
  int x = 3;
  char nome[] = "jose";
};


main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->nome);
}
*/

/*o int x = 3 e char nome [] = "jose" não podem ser inicializados dentro do struct, o array nome[] está com tamanho indefinido, o ponteiro struct teste *s não recebeu uma alocação de memória
*/

/*Correção*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct teste{
  int x;
  char nome[20];
};

int main(){
    struct teste *s;
    s = (struct teste*) malloc(sizeof(struct teste));
    s->x = 3;
    strcpy(s->nome, "jose");
    printf("%d\n", s->x);
    printf("%s\n", s->nome);
    
    free(s);
    return 0;
}