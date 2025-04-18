#include <stdio.h>

int main() {
 
char carta1[50];
char estado1 [50];
char codigo1 [50];
char nome_da_cidade1 [50];
int populacao1, pontos_turisticos1;
float area1, pib1;

char carta2[50];
char estado2 [50];
char codigo2 [50];
char nome_da_cidade2 [50];
int populacao2, pontos_turisticos2;
float area2, pib2;

printf("Carta 1:\n");

printf("Estado:\n");
scanf("%s", estado1);

printf("Código:\n");
scanf("%s", &codigo1);

printf("Nome da cidade:\n");
scanf("%s", &nome_da_cidade1);

printf("População:\n");
scanf("%d", &populacao1);

printf("Número de pontos turísticos:\n");
scanf("%d", &pontos_turisticos1);

printf("Área: (em km²)\n");
scanf("%f", &area1);

printf("PIB:(em bilhões)\n");
scanf("%f", &pib1);



printf("Carta 2:\n");

printf("Estado:\n");
scanf("%s", estado2);

printf("Código:\n");
scanf("%s", &codigo2);

printf("Nome da cidade:\n");
scanf("%s", &nome_da_cidade2);

printf("População:\n");
scanf("%d", &populacao2);

printf("Número de pontos turísticos:\n");
scanf("%d", &pontos_turisticos2);

printf("Área: (em km²)\n");
scanf("%f", &area2);

printf("PIB:(em bilhões)\n");
scanf("%f", &pib2);

printf("Carta 1: %s\n", carta1);
printf("Estado: %s\n", estado1);
printf("Código:%s\n", codigo1);
printf("Nome da cidade: %s\n", nome_da_cidade1);
printf("Populacao: %d\n", populacao1);
printf("Pontos turisticos: %d\n", pontos_turisticos1);
printf("Area: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("\n");
printf("Carta 2: %s\n", carta2);
printf("Estado: %s\n", estado2);
printf("Código:%s\n", codigo2);
printf("Nome da cidade: %s\n", nome_da_cidade2);
printf("Populacao: %d\n", populacao2);
printf("Pontos turisticos: %d\n", pontos_turisticos2);
printf("Area: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
    
return 0;
}