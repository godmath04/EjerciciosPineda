/* LEER DOS NUMEROS ENTEROS Y MOSTRAR TODOS LOS NUMEROS MULTIPLOS DE 5
COMPRENDIDOS ENTRE EL MAYOR Y EL MANO*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int MULTIPLO = 5;
    int x;
    int menor, mayor;

    printf("PROGRAMA QUE LEE DOS NUMEROS Y MUESTRA LOS MULTIPLOS DE 5 ENTRE ELLOS: \n");
    printf("Ingrese dos numeros para obtener los multiplos de 5 entre ellos: \n");
    scanf("%d", &num1);
    printf("\n");
    scanf("%d", &num2);

    printf("Sus numeros son %d y %d", num1, num2); //Se lee los datos y almacena en num1 y num2
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
    

    return 0;
}
