/* Francisco Colín Ulises 
Práctica 8, ejercicio extra 1*/

#include <stdio.h>
int main()

{
    int N, M, R;
    
    do
    {
        printf("Ingrese el valor de N: ");
        scanf("%d", &N);
        printf("Ingrese el valor de M: ");
        scanf("%d", &M);
    }
    while (N<M || N<0 || M<0);
    
    R = N % M; 

    while (R != 0)
    {
        N = M;
        M = R;
        R = N % M;
    }
    printf("\nEl MCD de ambos numeros es: %d", M);
    return 0;
}
