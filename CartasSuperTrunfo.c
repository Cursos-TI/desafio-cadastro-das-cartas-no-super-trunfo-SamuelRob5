#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//

struct Cidade{
    char codigo[4];         //código da cidade
    char nome[50];          //nome da cidade
    int populacao;          //população da cidade
    float area;             //área da cidade em km²
    float pib;              //PIB da cidade em bilhões
    int pontos_turisticos;  //Número de pontos turisticos
};
int main() {
    struct Cidade cidades[num_estados * num_cidades];
    char estado_letras[num_estados]={'A','B','C','D','E','F','G','H'};
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    while(1){
        printf("Olá \n ");
        printf("Hora de cadastrar as cartas do Super Trunfo \n");
        printf("Digite o estado da carta usando algum desses caracteres a seguir \n ");
        printf("Serão aceitos somente os caracteres A,B,C,D,E,F,G e H \n ");
        printf("Insira a seguir um digito válido: ");
        scanf("%c", estado[0]);
        printf(" %c ", estado[0][0]);
        for (int i = 0; i < 8; i++)
        {
            if(estado[i][0]=="A") confir=1;
            if(estado[i][0]=="B") confir=1;
            if(estado[i][0]=="C") confir=1;
            if(estado[i][0]=="D") confir=1;
            if(estado[i][0]=="E") confir=1;
            if(estado[i][0]=="F") confir=1;
            if(estado[i][0]=="G") confir=1;
            if(estado[i][0]=="H") confir=1;
            else confir=0

        }
        
        confir=1;
    }
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
