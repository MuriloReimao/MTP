#include <stdio.h>
#include <stdlib.h>

void pares(int num)
{
    int i;
    printf("\nNumeros pares: ");
    for(i = 1; i <= num; i++)
        if(i % 2 == 0)
           printf("%d ", i);
}

void impares(int num)
{
    int i;
    printf("\nNumeros impares: ");
    for(i = 1; i <= num; i++)
        if(i % 2 == 1)
           printf("%d ", i);
}

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    pares(num);
    printf("\n");
    impares(num);

    return EXIT_SUCCESS;
}
