// LEER UN NUMERO ENTERO Y MOSTRAR EN PANTALLA SU TABLA DE MULTIPLICAR
#include <stdio.h>

int main()
{
    int numero = 10;
    for (int i = 1; i <= numero; i++)
    {
        for (int j = 0; j <= numero; j++)
        {
           printf("%d * %d = %d ", i, j, i*j);
        }
    }

    return 0;
}
