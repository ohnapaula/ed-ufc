#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
            printf("Usando (p + i)\n");
        printf("%d\n", *(p + i));
    }

    for (int j = 0; j < 5; j++)
    {
        if (j == 0)
            printf("Usando p++\n");
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
