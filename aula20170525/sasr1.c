#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void responde()
{
    int idfrase = rand()%9;
    switch(idfrase)
    {
    case 0: printf("Tudo bem?\n");
        break;
    case 1: printf("OK\n");
        break;
    case 2: printf("LOL!\n");
        break;
    case 3: printf("Que legal\n");
        break;
    case 4: printf("que chato\n");
        break;
    case 5: printf("Fale mais sobre isso\n");
        break;
    case 6: printf("Sobre o que quer falar\n");
        break;
    case 7: printf("Eu nao acho...\n");
        break;
    case 8: printf("Ta bom, eu aceito.\n");
        break;
    }
}

int main ()
{
    srand(time(NULL));
    char frase[256];
    printf("Bom dia, quero conversar...\n");
    do
    {
        fgets(frase,256,stdin);
        responde();
    }while(frase[0] != '\n');
    printf("Tchau, foi um prazer! :-D");

    return EXIT_SUCCESS;
}
