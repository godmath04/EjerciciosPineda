// LEER DOS NUMEROS ENTEROS Y OBTENER CUAL TIENE LA MAYOR CANTIDAD DE PRIMOS
#include <stdio.h>
#include <stdbool.h>

int num1, num2;
// FUNCION QUE VERIFICA SI UN NUMERO ES PRIMO RETORNANDO UN 1 O 0

bool esPrimo(int num1)
{
    int u = 0;
    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0)
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
    int x = 10;
    if (esPrimo(x))
    {
        printf("%d es primo.\n", x);
    }
    else
    {
        printf("%d no es primo.\n", x);
    }
    return 0;
}
