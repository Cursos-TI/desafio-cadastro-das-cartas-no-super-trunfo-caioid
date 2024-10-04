#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char estado;
    char codigoCARTA[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int numeropt;

    printf ("Digite o estado: \n");
    scanf ("%c", &estado);

    printf ("Digite o código da carta: \n");
    scanf ("%s", &codigoCARTA);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área em km²: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB em milhões: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &numeropt);

    printf("\nInformações da carta! \n\n");

    printf ("Estado: %c\n", estado);
    printf ("Código da carta: %c%s\n", estado, codigoCARTA);
    printf ("Nome da cidade: %s\n", nome);
    printf ("População: %d\n", populacao);
    printf ("Área em km²: %f\n", area);
    printf ("PIB: %f\n", pib);
    printf ("Número de pontos turísticos: %d\n", numeropt);
    
    return 0;
}
