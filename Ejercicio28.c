// LEER DOS NUMEROS ENTEROS Y OBTENER CUAL TIENE LA MAYOR CANTIDAD DE PRIMOS
#include <stdio.h>
#include <stdbool.h> // PERMITE EL USO DE BOOL Y EL RETURN DE UN 1 O UN 0

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
    int num1;
    int num2;
    int barrido1 = 0;
    int barrido2 = 0;

    // INSTRUCCIONES AL USUARIO
    printf("El programa le mostrara cual de los numeros tiene la mayor cantidad de numeros primos\n");
    printf("Ingrese el primer numero: \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &num2);

    // Recorrido desde 1 hasta el num1 para verificar si los numeros son primos y agregarlos a un contador
    for (int i = 1; i <= num1; i++)
    {
        if (esPrimo(i))
        {
            barrido1++;
        }
    }

    // Recorrido desde 1 hasta el num2 para verificar si los numeros son primos y agregarlos a un contador
    for (int j = 1; j <= num2; j++)
    {
        if (esPrimo(j))
        {
            barrido2++;
        }
    }

    printf("La cantidad de primos de %d es: %d\n", num1, barrido1);
    printf("La cantidad de primos de %d es: %d\n", num2, barrido2);

    // Verificaion del numero que tiene mayor cantidad de primos 
    if (barrido1 == barrido2)
    {
        printf("Ambos tienen el mismo numeros de primos con %d", barrido1);
    }
    else if (barrido1 > barrido2)
    {
        printf("El numero %d tiene mayor cantidad de numeros primos con %d", num1, barrido1);
    }
    else
    {
        printf("El numero %d tiene mayor cantidad de numeros primos con %d", num2, barrido2);
    }

    return 0;
}
