#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Início do código do exercício 1
    int *p, x = 10;
    p = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    // Fim do código do exercício 1

    *p = 25;
    printf("Valor de x após modificação por desreferência: %d\n", x);

    // CONFIRMAÇÃO: O valor de x mudou para 25.
    return 0;
}
