#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    unsigned int x = 0xFACA8421;
    unsigned char *p; //byte
    printf("Variavel: %X\n", x);
    printf("Endereco: %p | Conteudo: %u\n", &x, x); //sizeof retorna tamanho em bytes
    p = (unsigned char *) &x; // static_cast
    for (i = 0; i < sizeof(x); i++)
        printf("Em: %p | Contem: %u ou %X\n", p + i, p[i], p[i]);

    return EXIT_SUCCESS;
}
