#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];

    for (int i = 0; i < 3; i++)
    {
        printf("Endereço de arr[%d]: %p\n", i, &arr[i]);

        if (i == 2)
        {
            printf("Endereço base arr: %p\n", arr);
            printf("Tamanho de um int: %zu bytes\n", sizeof(i));
        }
    }

    /*
    CONFIRMAÇÃO
    Os endereços entre as posições do vetor diferem em 4 bytes.
    A variável arr, na realidade, é um ponteiro para arr[0].
    */


    return 0;
}
