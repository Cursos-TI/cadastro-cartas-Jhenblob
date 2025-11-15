#include <stdio.h>

int main() {
      
  // info da Carta 1
    char codigo1[5];
    int populacao1;
    float area1;
    double pib1;
    int pontos1;

  // CARTA 1
    printf("--- Carta 1 ---\n");
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area:  ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%lf", &pib1);
    printf("Digite o No. de Pontos Turisticos: ");
    scanf("%d", &pontos1);
    printf("\n");// Área para entrada de dados

   // Exibição 
    printf("       Relatorio de Cartas Cadastradas      \n");

    //  Carta 1
    printf("--- Carta Codigo: %s ---\n", codigo1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2lf\n", pib1);
    printf("Pontos Turisticos:  %d\n", pontos1);
    printf("--------------------------------\n\n");


return 0;
} 
