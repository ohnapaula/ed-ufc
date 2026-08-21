#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *p, x = 10;
    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    /*
    EXPLICAÇÃO SOLICITADA NO EXERCÍCIO
    Saída 1: Conteúdo da variável x.
    Saída 2: Endereço da variável x.
    Saída 3: Conteúdo de p, ou seja, endereço da variável x.
    Saída 4: Valor apontado pela referência guardada em p, ou seja, conteúdo de x.
   */
    return 0;
}
