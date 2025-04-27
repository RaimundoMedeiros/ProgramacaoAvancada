/*(ENADE, 2023) Memory leak, ou vazamento de memória, é um problema que ocorre em
sistemas computacionais quando uma parte da memória, alocada para uma determinada
operação, não é liberada quando se torna desnecessária. Na linguagem C, esse tipo de problema
é quase sempre relacionado ao uso incorreto das funções malloc( ) e free( ). Esse erro de
programação pode levar a falhas no sistema se a memória for completamente consumida. Um
dos trechos abaixo apresenta um vazamento de memória. Identifique-o e justifique sua resposta*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//(A)
void j() {
    void *s;
    s = malloc(50);
    free(s);
}

//(B)
int x() {
    float *a;
    return 0;
  ;
  
}

//(C)
int y (char *data){
  void *s;
  s = malloc(50);
  int size = strlen(data);
  if (size > 50)
    return(-1);
  free(s);
  return 0;

  // O problme aqui é que se o size for maior que 50, o malloc não é liberado causando um possível memory leak.
}

// (D)
int *f(int n) {
    int *num = malloc(sizeof(int) * n);
    return num;
}

int main(void) {
    int *num;
    num = f(10);
    free(num);
    return 0;
}

//(E)
/*void k(int n) {
    char *m = malloc(10);
    char *n = malloc(10); 
    free(m);
    m = n;
    free(n);
}*/