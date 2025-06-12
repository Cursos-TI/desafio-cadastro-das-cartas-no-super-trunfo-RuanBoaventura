#include <stdio.h>

int main() {

    // Carta 1:
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2:
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Chamada da Carta 1:
    printf("Carta 1: Preencha as informações abaixo. \n \n");
    
    printf("Digite o Estado (letra de A a H): ");
    scanf("%c", &estado1);

    printf("Digite o Código da Carta (número de 1 a 4): ");
    scanf("%s", &codigoCarta1);

    printf("Digite o Nome da Cidade (sem espaço): ");
    scanf("%s", nomeCidade1);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Solução pro Nome com Espaço:
    getchar();

    // Chamada da Carta 2:
    printf("\nCarta 2: Preencha as informações abaixo. \n \n");
    
    printf("Digite o Estado (letra de A a H):");
    scanf("%c", &estado2);

    printf("Digite o Código da Carta (número de 1 a 4): ");
    scanf("%s", &codigoCarta2);

    printf("Digite o Nome da Cidade (sem espaço): ");
    scanf("%s", nomeCidade2);
    
    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    //=-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-==-=-=//

    // Exibição da Carta 1:
    printf("\nCARTA 1:\n");
    printf("Estado: %c", estado1);
    printf("\nCódigo da Carta: %s", codigoCarta1);
    printf("\nNome da Cidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos1);

    // Exibição da Carta 2:
    printf("\n\nCARTA 2:\n");
    printf("Estado: %c", estado2);
    printf("\nCódigo da Carta: %s", codigoCarta2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);

    return 0;
}