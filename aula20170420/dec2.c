#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int numero1;
    int numero2;
    int numero3;
    printf("Entre com um numero: ");
    scanf("%d",&numero1);
    if(numero1>=0)
    {
        numero2 = rand()%10;
        numero3 = numero1 + numero2;
        if(numero3%2 == 0)
        {
            printf("\nO numero digitado e: %d",numero1);
            printf("\nO numero sorteado e: %d",numero2);
            printf("\nA soma dos numeros e: %d",numero3);
            printf("\nO reultado e par!\n");
        }
        else
            {
            printf("\nO numero digitado e: %d",numero1);
            printf("\nO numero sorteado e: %d",numero2);
            printf("\nA soma dos numeros e: %d",numero3);
            printf("\nO reultado e impar!\n");
            }

    }
    else
        printf("Digite um numero valido!\n");
    return 0;
}
