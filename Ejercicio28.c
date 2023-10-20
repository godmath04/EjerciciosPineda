// LEER DOS NUMEROS ENTEROS Y OBTENER CUAL TIENE LA MAYOR CANTIDAD DE PRIMOS
#include <stdio.h>
#include <stdbool.h> // PERMITE EL USO DE BOOL Y EL RETURN DE UN 1 O UN 0

int primo;
int num1, num2;

// FUNCION QUE VERIFICA SI UN NUMERO ES PRIMO RETORNANDO UN 1 al ser verdadero o 0 al contrario
bool esPrimo(int primo)
{
    int u = 0;
    for (int i = 1; i <= primo; i++)
    {
        if (primo % i == 0)
        {
            u++;
        }
    }
    if (u == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num1 = 15;
    int num2 = 7;
    int barrido1 = 0;
    int barrido2 = 0;

    for (int i = 1; i <= num1; i++)
    {
        if (esPrimo(i))
        {
            printf("%d es primo.\n", i);
            barrido1++;
        }
        else
        {
            printf("%d no es primo.\n", i);
        }
    }

    for (int j = 1; j <= num2; j++)
    {
        if (esPrimo(j))
        {
            printf("%d es primo.\n", j);
            barrido2++;
        }
        else
        {
            printf("%d no es primo.\n", j);
        }
    }


    printf("La cantidad de primos es: %d", barrido1);
    printf("La cantidad de primos es: %d", barrido2);
    return 0;
}
