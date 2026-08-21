#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 3, b = 7, *pa, *pb;

    pa = &a;
    pb = &b;

    //SOLUÇÃO DO EXERCÍCIO USANDO SWAP
    int swapper;
    swapper = *pa;
    *pa = *pb;
    *pb = swapper;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    // OU USANDO ARITMÉTICA, SEM FAZER SWAP
    // *pa = *pa + *pb;
    // *pb = *pa - *pb;
    // *pa = *pa - *pb;
    // printf("Valor de a: %d\n", a);
    // printf("Valor de b: %d\n", b);

    return 0;
}
