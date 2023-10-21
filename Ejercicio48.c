// Utilizando ciclos anidados generar las siguientes parejas de enteros
#include <stdio.h>
int main()
{
    int num1;
    int num2;

    // PRIMERO LOS NUMEROS PARES DE LA COL.IZQUIERDA VAN AVANZADO DE 1 EN 1 CON LOS DE LA COL DERECHA
    // EN OTRAS PALABRAS LA COL DE LA DERECHA ES LA MITAD DE LOS PARES SUMADO 1
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            num2 = i/2 +1;
        printf("%d %d\n", i, num2);
        }
        
    }
    printf("----------\n");
    // POR OTRO LADO CON LOS NUMEROS IMPARES 
    for (int j = 0; j < 10; j++)
    {
        if (j % 2 != 0)
        {
            num2 = j/2 +1 ;
        printf("%d %d\n", j, num2);
        }
        
    }
    return 0;
}
