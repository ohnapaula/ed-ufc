#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10, y = 20, z = 30;
    int *arr[3];

    arr[0] = &x;
    arr[1] = &y;
    arr[2] = &z;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", **(arr + i));
    }
    
    return 0;
}