#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //Variáveis da Carta 1

    char pais1, codigo1[6], estado1[30];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    short int pontos_turisticos1, escolhaJogador;
    //Variáveis da Carta 2

    char pais2, codigo2[6], estado2[30];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    short int pontos_turisticos2;

    // ***CARTA 1*** //

    printf("\nCARTA 1 - Digite a letra do seu país: \n");
    scanf("%c", &pais1);

    printf("\nCARTA 1 - Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("\nCARTA 1 - Digite o nome do seu estado: \n");
    scanf("%s", estado1);

    printf("\nCARTA 1 - Digite a população: \n");
    scanf("%d", &populacao1);

    printf("\nCARTA 1 - Digite a área: \n");
    scanf(" %f", &area1);

    printf("\nCARTA 1 - Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("\nCARTA 1 - Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

// ***CARTA 2*** //

    printf("\nCARTA 2 - Digite a letra do seu país: \n");
    scanf(" %c", &pais2);

    printf("\nCARTA 2 - Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("\nCARTA 2 - Digite o nome do seu estado: \n");
    scanf("%s", estado2);

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



    printf("\n\nCARTA 1: \n\nPaís: %c\nCódigo: %s\nEstado: %s\nPopulação: %.2d\nÁrea: %.2fkm²\nPIB: %0.f\nPontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPib per Capita: R$%.2f\nSuper Poder: %.0f\n", pais1, codigo1, estado1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, super_poder1);
    printf("\n\nCARTA 2: \n\nPaís: %c\nCódigo: %s\nEstado: %s\nPopulação: %.2d\nÁrea: %.2fkm²\nPIB: %0.f\nPontos Turísticos: %d\nDensidade Populacional: %.2fhab/km²\nPib per Capita: R$%.2f\nSuper Poder: %.0f\n", pais2, codigo2, estado2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2, super_poder2);

    printf("\n\n***Comparação de Cartas***:\n\n");

    switch (escolhaJogador){
        case 1:
        printf("\n***Comparação de População***\n");
            if (populacao1 > populacao2){
                printf("População: Carta 1 Venceu! (%s: %d de Pessoas)\n", pais1, populacao1);
            } else if (populacao1 == populacao2){
                printf("Houve um Empate");
            } else {
                printf("População: Carta 2 Venceu! (%s: %d de Pessoas)\n", pais2, populacao2);
            }
        break;
        case 2:
        printf("\n***Comparação de Área***\n");
            if (area1 > area2){
                printf("\nÁrea: Carta 1 Venceu! (%s: %.2f km²)\n", estado1, area1);
            } else if (area1 == area2){
                printf("Houve um Empate");
            } else {
                printf("\nÁrea: Carta 2 Venceu! (%s: %.2f km²)\n", estado2, area2);
            }
        break;
        case 3:
        printf("\n***Comparação do PIB***\n");
            if (pib1 > pib2){
                printf("\nPIB: Carta 1 Venceu! (%s: %.0f)\n", estado1, pib1);
            } else if (pib1 == pib2){
                printf("Houve um Empate");
            } else { 
                printf("\nPIB: Carta 2 Venceu! (%s: %.0f)\n", estado2, pib2);
            }
        break;
        case 4:
        printf("\n***Comparação de Pontos Turísticos***\n");
            if (pontos_turisticos1 > pontos_turisticos2){
                printf("\nPontos Turísticos: Carta 1 Venceu! (%s: %d)\n", estado1, pontos_turisticos1);
            } else if (pontos_turisticos1 == pontos_turisticos2){
                printf("Houve um Empate");
            } else {
                printf("\nPontos Turísticos: Carta 2 Venceu! (%s: %d)\n", estado2, pontos_turisticos2);
            }
        break;
        case 5:
        printf("\n***Comparação de Densidade Populacional***\n");
            if (densidade_populacional1 < densidade_populacional2){
                printf("\nDensidade Populacional: Carta 1 Venceu! (%s: %.0f)\n", estado1, densidade_populacional1);
            } else if (densidade_populacional1 == densidade_populacional2){
                printf("Houve um Empate");
            } else {
                printf("\nDensidade Populacional: Carta 2 Venceu! (%s: %.0f)\n", estado2, densidade_populacional2);
            }
        break;
        case 6:
        printf("\n***Comparação de Pib per Capita***\n");
            if (pib_per_capita1 > pib_per_capita2){
                printf("\nPib per Capita: Carta 1 Venceu! (%s: %.0f)\n", estado1, pib_per_capita1);
            } else if (pib_per_capita1 == pib_per_capita2){
                printf("Houve um Empate");
            } else {
                printf("\nPib per Capita: Carta 2 Venceu! (%s: %.0f)\n", estado2, pib_per_capita2);
            }
        break;
        default:
        printf("\n***Comparação de Super Poder***\n");
            if (super_poder1 > super_poder2){
                printf("\nSuper Poder: Carta 1 Venceu! (%s: %.0f)\n", estado1, super_poder1);
            } else if (super_poder1 == super_poder2) {
                printf("Houve um Empate");
            } else {
                printf("\nSuper Poder: Carta 2 Venceu! (%s: %.0f)\n", estado2, super_poder2);
            }
        break;
    }








}