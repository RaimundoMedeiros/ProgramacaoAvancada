/*5. Um programador construiu o seguinte código e esperava na saída o texto gostinho, mas não
obteve essa saída. Justifique o porquê de não ter obtido o resultado esperado
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void funcao(char** str){
  str++;
}
int main(){
  char *str = (void *)malloc(50*sizeof(char));
  strcpy(str, "Agostinho");
  funcao(&str);
  puts(str);
  free(str);
  return 0;
}

// A função não altera o valor do ponteiro str pq ela apenas incrementa a cópia local do ponteiro str, sem alterar o ponteiro original no main, seria necessário desreferenciar o ponteiro duplo dentro da função para que possa alterar o valor do ponteiro original.