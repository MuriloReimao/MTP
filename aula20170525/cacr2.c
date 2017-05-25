#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void delta()
{
    float a, b, c, d;
    d = pow(b,2) - 4*a*c;
}

int main()
{
    float a, b, c, d, raiz1, raiz2, raiz3, i = i;
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
    delta(d);
    if(d > 0)
    {
        raiz1 = (-b + sqrt(d))/2*a;
        printf(" Raiz 1 = %f", raiz1);
        raiz2 = (-b - sqrt(d))/2*a;
        printf(" Raiz 2 = %f", raiz2);
    }
    if(d = 0)
    {
        raiz3 = -b/2*a;
        printf("A raiz e: %f", raiz3);
    }
    if(d < 0)
        printf("Nao possui raizes reais!");

    return EXIT_SUCCESS;
}
