/* Francisco Colín Ulises 
Práctica 8, ejercicio 2*/

#include <stdio.h>
int main()
{
     /* Al igual que en la estructura if-else, 0 -> falso y diferente de 0 -> verdadero.
     El siguiente es un ciclo infinito porque la condición siempre es verdadera.
     Así mismo, debido a que el ciclo consta de una sola línea, las llaves { } son
     opcionales.*/
    
     while (100)
     {
     printf("Ciclo infinito.\nPara terminar el ciclo presione ctrl + c.\n");
     }
 return 0;
}
