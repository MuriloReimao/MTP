#include <stdio.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}

int main () {
    float base;
    float altura;
    float area;
    printf("Entre a base do paralelogramo: ");
    scanf("%f",base);
    safeFlush();
    printf ("Entre a altura do paralelogramo: ");
    scanf("%f",altura);
    safeFlush();
    area = base*altura;
    printf("A area do paralelogramo e: %f", area);
    return 0;
}
