#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define NCHAR 256

int main()
{
    int i;
    char frase[NCHAR];
    printf("Entre com uma frase: ");
    fgets(frase, NCHAR, stdin);
    frase[strlen(frase)-1] = '\0';
    for(i = 0; i <NCHAR; i++)
        frase[i] = toupper(frase[i]);
    printf("O tamanho da string e: %u\n", strlen(frase));
    if(strncmp(frase,"BOM DIA",7) == 0)
        printf("Bom dia para voce tambem!\n");
    else
        printf("Voce quis dizer: \"%s\"?\n", frase);
    return 0;
}
