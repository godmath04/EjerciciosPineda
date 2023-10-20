// LEER UN NUMERO ENTERO Y MOSTRAR EN PANTALLA SU TABLA DE MULTIPLICAR
#include <stdio.h>

int main()
{
    int numero = 10;
    // Titulo de las tablas
    for (int i = 0; i <= numero; i++)
    {
        printf("%2d |", i);
    }
    printf("\n\n");

    // Bucle de multiplicacion que crea el contenido de la tabla
    for (int i = 1; i <= numero; i++)
    {
        for (int j = 1; j <= numero; j++)
        {
            printf("%2d |", i*j); // El %2d hace que haya un doble espacio de caracteres para crear unifromidad
        }
        printf("\n\n");
    }

    return 0;
}
