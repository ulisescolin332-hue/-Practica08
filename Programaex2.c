/* Francisco Colín Ulises 
Práctica 8, ejercicio extra 2*/

#include <stdio.h>
#define MAX 10  

int main()
{
    int i=0, arr[MAX], n;   
    
    for (i; i<MAX; i++)
    {
        do
        {
            printf("Ingrese un valor: ");
            scanf("%d", &n);
        }
        while (n % 2 != 0);
        arr[i]=n;
    }
    i=0;
    for (i; i<MAX; i++)
    {
        printf("[%d] ", arr[i]);
    }
    return 0;
}
