#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("teste \n");
    char estado [8][1];                  //estado
    char nomecidade [32][99];            //cidade
    int populacao [32];                  //população
    float area[32];                      //área
    float pib[32];                       // PIB
    int ptturismo [32];                  //número de pontos turisticos
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    while(1){
        printf("Olá \n ");
        printf("Hora de cadastrar as cartas do Super Trunfo \n");
        printf("Digite o estado da carta usando algum desses caracteres a seguir \n ");
        printf("Serão aceitos somente os caracteres A,B,C,D,E,F,G e H \n ");
        printf("Insira a seguir um digito válido: ");
        scanf("%c",&estado[1]);

    }
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
