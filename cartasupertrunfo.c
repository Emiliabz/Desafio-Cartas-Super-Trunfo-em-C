#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char estado1, estado2;
    int cidade1, cidade2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Cadastro da primeira carta
    printf("=== Cadastro da Primeira Carta ===\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);  // O espaço antes do %c limpa o buffer
    
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontosturisticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontosturisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados
    printf("\n=== Dados das Cartas Cadastradas ===\n");

    // Primeira carta
    printf("\nCarta %c%02d:\n", estado1, cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontosturisticos: %d\n", pontosturisticos1);

    // Segunda carta
    printf("\nCarta %c%02d:\n", estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontosturisticos: %d\n", pontosturisticos2);

    return 0;
}
