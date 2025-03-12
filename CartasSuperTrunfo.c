#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    //criando as variáveis para as cartas
    char estado1, estado2;
    char codigo1[3], codigo2[3], cidade1[20], cidade2[20];
    int populacao1, pts_tur1, populacao2, pts_tur2;
    float area1, pib1, area2, pib2, dens_pop1, dens_pop2, pibpc1, pibpc2;
    unsigned int superPoder1, superPoder2;

    printf("Desafio Super Trunfo.\n");
    printf("\n");

    //solicitando para que o usuário insira as informações da carta 1 
    printf("Carta 1\n");
    
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pts_tur1);

    printf("----------------------------------------\n");

    //solicitando para que o usuário insira as informações da carta 2
    printf("Carta 2\n");
    
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pts_tur2);

    //calculando a densidade populacional e o PIB das cartas
    dens_pop1 = (area1 != 0) ? populacao1 / area1 : 0;  // Verifica se a área não é zero
    pibpc1 = (populacao1 != 0) ? pib1 / populacao1 : 0;  // Verifica se a população não é zero

    dens_pop2 = (area2 != 0) ? populacao2 / area2 : 0;  // Verifica se a área não é zero
    pibpc2 = (populacao2 != 0) ? pib2 / populacao2 : 0;  // Verifica se a população não é zero

    //calculando super poder das cartas 
     // Calculando o super poder das cartas (inversão da densidade populacional)
     superPoder1 = populacao1 + area1 + pib1 + pts_tur1 + (dens_pop1 != 0 ? 1 / dens_pop1 : 0) + pibpc1;
     superPoder2 = populacao2 + area2 + pib2 + pts_tur2 + (dens_pop2 != 0 ? 1 / dens_pop2 : 0) + pibpc2;

    //aqui serão mostrados os dados inseridos pelo usuário em suas respectivas cartas
    printf("----------------------------------------\n");

    printf("Carta 1:\n");
    printf(" Estado: %c\n", estado1);
    printf(" Código da carta: %s\n", codigo1);
    printf(" Nome da cidade: %s\n", cidade1);
    printf(" População: %d\n", populacao1);
    printf(" Área: %.2f Km²\n", area1);
    printf(" PIB: R$%.2f\n", pib1);
    printf(" Pontos turísticos: %d\n", pts_tur1);
    printf(" Densidade Populacional: %.2f hab/Km²\n", dens_pop1);
    printf(" PIB Per Capita: R$%.2f\n", pibpc1);
    printf(" Super Poder: %u\n", superPoder1);

    printf("----------------------------------------\n");

    printf("Carta 2:\n");
    printf(" Estado: %c\n", estado2);
    printf(" Código da carta: %s\n", codigo2);
    printf(" Nome da cidade: %s\n", cidade2);
    printf(" População: %d\n", populacao2);
    printf(" Área: %.2f Km²\n", area2);
    printf(" PIB: R$%.2f\n", pib2);
    printf(" Pontos turísticos: %d\n", pts_tur2);
    printf(" Densidade Populacional: %.2f hab/Km²\n", dens_pop2);
    printf(" PIB Per Capita: R$%.2f\n", pibpc2);
    printf(" Super Poder: %u\n", superPoder2);

    printf("*** COMPARAÇÃO DAS CARTAS ***\n");

    // Comparando as cartas e exibindo o vencedor em cada categoria
    printf(" População: Carta 1 venceu: %d\n", populacao1 > populacao2);
    printf(" Área: Carta 1 venceu: %d\n", area1 > area2);
    printf(" PIB: Carta 1 venceu: %d\n", pib1 > pib2);
    printf(" Pontos Turísticos: Carta 1 venceu: %d\n", pts_tur1 > pts_tur2);
    printf(" Densidade Populacional: Carta 1 venceu: %d\n", dens_pop1 > dens_pop2);
    printf(" PIB per Capita: Carta 1 venceu: %d\n", pibpc1 > pibpc2);
    printf(" Super Poder: Carta 1 venceu: %d\n", superPoder1 > superPoder2);


    return 0;
}
