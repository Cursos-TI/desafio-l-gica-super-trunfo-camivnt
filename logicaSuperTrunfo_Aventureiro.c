#include <stdio.h>
#include <string.h>

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

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;


    //   MENU DE COMPARAÇÃO

    int opcao;

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR VENCE)\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    switch(opcao) {

        case 1:
            // POPULAÇÃO
            printf("Atributo escolhido: População\n");
            printf("%s: %lu\n", nomeCidade, populacao);
            printf("%s: %lu\n", nomeCidade2, populacao2);

            if (populacao > populacao2)
                printf("Resultado: %s venceu!\n", nomeCidade);
            else if (populacao2 > populacao)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");

            break;

        case 2:
            // ÁREA
            printf("Atributo escolhido: Área (km²)\n");
            printf("%s: %.2f\n", nomeCidade, area);
            printf("%s: %.2f\n", nomeCidade2, area2);

            if (area > area2)
                printf("Resultado: %s venceu!\n", nomeCidade);
            else if (area2 > area)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");

            break;

        case 3:
            // PIB
            printf("Atributo escolhido: PIB (bilhões)\n");
            printf("%s: %.2f\n", nomeCidade, pib);
            printf("%s: %.2f\n", nomeCidade2, pib2);

            if (pib > pib2)
                printf("Resultado: %s venceu!\n", nomeCidade);
            else if (pib2 > pib)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");

            break;

        case 4:
            // PONTOS TURÍSTICOS
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d\n", nomeCidade, pontosTuristicos);
            printf("%s: %d\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nomeCidade);
            else if (pontosTuristicos2 > pontosTuristicos)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");

            break;

        case 5:
            // DENSIDADE – MENOR VENCE
            printf("Atributo escolhido: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade, densidadePopulacional);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);

            if (densidadePopulacional < densidadePopulacional2)
                printf("Resultado: %s venceu!\n", nomeCidade);
            else if (densidadePopulacional2 < densidadePopulacional)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");

            break;

        case 6:
            // PIB PER CAPITA
            printf("Atributo escolhido: PIB per Capita\n");
            printf("%s: %.2f\n", nomeCidade, pibPerCapita);
            printf("%s: %.2f\n", nomeCidade2, pibPerCapita2);

            if (pibPerCapita > pibPerCapita2)
                printf("Resultado: %s venceu!\n", nomeCidade);
            else if (pibPerCapita2 > pibPerCapita)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");

            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
