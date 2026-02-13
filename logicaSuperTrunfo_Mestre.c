#include <stdio.h>

// ======= FUNÇÃO =======
int vencedor(float v1, float v2);

// ======= FUNÇÃO QUE DEFINE O VENCEDOR =======
int vencedor(float v1, float v2) {
    if (v1 > v2) {
        return 1;  // Carta 1 vence
    } else if (v2 > v1) {
        return 2;  // Carta 2 vence
    } else {
        return 0;  // Empate
    }
}

int main() {

    // ======= CARTA 01 =======
    char estado[3] = "SC";      
    char codigo[4] = "C01";
    char nomeCidade[50] = "Florianopolis";
    int populacao = 537211;
    float area = 675.400;
    float pib = 23.6;
    int pontosTuristicos = 38;

    // ======= CARTA 02 =======
    char estado2[3] = "PR";
    char codigo2[4] = "C02";
    char nomeCidade2[50] = "Curitiba";
    int populacao2 = 1829225;
    float area2 = 432.0;
    float pib2 = 98.0;
    int pontosTuristicos2 = 30;

    // ======= EXIBIÇÃO =======
    printf("---- CARTA 01 ----\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.1f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos);

    printf("---- CARTA 02 ----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n\n", pontosTuristicos2);

    // ======= COMPARAÇÃO (EXEMPLO: POPULAÇÃO) =======
    printf("===== RESULTADO DO COMBATE =====\n");

    int resultado = vencedor(populacao, populacao2);

    printf("Comparando POPULAÇÃO:\n");

    if (resultado == 1) {
        printf("Vencedor: Florianopolis! \n");
    } else if (resultado == 2) {
        printf("Vencedor: Curitiba! \n");
    } else {
        printf("Empate! \n");
    }

    return 0;
}
