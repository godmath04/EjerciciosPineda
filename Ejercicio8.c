#include<stdio.h>

// EL PROGRAMA DEBE MOSTRAR LOS NUMEROS PARES ENTRE2 Y 200 
int main()
{
    int minimo = 2;
    int maximo = 200;
    int x = 2; 
    int pares;
    printf("EL PROGRAMA MUESTRA LOS NUMEROS PARES ENTRE 20 Y 200: \n");
    do
    {
        pares = x%2;
        if (pares == 0)
        {
           printf("%d ", x);
        }
        x++;
    } while (x<=maximo && x>=minimo);

    return 0;
}
