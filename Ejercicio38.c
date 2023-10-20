// LEER UN NUMERO ENTERO Y MOSTRAR EN PANTALLA SU TABLA DE MULTIPLICAR
#include <stdio.h>

int main()
{
    int numero = 10;
    for (int i = 1; i <= numero; i++)
    {
        for (int j = 0; j <= numero; j++)
        {
            printf("%2d *%2d=%2d   ", i, j, i * j); // El %2d hace que haya un doble espacio de caracteres para crear unifromidad
        }
        printf("\n\n");
    }

    return 0;
}
