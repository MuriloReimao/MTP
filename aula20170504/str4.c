#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NCHAR 256

int main ()
{
    int i, op;
    char frase[NCHAR];
    printf("Digite uma frase: \n");
    fgets(frase, NCHAR, stdin);
    printf("Digite 1 para frase em maiusculo ou 2 para minusculo: ");
    scanf("%d", &op);
    if (op == 1)
    {
        for(i = 0; i < NCHAR; i++)
            frase[i] = toupper(frase[i]);
        for(i = 0; i < NCHAR; i++)
        {
            if(frase[i] == 'A')
                frase[i] = '4';
            if(frase[i] == 'E')
                frase[i] = '3';
            if(frase[i] == 'I')
                frase[i] = '1';
            if(frase[i] == 'O')
                frase[i] = '0';
            if(frase[i] == 'S')
                frase[i] = '5';
            if(frase[i] == 'G')
                frase[i] = '6';
        }
    }
    else
    {
        if (op == 2)
        {
           for(i = 0; i < NCHAR; i++)
                frase[i] = tolower(frase[i]);
            for(i = 0; i < NCHAR; i++)
            {
                if(frase[i] == 'a')
                    frase[i] = '4';
                if(frase[i] == 'e')
                    frase[i] = '3';
                if(frase[i] == 'i')
                    frase[i] = '1';
                if(frase[i] == 'o')
                    frase[i] = '0';
                if(frase[i] == 's')
                    frase[i] = '5';
                if(frase[i] == 'g')
                    frase[i] = '9';
            }
        }
        else
        {
           printf("Digite uma opcao valida!");
        }
    }
    printf("A frase ficou: \"%s\"\n", frase);
    return 0;
}
