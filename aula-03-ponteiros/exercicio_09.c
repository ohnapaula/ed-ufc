#include <stdio.h>

void inverter_array(int *arr, int n)
{
    int *inicio = &arr[0];
    int *fim = &arr[n - 1];
    int temp = 0;

    while (inicio < fim)
    {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {2, 4, 6, 8, 10};
    inverter_array(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(arr + i));
    }
    

    return 0;
}