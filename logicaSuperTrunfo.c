#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
int player1;                                  // Variável

    // Variáveis da Carta 1
    char pais1[7] = "Brasil";
    char codigo1[4] = "A01";
    char cidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Variéveis da Carta 2
    char pais2[7] = "Brasil";
    char codigo2[4] = "B02";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // Cálculo da densidade populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
  // Exibição da Carta 1
    printf("========== CARTA 1 ==========\n");
    printf("Pais: %s\n", pais1);                    // Especificador de string
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);          // Especificador de número decimal
    printf("Area: %.2f km²\n", area1);              // Especificador de ponto flutuante
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.8f\n\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("========== CARTA 2 ==========\n");
    printf("Pais: %s\n", pais2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.8f\n\n", pibPerCapita2);

    // Menu do Jogo
    printf("========== SUPER TRUNFO ==========\n");     // Printf Imprime o texto desejado na tela
    printf("Escolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &player1);              // Armazena valor digitado na variável
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
 // Controle de Decisão, compara o valor da variável e testa os casos
    switch(player1) {

        case 1:                                                      // Teste o primeiro Caso
            printf("\nComparacao por Populacao\n");                  // Imprime o texto
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if(populacao1 > populacao2)                              // Compara os Valores entre as variáveis
                printf("\nVencedora: %s (Carta 1)\n", cidade1);      // Imprime o nome da string caso seja verdade
            else if(populacao2 > populacao1)                         // Compara caso if não for verdadeiro
                printf("\nVencedora: %s (Carta 2)\n", cidade2);      // Imprime o nome da sting caso seja verdade
            else                                                     // Caso nenhum dos casos sejam verdadeiros
                printf("\nEmpate!\n");                               // Imprime caso as outras sejam falsas
            break;                                                   // Para o teste

        case 2:
            printf("\nComparacao por Area\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if(area1 > area2)
                printf("\nVencedora: %s (Carta 1)\n", cidade1);
            else if(area2 > area1)
                printf("\nVencedora: %s (Carta 2)\n", cidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 3:
            printf("\nComparacao por PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if(pib1 > pib2)
                printf("\nVencedora: %s (Carta 1)\n", cidade1);
            else if(pib2 > pib1)
                printf("\nVencedora: %s (Carta 2)\n", cidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 4:
            printf("\nComparacao por Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);

            if(pontosTuristicos1 > pontosTuristicos2)
                printf("\nVencedora: %s (Carta 1)\n", cidade1);
            else if(pontosTuristicos2 > pontosTuristicos1)
                printf("\nVencedora: %s (Carta 2)\n", cidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 5:
            printf("\nComparacao por Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            // Menor densidade vence
            if(densidade1 < densidade2)
                printf("\nVencedora: %s (Carta 1)\n", cidade1);
            else if(densidade2 < densidade1)
                printf("\nVencedora: %s (Carta 2)\n", cidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 6:
            printf("\nComparacao por PIB per Capita\n");
            printf("%s: %.8f\n", cidade1, pibPerCapita1);
            printf("%s: %.8f\n", cidade2, pibPerCapita2);

            if(pibPerCapita1 > pibPerCapita2)
                printf("\nVencedora: %s (Carta 1)\n", cidade1);
            else if(pibPerCapita2 > pibPerCapita1)
                printf("\nVencedora: %s (Carta 2)\n", cidade2);
            else
                printf("\nEmpate!\n");
            break;

        default:                                   // Default age como Else em if-else, se nenhum caso for verdadeiro
            printf("\nOpcao invalida!\n");
    }
return 0;                                          // Fim de execução
}
