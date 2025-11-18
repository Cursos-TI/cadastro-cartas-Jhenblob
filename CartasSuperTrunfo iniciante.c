#include <stdio.h>

int main() {
    
    // Info da Carta 1
    char estado1[50];
    char nomeCidade1[50];
    char codigo1[5];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int pontos1;
    float pibpercapta1;
    float densidade1;
    float superpoder1;

    // Info da Carta 2
    char estado2[50];
    char nomeCidade2[50];
    char codigo2[5];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos2;
    float pibpercapta2;
    float densidade2;
    float superpoder2;
    
    // variavel para inverter densidade
    float inversaodensidade1, inversaodensidade2;

    printf("   Cadastro de Cartas - Super Trunfo Paises \n");
    printf("Por favor insira os dados para as 2 cidades.\n");

    // Seção de Cadastro

    // CARTA 1
    printf("Carta 1\n");
    printf("Estado (ex: Sao Paulo): ");
    scanf(" %[^\n]", &estado1);
    printf("Nome da Cidade (ex: Sao Paulo): ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a Area (em km2) : ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes)   : ");
    scanf("%lf", &pib1);
    printf("Digite o No. de Pontos Turisticos: ");
    scanf("%d", &pontos1);
    printf("\n");

    // CARTA 2
    printf("Carta 2\n");
    printf("Estado (ex: Rio de Janeiro): ");
    scanf(" %[^\n]", &estado2); 
    printf("Codigo da Carta (ex: B02): "); 
    scanf("%s", codigo2); 
    printf("Nome da Cidade (ex: Rio de Janeiro): "); 
    scanf(" %[^\n]", nomeCidade2); 
    printf("Digite a Populacao: "); 
    scanf("%lu", &populacao2); 
    printf("Digite a Area (em km2) : "); 
    scanf("%f", &area2); 
    printf("Digite o PIB (em bilhoes) : "); 
    scanf("%lf", &pib2); 
    printf("Digite o No. de Pontos Turisticos: "); 
    scanf("%d", &pontos2); 
    printf("\n"); 

    // calculo de densidade populacional e pib per capita
    densidade1 = (float)populacao1 / area1;
    pibpercapta1 = (pib1 * 1000000000) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibpercapta2 = (pib2 * 1000000000) / populacao2;

    // inversao da densidade populacional para o super poder
    inversaodensidade1 = 1 / densidade1;
    inversaodensidade2 = 1 / densidade2;

    // Calculo do super poder = soma de tudo
    superpoder1 = pibpercapta1 + inversaodensidade1 + (float)pontos1 + (float)populacao1 + pib1 + area1;
    superpoder2 = pibpercapta2 + inversaodensidade2 + (float)pontos2 + (float)populacao2 + pib2 + area2;

    // Exibição 
    printf("       Relatorio de Cartas Cadastradas      \n");

    //  Carta 1
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapta1);
    printf("--------------------------------\n\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapta2);
    printf("--------------------------------\n");
    
    printf(" --- Comparaçao de Cartas ---:\n\n");

     // Comparação de População (Maior vence)
    printf("Atributo: População (Carta1: %lu | Carta2: %lu)\n", populacao1, populacao2);
    if (populacao1 > populacao2) {
        printf("VENCEDOR: Carta 1 (%s)\n\n", nomeCidade1);
    } else {
        printf("VENCEDOR: Carta 2 (%s)\n\n", nomeCidade2);
    }

    // 2Comparação de Área (Maior vence)
    printf("Atributo: Área (Carta1: %.2f | Carta2: %.2f)\n", area1, area2);
    if (area1 > area2) {
        printf("VENCEDOR: Carta 1 (%s)\n\n", nomeCidade1);
    } else {
        printf("VENCEDOR: Carta 2 (%s)\n\n", nomeCidade2);
    }

    // Comparação de PIB (Maior vence)
    printf("Atributo: PIB (Carta1: %.2f | Carta2: %.2f)\n", pib1, pib2);
    if (pib1 > pib2) {
        printf("VENCEDOR: Carta 1 (%s)\n\n", nomeCidade1);
    } else {
        printf("VENCEDOR: Carta 2 (%s)\n\n", nomeCidade2);
    }

    // Comparação de Pontos Turísticos (Maior vence)
    printf("Atributo: Pontos Turísticos (Carta1: %d | Carta2: %d)\n", pontos1, pontos2);
    if (pontos1 > pontos2) {
        printf("VENCEDOR: Carta 1 (%s)\n\n", nomeCidade1);
    } else {
        printf("VENCEDOR: Carta 2 (%s)\n\n", nomeCidade2);
    }   

    // Comparação de Densidade Populacional (Menor vence)
    printf("Atributo: Densidade Populacional (Carta1: %.2f | Carta2: %.2f)\n", densidade1, densidade2);
    if (densidade1 < densidade2) {
        printf("VENCEDOR: Carta 1 (%s)\n\n", nomeCidade1);
    } else {
        printf("VENCEDOR: Carta 2 (%s)\n\n", nomeCidade2);
    }   

    // Comparação de PIB per Capita (Maior vence)
    printf("Atributo: PIB per Capita (Carta1: %.2f | Carta2: %.2f)\n", pibpercapta1, pibpercapta2);
    if (pibpercapta1 > pibpercapta2) {
        printf("VENCEDOR: Carta 1 (%s)\n\n", nomeCidade1);
    } else {
        printf("VENCEDOR: Carta 2 (%s)\n\n", nomeCidade2);
    }   

    // Comparação de Super Poder (Maior vence)
    printf("Atributo: Super Poder (Carta1: %.2f | Carta2: %.2f)\n", superpoder1, superpoder2);
    if (superpoder1 > superpoder2) {
        printf("VENCEDOR: Carta 1 (%s)\n\n", nomeCidade1);
    } else {
        printf("VENCEDOR: Carta 2 (%s)\n\n", nomeCidade2);
    }   


    return 0;
}