#include <stdio.h>

int main() {
    //Variáveis da Carta 1

    char estado1;
    char codigo1[6];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    float densidade_populacional1;
    float pib_per_capita1;
    int pontos_turisticos1;

    //Variáveis da Carta 2

    char estado2;
    char codigo2[6];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    float densidade_populacional2;
    float pib_per_capita2;
    int pontos_turisticos2;


    printf("\nCARTA 1 - Digite a letra do seu estado: \n");
    scanf("%c", &estado1);

    printf("\nCARTA 1 - Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("\nCARTA 1 - Digite o nome da sua cidade: \n");
    scanf("%s", cidade1);

    printf("\nCARTA 1 - Digite a população: \n");
    scanf("%d", &populacao1);

    printf("\nCARTA 1 - Digite a área: \n");
    scanf(" %f", &area1);

    printf("\nCARTA 1 - Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("\nCARTA 1 - Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);




    printf("\nCARTA 2 - Digite a letra do seu estado: \n");
    scanf(" %c", &estado2);

    printf("\nCARTA 2 - Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("\nCARTA 2 - Digite o nome da sua cidade: \n");
    scanf("%s", cidade2);

    printf("\nCARTA 2 - Digite a população: \n");
    scanf("%d", &populacao2);

    printf("\nCARTA 2 - Digite a área: \n");
    scanf("%f", &area2);

    printf("\nCARTA 2 - Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("\nCARTA 2 - Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n\nCARTA 1: \n\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %.2d\nÁrea: %.2fkm²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPib per Capita: R$%.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1);
    printf("\n\nCARTA 2: \n\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %.2d\nÁrea: %.2fkm²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPib per Capita: R$%.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2);






} 