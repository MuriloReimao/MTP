#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    float x, y, soma;
    unsigned char *p;
    unsigned char *q;
    unsigned char *r;
    p = (unsigned char *) &x;
    q = (unsigned char *) &y;
    r = (unsigned char *) &soma;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite um numero: ");
    scanf("%f", &y);
    soma = x + y;
    printf("\nEndereco de x (%f): %p\nEnderco de y(%f): %p\nEnderco da soma(%f): %p\n",x, p+i,y , q+i, soma, r+i);

    return EXIT_SUCCESS;
}
