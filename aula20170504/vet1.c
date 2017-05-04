#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main ()
{
    srand(time(0));
    int i, max;
    int num[i];
    float media;
    printf("Entre com um numero natural maximo: ");
    scanf("%d,", &max);
    for(i = 0; i < N; i++)
        media = 0.0;
    for(i = 0; i < N; i++)
        media += num[i];
    media /= N;
    printf("A media obtida e: %g.\n", media);
    return 0;
}
