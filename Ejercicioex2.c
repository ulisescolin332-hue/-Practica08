/* Francisco Colín Ulises
Práctica 8, ejercicio extra 2*/

#include <stdio.h>

void main()
{
    int arr[10];
    int n = 0;
    int i = 0;

    for (i; i < 10; i = i + 1)
    {
        do
        {
            printf("Ingrese un valor par: ");
            scanf("%d", &n);
        }
        while (n % 2 != 0);
        arr[i] = n;
    }

    i = 0;

    for (i; i < 10; i = i + 1)
    {
        printf("[%d] ", arr[i]);
    }
}
