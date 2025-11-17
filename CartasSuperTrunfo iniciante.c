#include <stdio.h>

int main() {
    
    // info da Carta 1
    char estado1;
    char nomeCidade1[50];
    char codigo1[5];
    int populacao1;
    float area1;
    double pib1;
    int pontos1;

    // info da Carta 2
    char estado2;
    char nomeCidade2[50];
    char codigo2[5];
    int populacao2;
    float area2;
    double pib2;
    int pontos2;

    printf("   Cadastro de Cartas - Super Trunfo Paises \n");
    printf("Por favor insira os dados para as 2 cidades.\n");

    // Seção de Cadastro

    // CARTA 1
    printf("Carta 1\n");
    printf("Estado (uma letra, ex: A): ");
    scanf(" %c", &estado1);
    printf("Nome da Cidade (ex: Sao Paulo): ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2) : ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes)   : ");
    scanf("%lf", &pib1);
    printf("Digite o No. de Pontos Turisticos: ");
    scanf("%d", &pontos1);
    printf("\n");

    // CARTA 2
    printf("Carta 2\n");
    printf("Estado (uma letra, ex: B): ");
    scanf(" %c", &estado2); 
    printf("Codigo da Carta (ex: B02): "); 
    scanf("%s", codigo2); 
    printf("Nome da Cidade (ex: Rio de Janeiro): "); 
    scanf(" %[^\n]", nomeCidade2); 
    printf("Digite a Populacao: "); 
    scanf("%d", &populacao2); 
    printf("Digite a Area (em km2) : "); 
    scanf("%f", &area2); 
    printf("Digite o PIB (em bilhoes) : "); 
    scanf("%lf", &pib2); 
    printf("Digite o No. de Pontos Turisticos: "); 
    scanf("%d", &pontos2); 
    printf("\n"); 


    // Exibição 
    printf("       Relatorio de Cartas Cadastradas      \n");

    //  Carta 1
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("--------------------------------\n\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("--------------------------------\n");

    return 0;
}