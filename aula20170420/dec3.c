#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int i, dado1, dado2, dado3, soma;
    printf("Digite 1 para sortear os numeros: ");
    scanf("%d",&i);
    if(i == 1)
    {
        dado1 = rand()%6 + 1;
        dado2 = rand()%6 + 1;
        dado3 = rand()%6 + 1;
        soma = dado1 + dado2 + dado3;
        printf("\nNumero do dado 1: %d",dado1);
        printf("\nNumero do dado 2: %d",dado2);
        printf("\nNumero do dado 3: %d",dado3);
        printf("\nA soma dos numeros e: %d", soma);
        if (soma == 7 || soma == 11)
            printf("\nVoce venceu!!\n");
        else
            printf("\nVoce perdeu!!\n");
    }
    else
        return 0;
    return 0;
}
