#include <stdio.h>

void safeFlush () {
    char c;
    while((c= getchar()) != EOF && c!= '\n');
}

int main(){
    float A;
    float B;
    float C;
    float D;
    float E;
    float media;
    printf("Entre a nota A: ");
    scanf("%f",&A);
    safeFlush();
    printf("Entre a nota B: ");
    scanf("%f",&B);
    safeFlush();
    printf("Entre a nota C: ");
    scanf("%f",&C);
    safeFlush();
    printf("Entre a nota D: ");
    scanf("%f",&D);
    safeFlush();
    printf("Entre a nota E: ");
    scanf("%f",&E);
    safeFlush();
    media = (2*A+2*B+2*C+3*D+5*E)/14;
    printf("A media das notas e: %f",media);
    return 0;
}
