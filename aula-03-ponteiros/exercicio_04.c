#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v = 5;
    int *p = &v;
    int **pp = &p;

    printf("%d\n", v);
    printf("%d\n", *p);
    printf("%p\n", pp);

    /*
    EXPLICAÇÃO SOLICITADA NO EXERCÍCIO
    v é uma variável, p é o ponteiro que aponta para v
    e pp é outro ponteiro que aponta para o ponteiro p.
    Logo, ao modificar o valor apontado por *p ou **pp,
    você estará modificando a variável v. 
    */

    **pp = 9;
    printf("Novo valor de v: %d\n", v);

    return 0;
}
