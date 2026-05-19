#include <stdio.h>

int main() {
    //Variáveis da Carta 1

    char estado1, codigo1[6], cidade1[30];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    short int pontos_turisticos1;
    //Variáveis da Carta 2

    char estado2, codigo2[6], cidade2[30];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    short int pontos_turisticos2;


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
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);



    printf("\n\nCARTA 1: \n\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %.2d\nÁrea: %.2fkm²\nPIB: %f\nPontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPib per Capita: R$%.2f\nSuper Poder: %.0f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, super_poder1);
    printf("\n\nCARTA 2: \n\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %.2d\nÁrea: %.2fkm²\nPIB: %f\nPontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPib per Capita: R$%.2f\nSuper Poder: %.0f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2, super_poder2);

    printf("\n\n***Comparação de Cartas***:\n\n");


    printf("CARTA 01 VENCE SE FOR 1\n");
    printf("CARTA 02 VENCE SE FOR 0\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade populacinal: %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);











} 