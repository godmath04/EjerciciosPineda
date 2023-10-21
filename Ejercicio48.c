// Utilizando ciclos anidados generar las siguientes parejas de enteros
#include <stdio.h>
int main()
{
    int num1;
    int num2;

    // PARA OBTENER EL RESULTADO SE DEBE TRABAJAR CON NUMEROS PARES E IMPARES POR SEPARADO
    // 
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0) // OBTIENE LOS NUMEROS PARES DEL 1 AL 9
        {
            num2 = i / 2 + 1;
            printf("%d %d\n", i, num2); 
        }
        else // OBTIENE LOS NUMEROS IMPARES DEL 1 AL 9
        {
            num2 = i / 2 + 1;
            printf("%d %d\n", i, num2);
        }
    }
    printf("----------\n");
}
