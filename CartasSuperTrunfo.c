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

    //aqui serão mostrados os dados inseridos pelo usuário em suas respectivas cartas
    printf("----------------------------------------\n");

    dens_pop1 = populacao1 / area1; //calculando a densidade populacional para a carta 1
    pibpc1 = pib1 / populacao1; //calculando o pib per capita para a carta 1

    printf("Carta 1:\n Estado: %c\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: R$%.2f\n Pontos turísticos: %d\n Densidade Populacional: %.2f hab/Km²\n PIB Per Capita: R$%.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pts_tur1, dens_pop1, pibpc1);

    printf("----------------------------------------\n");

    dens_pop2 = populacao2 / area2; //calculando a densidade populacional para a carta 2
    pibpc2 = pib2 / populacao2; //calculando o pib per capita para a carta 2

    printf("Carta 2:\n Estado: %c\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: R$%.2f\n Pontos turísticos: %d\n Densidade Populacional: %.2f hab/Km²\n PIB Per Capita: R$%.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pts_tur2, dens_pop2, pibpc2);





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
