#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#define ESTADOS 8
#define CIDADES 4
#define MAX_NOME 50  // Tamanho máximo para o nome da cidade

// Estrutura para armazenar os dados da cidade
struct Cidade {
    char codigo[4];      // Ex: "A1"
    char nome[MAX_NOME]; // Nome da cidade
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional; 
    float pibPerCapita;
};

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    struct Cidade cidades[ESTADOS * CIDADES];
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int index = 0;

    printf("📌 Cadastro de Cidades\n");
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Cadastro das cidades
    for (int i = 0; i < ESTADOS; i++) {
        for (int j = 0; j < CIDADES; j++) {
            sprintf(cidades[index].codigo, "%c%d", estados[i], j + 1);
            printf("\n🔹 Cadastro da cidade %s\n", cidades[index].codigo);

            printf("Nome da cidade: ");
            scanf(" %[^\n]", cidades[index].nome); // Lê uma string com espaços

            printf("População: ");
            scanf("%d", &cidades[index].populacao);

            printf("Área (km²): ");
            scanf("%f", &cidades[index].area);

            printf("PIB (bilhões): ");
            scanf("%f", &cidades[index].pib);

            printf("Número de pontos turísticos: ");
            scanf("%d", &cidades[index].pontosTuristicos);

            // Cálculo da densidade populacional e PIB per capita
            cidades[index].densidadePopulacional = cidades[index].populacao / cidades[index].area;
            cidades[index].pibPerCapita = (cidades[index].pib * 1000000000) / cidades[index].populacao;

            index++;
        }
    }
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição dos dados cadastrados
    printf("\n📊 Cidades cadastradas:\n");
    for (int i = 0; i < ESTADOS * CIDADES; i++) {
        printf("\n📍 Código: %s\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", cidades[i].densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", cidades[i].pibPerCapita);
    }

    return 0;
}
