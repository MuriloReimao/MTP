#include <stdio.h>

void safeFlush(){
    char c;
    while ((c = getchar()) != EOF && c != '\n');
}

int main () {
    int i, B, P, num;
    printf("Digite um numero: ");
    scanf("%d",&B);
    safeFlush ();
    printf("\nDigite a potencia para a base: ");
    scanf("%d",&P);
    i = 1;
    num = 1;
    do
    {
        num = num*B;
        i++;
    }while(i<=P);
    printf("\nA o resultado da potenciacao e: %d",num);
    return 0;
}
