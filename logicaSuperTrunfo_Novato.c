#include <stdio.h>

int main () {

    // ======= CARTA 01 =======
    char estado[3];
    char codigo[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib; 
    int pontosTuristicos;

    printf("---- CARTA 01 ----\n");

    printf("Estado: ");
    scanf("%s", estado);

    printf("Código: ");
    scanf("%s", codigo);

    printf("Cidade: ");
    scanf("%s", nomeCidade);

    printf("População: ");
    scanf("%lu", &populacao);

    printf("Área (em km2): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Cálculos
    float densidadePopulacional = populacao / area;
    float pibPerCapita = (pib * 1000000000.0) / populacao;


    // ======= CARTA 02 =======
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\n---- CARTA 02 ----\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;


    //           COMPARAÇÃO — ATRIBUTO ESCOLHIDO: POPULAÇÃO


    printf("\n==== COMPARAÇÃO DE CARTAS (Atributo: População) ====\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidade, estado, populacao);
    printf("Carta 2 - %s (%s): %lu habitantes\n\n", nomeCidade2, estado2, populacao2);

    // Lógica da comparação
    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade);
    } else if (populacao2 > populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas possuem a mesma população.\n");
    }

    return 0;
}
