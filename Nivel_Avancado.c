#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
#define num_estados 8
#define num_cidades 4
//estrutura que representa cada cidade
struct Cidade{
    char codigo[4];         //código da cidade
    char nome[50];          //nome da cidade
    int populacao;          //população da cidade
    float area;             //área da cidade em km²
    float pib;              //PIB da cidade em bilhões
    int pontos_turisticos;  //Número de pontos turisticos
    float densidade_populacional;
    float PIB_per_capita;

};
int main() {
    struct Cidade cidades[num_estados * num_cidades];
    char estado_letras[num_estados]={'A','B','C','D','E','F','G','H'};
      int i, j;

    printf("Cadastro de Cidades - Super Trunfo Países\n");
  
    //
    // Entrada de dados
    for (i = 0; i < num_estados; i++) {
        for (j = 0; j < num_cidades; j++) {
            int index = i * num_cidades + j;
            sprintf(cidades[index].codigo, "%c%02d", estado_letras[i], j + 1);

            printf("\nDigite as informações para a cidade %s:\n", cidades[index].codigo);
            printf("Nome da cidade: ");
            scanf(" %[^\n]s", cidades[index].nome);  // Lê o nome da cidade com espaços
            printf("População: ");
            scanf("%d", &cidades[index].populacao);
            printf("Área (km²): ");
            scanf("%f", &cidades[index].area);
            cidades[index].densidade_populacional = cidades[index].populacao/cidades[index].area;
            printf("PIB (bilhões): ");
            scanf("%f", &cidades[index].pib);
            cidades[index].PIB_per_capita = cidades[index].pib/cidades[index].populacao;
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[index].pontos_turisticos);
        }
    }

    // Exibição dos dados
    printf("\n--- Cartas Cadastradas ---\n");
    for (i = 0; i < num_estados * num_cidades; i++) {
        printf("\nCidade %s - %s:\n", cidades[i].codigo, cidades[i].nome);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("Densidade Populacional: %.2f hab./km²\n", cidades[i].densidade_populacional);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("PIB per capita: %.2f\n", cidades[i].PIB_per_capita);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
        
    }

    return 0;
}
