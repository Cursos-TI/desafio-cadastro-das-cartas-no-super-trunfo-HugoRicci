#include <stdio.h>

int main() {

char estado[50];
int populacao, pontos_turisticos;
double area, pib;

printf("Estado:\n");
scanf("%s", estado);

printf("População:\n");
scanf("%d", &populacao);

printf("Número de pontos turísticos:\n");
scanf("%d", &pontos_turisticos);

printf("Área:\n");
scanf("%f", &area);

printf("PIB:\n");
scanf("%f", &pib);

printf("Estado: %s\n", estado);
printf("Populacao: %d\n", populacao);
printf("Pontos turisticos: %d\n", pontos_turisticos);
printf("Area: %.2f\n", area);
printf("PIB: %.2f\n", pib);
    
return 0;
}