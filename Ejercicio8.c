#include <stdio.h>

// EL PROGRAMA DEBE MOSTRAR LOS NUMEROS PARES ENTRE 20 Y 200
int main()
{
    int minimo = 20;
    int maximo = 200;
    int x = 20; 
    int pares;
    printf("EL PROGRAMA MUESTRA LOS NUMEROS PARES ENTRE 20 Y 200: \n");
    // La x recorre todos los numeros obteniendo los pares
    do
    {
        pares = x % 2;
        if (pares == 0)
        {
            printf("%d ", x);
        }
        x++;
    } while (x <= maximo && x >= minimo); // Se realiza mientras nuestra x este entre el minimo y el maximo

    return 0;
}
