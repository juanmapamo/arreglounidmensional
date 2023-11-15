#include <stdio.h>
int main (void)
{
    int vector1[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingresa el contenido del vector en la posicion %d.\n", i+1);
        scanf ("%d", &vector1[1]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d,  ", vector1 [i]);
    }
    
    return 0;
}