#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int vet[10];
    for(i = 0; i < 10; i++)
    {
        printf("Digite numero natural: ");
        scanf("%d", &vet[i]);
        printf("\n");
        fflush(stdin);
    }
    for(j = 9; j >= 0; j--)
    {
        printf("%d", vet[j]);
    }
    return 0;
}
