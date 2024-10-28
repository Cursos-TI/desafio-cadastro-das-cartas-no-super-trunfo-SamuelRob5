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
    float densidade_populacional; // densidade populacional
    float PIB_per_capita;   // pib per capita
    float superpoder;       // superpoder

};
int main() {
    struct Cidade cidades[num_estados * num_cidades];
    char estado_letras[num_estados]={'A','B','C','D','E','F','G','H'};
      int i, j , vencedor[7]={0,0,0,0,0,0,0}, carta1 , carta2;

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
            cidades[index].densidade_populacional = (float)cidades[index].populacao/cidades[index].area;// calculo da densidade populacional
            printf("PIB (bilhões): ");
            scanf("%f", &cidades[index].pib);
            cidades[index].PIB_per_capita = cidades[index].pib/cidades[index].populacao; // calculo do pib per capita
            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[index].pontos_turisticos);
            //calculo do superpoder durante a coleta de dados 
            cidades[index].superpoder=cidades[index].populacao+cidades[index].area+cidades[index].densidade_populacional;
            cidades[index].superpoder=cidades[index].superpoder+cidades[index].pib+cidades[index].PIB_per_capita;
            cidades[index].superpoder=cidades[index].superpoder+cidades[index].pontos_turisticos;
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
    while(1){
    // Solicitar ao usuário que escolha duas cartas para comparação
    printf("\nEscolha duas cartas para comparar (digite os números de 0 a %d):\n", num_estados * num_cidades - 1);
    printf("Carta 1: ");
    scanf("%d", &carta1);
    printf("Carta 2: ");
    scanf("%d", &carta2);

    // Verifica se os índices inseridos são válidos
    if (carta1 < 0 || carta1 >= num_estados * num_cidades || carta2 < 0 || carta2 >= num_estados * num_cidades) {
        printf("Índices de cartas inválidos.\n");
        return 1;
    }

    // Comparações e exibição de resultados
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: %s\n", 
        cidades[carta1].populacao > cidades[carta2].populacao ? cidades[carta1].nome : cidades[carta2].nome);

    printf("Área: %s\n", 
        cidades[carta1].area > cidades[carta2].area ? cidades[carta1].nome : cidades[carta2].nome);

    printf("Densidade Populacional: %s\n", 
        cidades[carta1].densidade_populacional < cidades[carta2].densidade_populacional ? cidades[carta1].nome : cidades[carta2].nome);

    printf("PIB: %s\n", 
        cidades[carta1].pib > cidades[carta2].pib ? cidades[carta1].nome : cidades[carta2].nome);

    printf("PIB per Capita: %s\n", 
        cidades[carta1].PIB_per_capita > cidades[carta2].PIB_per_capita ? cidades[carta1].nome : cidades[carta2].nome);

    printf("Pontos Turísticos: %s\n", 
        cidades[carta1].pontos_turisticos > cidades[carta2].pontos_turisticos ? cidades[carta1].nome : cidades[carta2].nome);

    printf("Super Poder: %s\n", 
        cidades[carta1].superpoder > cidades[carta2].superpoder ? cidades[carta1].nome : cidades[carta2].nome);

    return 0;
    }
}
