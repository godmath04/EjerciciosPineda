// LEER UN NUMERO ENTERO Y MOSTRAR EN PANTALLA SU TABLA DE MULTIPLICAR
#include <stdio.h>

int main()
{
    int numero = 10;
    int multiplicacion;
    for (int i = 1; i <= numero; i++)
    {
        multiplicacion = i * numero;
        printf("%d * %d = %d ", numero, i, multiplicacion);
    }

    return 0;
}
