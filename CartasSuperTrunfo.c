#include <stdio.h>

int main() {
    // Definir as variáveis para armazenar os dados de cada cidade
    char cidade1[30], cidade2[30]; // Nome das cidades
    int pop1, pop2;              // População das cidades
    float area1, area2;          // Área das cidades
    float pib1, pib2;            // PIB das cidades
    int pontos_turismo1, pontos_turismo2; // Número de pontos turísticos

    // Cadastro da primeira cidade (exemplo: São Paulo, Brasil)
    printf("Cadastro da primeira cidade:\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &pop1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em milhões de USD): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo1);

    // Cadastro da segunda cidade (exemplo: Paris, França)
    printf("Cadastro da segunda cidade:\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &pop2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em milhões de USD): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo2);

    // Exibição dos dados cadastrados
    printf("Dados cadastrados:\n");

    // Exibição dos dados da primeira cidade
    printf("Cidade 1: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de USD\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turismo1);

    // Exibição dos dados da segunda cidade
    printf("Cidade 2: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de USD\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turismo2);

    return 0;
}
