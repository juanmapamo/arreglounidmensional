#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
    srand (time (NULL));
    int vector1[20];

    for (int i = 0; i < 20; i++)
    {
        vector1[i]=rand()%10 + 1;
    }
    int max=0;
    for (int i = 0; i < 20; i++)
    {
        printf("%d,  ", vector1[i]);
        if (vector1[i] > max)
        {
            max = vector1[i];
        }   
    }
    printf("El mayor numero es %d\n", max);
    for (int i = 0; i < 20; i++)
    {
        if (max == vector1[i])
        {
            printf("El mayor esta en posiciones %d\n", i+1);
        }
        
    }
    
    return 0;
}