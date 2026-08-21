#include <stdio.h>

int *obter_endereco_maior_valor(int *arr, int n)
{
    int maior_valor = *arr;
    int *endereco_maior_valor = arr;

    for (int i = 1; i < n; i++)
    {
        if(*(arr + i) > maior_valor) {
            maior_valor = *(arr + i);
            endereco_maior_valor = (arr + i);
        }
    }

    return endereco_maior_valor;
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {10, 50, 20, 30, 40};

    int *endereco_maior_valor = obter_endereco_maior_valor(arr, 5);

    printf("Maior valor: %d\n", *endereco_maior_valor);
    printf("Endereço do maior valor: %p\n", endereco_maior_valor);

    return 0;
}
