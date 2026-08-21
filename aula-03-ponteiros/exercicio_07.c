#include <stdio.h>

int soma(int *arr, int n)
{
    int resultado = 0;

    for (int i = 0; i < n; i++)
    {
        resultado += *(arr + i);
    }

    return resultado;
    
}

int main(int argc, char const *argv[])
{
    int arr[5] = {10, 20, 30, 40, 50};
    int soma_arr = soma(arr, 5);

    printf("A soma de todos os elementos do array é %d\n", soma_arr);

    return 0;
}
