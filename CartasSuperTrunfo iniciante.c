#include <stdio.h>

int main() {
    
    // info da Carta 1
    char codigo1[5];
    int populacao1;
    float area1;
    double pib1;
    int pontos1;

    // info da Carta 2
    char codigo2[5];
    int populacao2;
    float area2;
    double pib2;
    int pontos2;

    // info da Carta 3
    char codigo3[5];
    int populacao3;
    float area3;
    double pib3;
    int pontos3;

    // info da Carta 4
    char codigo4[5];
    int populacao4;
    float area4;
    double pib4;
    int pontos4;

    printf("   Cadastro de Cartas - Super Trunfo Paises \n");
    printf("Por favor insira os dados para as 4 cidades.\n");

    // Seção de Cadastro

    // CARTA 1
    printf("Carta 1\n");
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area : ");
    scanf("%f", &area1);
    printf("Digite o PIB : ");
    scanf("%lf", &pib1);
    printf("Digite o No. de Pontos Turisticos: ");
    scanf("%d", &pontos1);
    printf("\n");

    // CARTA 2
    printf("Carta 2\n");
    printf("Digite o codigo (ex: A02): ");
    scanf("%s", codigo2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area : ");
    scanf("%f", &area2);
    printf("Digite o PIB : ");
    scanf("%lf", &pib2);
    printf("Digite o No. de Pontos Turisticos: ");
    scanf("%d", &pontos2);
    printf("\n");

    // CARTA 3
    printf("Carta 3 \n");
    printf("Digite o codigo (ex: A03): ");
    scanf("%s", codigo3);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao3);
    printf("Digite a Area : ");
    scanf("%f", &area3);
    printf("Digite o PIB : ");
    scanf("%lf", &pib3);
    printf("Digite o No. de Pontos Turisticos: ");
    scanf("%d", &pontos3);
    printf("\n");

    // CARTA 4
    printf("Carta 4 \n");
    printf("Digite o codigo (ex: A04): ");
    scanf("%s", codigo4);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao4);
    printf("Digite a Area : ");
    scanf("%f", &area4);
    printf("Digite o PIB : ");
    scanf("%lf", &pib4);
    printf("Digite o No. de Pontos Turisticos: ");
    scanf("%d", &pontos4);
    printf("\n");


    // Exibição 
    printf("       Relatorio de Cartas Cadastradas      \n");

    //  Carta 1
    printf("Carta Codigo: %s\n", codigo1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2lf\n", pib1);
    printf("Pontos Turisticos:  %d\n", pontos1);
    printf("--------------------------------\n\n");

    // Carta 2
    printf("Carta Codigo: %s\n", codigo2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area:  %.2f km2\n", area2);
    printf("PIB:   R$ %.2lf\n", pib2);
    printf("Pontos Turisticos:  %d\n", pontos2);
    printf("--------------------------------\n\n");

    // Carta 3
    printf("Carta Codigo: %s\n", codigo3);
    printf("Populacao:  %d habitantes\n", populacao3);
    printf("Area:  %.2f km2\n", area3);
    printf("PIB:   R$ %.2lf\n", pib3);
    printf("Pontos Turisticos:  %d\n", pontos3);
    printf("--------------------------------\n\n");

    // Carta 4
    printf("Carta Codigo: %s\n", codigo4);
    printf("Populacao:  %d habitantes\n", populacao4);
    printf("Area:  %.2f km2\n", area4);
    printf("PIB:  R$ %.2lf\n", pib4);
    printf("Pontos Turisticos:  %d\n", pontos4);
    printf("--------------------------------\n\n");

    return 0;
}