// LEER UN NUMERO ENTERO Y MOSTRAR EN PANTALLA SU TABLA DE MULTIPLICAR
#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese el numero para el cual desea realizar la tabla de multiplicar: \n");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Su numero es menor o igual a cero, la tabla se muestra solo para positivos\n");
            printf("Si desea probar con un negativo aplique la ley de signos.\n");
    }
    else
    {

        // Titulo de las tablas
        for (int i = 1; i <= numero; i++)
        {
            printf("%4d |", i);
        }
        printf("\n\n");

        // Bucle de multiplicacion que crea el contenido de la tabla
        for (int i = 1; i <= numero; i++)
        {
            for (int j = 1; j <= numero; j++)
            {
                printf("%4d |", i * j); // El %2d hace que haya un doble espacio de caracteres para crear unifromidad
            }
            printf("\n\n");
        }
    }
    return 0;
}
