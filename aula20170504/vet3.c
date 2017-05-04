#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, produto = 1;
    int i, j, k;
    int vet[10];
    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vet[i]);
        printf("\n");
        fflush(stdin);
    }
    for(j = 0; j < 10; j++)
        soma = soma + vet[j];
    for(k = 0; k < 10; k++)
        produto = produto*vet[k];
    printf("A soma dos numeros e: %d", soma);
    printf("\nO produto dos numeros e: %d", produto);
    return 0;
}
