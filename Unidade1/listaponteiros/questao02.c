#include <stdio.h>

int main() {

    int i=5, *p;
    p = &i;
    printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
    /*
     * p = 4094
     * p+1 = 4096
     * *p+2 = 5 + 2 = 7
     * **&p = 5
     * 3**p 3 * 5 = 15 
     * **&p+4 = 5 + 4 = 9 
     */ 
    return 0;
}