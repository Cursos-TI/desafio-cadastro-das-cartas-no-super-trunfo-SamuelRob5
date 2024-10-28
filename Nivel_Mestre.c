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
    float superpoder;

};
int main() {
    struct Cidade cidades[num_estados * num_cidades];
    char estado_letras[num_estados]={'A','B','C','D','E','F','G','H'};
      int i, j , vencedor[7];

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
    
    for (i = 0; i < num_estados * num_cidades - 1; i++) {
        if(cidades[i].populacao > cidades[i+1].populacao ) vencedor[0]=i;

        if(cidades[i].area > cidades[i+1].area )  vencedor[1]=i;

        if(cidades[i].densidade_populacional < cidades[i+1].densidade_populacional )  vencedor[2]=i;

        if(cidades[i].pib > cidades[i+1].pib )  vencedor[3]=i;

        if(cidades[i].PIB_per_capita > cidades[i+1].PIB_per_capita )  vencedor[4]=i;

        if(cidades[i].pontos_turisticos > cidades[i+1].pontos_turisticos )  vencedor[5]=i;
    }

        printf("\n--- Cartas Vencedoras ---\n");

        printf("A Cidade com a maior População é a %s - %s com  %d habitantes \n",cidades[vencedor[0]].codigo, 
        cidades[vencedor[0]].nome , cidades[vencedor[0]].populacao);

        printf("A Cidade com a maior Área é a %s - %s com  Área : %.2f km²\n", cidades[vencedor[1]].codigo, cidades[vencedor[1]].nome 
        , cidades[vencedor[1]].area);

        printf("A Cidade com a maior Densidade Populacional é a %s - %s com : %.2f hab./km²\n", cidades[vencedor[2]].codigo,
         cidades[vencedor[2]].nome , cidades[vencedor[2]].densidade_populacional);

        printf("A Cidade com o maior PIB é a %s - %s com PIB: %.2f bilhões\n", cidades[vencedor[3]].codigo, cidades[vencedor[3]].nome 
        , cidades[vencedor[3]].pib);

        printf("A Cidade com o maior PIB per capita é a %s - %s com um PIB per capita de  %.2f\n", cidades[vencedor[4]].codigo,
         cidades[vencedor[4]].nome , cidades[vencedor[4]].PIB_per_capita);

        printf("A Cidade com o maior número de Pontos turísticos é a %s - %s com : %d\n", cidades[vencedor[5]].codigo,
         cidades[vencedor[5]].nome , cidades[vencedor[5]].pontos_turisticos);

        printf("A Cidade com o maior Super Poder é a %s - %s com : %2.f\n", cidades[vencedor[6]].codigo,
         cidades[vencedor[6]].nome , cidades[vencedor[6]].superpoder);

    
    return 0;
}
