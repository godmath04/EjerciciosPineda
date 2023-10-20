/* LEER DOS NUMEROS ENTEROS Y MOSTRAR TODOS LOS NUMEROS MULTIPLOS DE 5
COMPRENDIDOS ENTRE EL MAYOR Y EL MANO*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int x;
    int menor, mayor;

    printf("PROGRAMA QUE LEE DOS NUMEROS Y MUESTRA LOS MULTIPLOS DE 5 ENTRE ELLOS: \n");
    printf("Ingrese dos numeros separados por un espacio para obtener los multiplos de 5 entre ellos: \n");
    scanf("%d %d", &num1, &num2);
    printf("\n");

    printf("Sus numeros son %d y %d", num1, num2); // Se lee los datos y almacena en num1 y num2
    printf("\n");
    printf("Los multiplos de 5 son: \n");

    if (num1 < num2) // Se verifica cual numero ingresado es el menor, mayor y se les asigna una variable
    {
        menor = num1;
        mayor = num2;
    }
    else
    {
        menor = num2;
        mayor = num1;
    }
    x = menor; // Hace un recorrido desde el menor numero obteniendo todos los valores multiplos
    do
    {
        if (x % 5 == 0)
        {
            printf("%d ", x);
        }
        x++;
    } while (x >= menor && x <= mayor); //La condicion del recorrido de la x 

    return 0;
}
