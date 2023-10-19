#include<stdio.h>
int main()
{
    int minimo = 2;
    int maximo = 200;
    int x = 2; 
    int pares;
    do
    {
        pares = x%2;
        if (pares == 0)
        {
           printf("%d ", x);
        }
        x++;
    } while (x<=maximo && x>=minimo);

    return 0;
}
