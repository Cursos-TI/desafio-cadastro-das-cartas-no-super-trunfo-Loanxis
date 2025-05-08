#include <stdio.h>

int main() {
    // Carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade;
    float pib3;

    // Carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib4;

    // Entrada de dados - Carta 1
    printf("Carta 1 - Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos1);

    // Entrada de dados - Carta 2
    printf("\nCarta 2 - Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    // Calculos
    densidade = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib3 = pib1 / populacao1;
    pib4 = pib2 / populacao2;

    // Impressão - Carta 1
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade: %f\n", densidade);
    printf("PIB per capita: %f\n", pib3);

    // Impressão - Carta 2
    printf("\n--- Informações da Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade: %f\n", densidade2);
    printf("PIB per capita: %f\n", pib4);

    return 0;
}
