#include <stdio.h>                               // Biblioteca padrão
#include <string.h>                              // Biblioteca para strcpy
#include <stdlib.h>                              // Biblioteca para srand/rand
#include <time.h>                                // Biblioteca para time()

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código implementa a lógica de comparação entre duas cartas de cidades
// com seleção de dois atributos, menus dinâmicos e tratamento de empates.

int main() {                                     // Início

    // Semente aleatória (srand) — usada para embaralhar ou sortear cartas futuramente
    srand(time(NULL));

    int player1;                                 // 1ª escolha de atributo
    int player2;                                 // 2ª escolha de atributo

    // Variáveis para guardar os valores escolhidos
    float valor1_attr1, valor1_attr2;            // Valores da Carta 1
    float valor2_attr1, valor2_attr2;            // Valores da Carta 2
    char nomeAttr1[30], nomeAttr2[30];           // Nomes dos atributos escolhidos

    // Cadastro das Cartas:
    // Definição das propriedades das cidades (cartas pré-cadastradas)

    // Variáveis da Carta 1
    char pais1[20]        = "Brasil";
    char codigo1[4]       = "A01";
    char cidade1[50]      = "Sao Paulo";
    int populacao1        = 12325000;
    float area1           = 1521.11;
    float pib1            = 699.28;
    int pontosTuristicos1 = 50;

    // Variáveis da Carta 2
    char pais2[20]        = "Brasil";
    char codigo2[4]       = "B02";
    char cidade2[50]      = "Rio de Janeiro";
    int populacao2        = 6748000;
    float area2           = 1200.25;
    float pib2            = 300.50;
    int pontosTuristicos2 = 30;

    // Cálculo da densidade populacional
    float densidade1   = populacao1 / area1;
    float densidade2   = populacao2 / area2;

    // Cálculo do PIB per capita
    float pibPerCapita1 = (pib1 * 1e9) / populacao1;
    float pibPerCapita2 = (pib2 * 1e9) / populacao2;

    // Exibição das Cartas:
    // Exibe claramente os dados de cada carta antes da comparação

    // Exibição da Carta 1
    printf("========== CARTA 1 ==========\n");
    printf("Pais: %s\n", pais1);                         // Especificador de string
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);               // Especificador de número decimal
    printf("Area: %.2f km2\n", area1);                   // Especificador de ponto flutuante
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("========== CARTA 2 ==========\n");
    printf("Pais: %s\n", pais2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    // ===== 1º Menu do Jogo =====
    // Solicita ao usuário que escolha o primeiro atributo para comparar
    // Utiliza do-while com switch para validar a entrada
    do {
        printf("========== SUPER TRUNFO ==========\n");
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        printf("Opcao: ");
        scanf("%d", &player1);                           // Armazena valor digitado na variável

        // Valida a opção com switch — default trata entrada inválida
        switch(player1) {
            case 1: case 2: case 3: case 4: case 5: case 6: // Opção Valida
                break;                                   
            default:
                printf("Opcao invalida! Tente novamente.\n\n");
                player1 = 0;                             // Força repetição do loop
        }

    } while(player1 < 1 || player1 > 6);

    // ===== 2º Menu do Jogo (Dinâmico) =====
    // O atributo já escolhido não aparece como opção
    // Utiliza switch para montar o menu sem o atributo anterior
    do {
        printf("\nEscolha o segundo atributo:\n");

        // Controle de decisão: exibe apenas as opções disponíveis
        switch(player1) {
            case 1:
                printf("2 - Area\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turisticos\n");
                printf("5 - Densidade Populacional\n");
                printf("6 - PIB per Capita\n");
                break;
            case 2:
                printf("1 - Populacao\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turisticos\n");
                printf("5 - Densidade Populacional\n");
                printf("6 - PIB per Capita\n");
                break;
            case 3:
                printf("1 - Populacao\n");
                printf("2 - Area\n");
                printf("4 - Pontos Turisticos\n");
                printf("5 - Densidade Populacional\n");
                printf("6 - PIB per Capita\n");
                break;
            case 4:
                printf("1 - Populacao\n");
                printf("2 - Area\n");
                printf("3 - PIB\n");
                printf("5 - Densidade Populacional\n");
                printf("6 - PIB per Capita\n");
                break;
            case 5:
                printf("1 - Populacao\n");
                printf("2 - Area\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turisticos\n");
                printf("6 - PIB per Capita\n");
                break;
            case 6:
                printf("1 - Populacao\n");
                printf("2 - Area\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turisticos\n");
                printf("5 - Densidade Populacional\n");
                printf("6 - PIB per Capita\n");
                break;
            default:
                printf("Erro interno no menu.\n");
        }

        printf("Opcao: ");
        scanf("%d", &player2);                           // Armazena valor digitado na variável

        // Valida com switch — default trata entrada inválida e atributo repetido
        switch(player2) {
            case 1: case 2: case 3: case 4: case 5: case 6:
                if(player2 == player1) {
                    printf("Erro! Voce ja escolheu esse atributo. Tente novamente.\n");
                    player2 = 0;                         // Força repetição
                }
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                player2 = 0;                                   // Força repetição
        }

    } while(player2 < 1 || player2 > 6 || player2 == player1);

    // ===== Mapeamento dos valores do 1º atributo =====
    // Utiliza switch para associar o atributo escolhido aos valores das cartas
    switch(player1) {
        case 1:
            valor1_attr1 = populacao1, valor2_attr1 = populacao2;
            strcpy(nomeAttr1, "Populacao");
            break;
        case 2:
            valor1_attr1 = area1, valor2_attr1 = area2;
            strcpy(nomeAttr1, "Area");
            break;
        case 3:
            valor1_attr1 = pib1, valor2_attr1 = pib2;
            strcpy(nomeAttr1, "PIB");
            break;
        case 4:
            valor1_attr1 = pontosTuristicos1, valor2_attr1 = pontosTuristicos2;
            strcpy(nomeAttr1, "Pontos Turisticos");
            break;
        case 5:
            valor1_attr1 = densidade1, valor2_attr1 = densidade2;
            strcpy(nomeAttr1, "Densidade Populacional");
            break;
        case 6:
            valor1_attr1 = pibPerCapita1, valor2_attr1 = pibPerCapita2;
            strcpy(nomeAttr1, "PIB per Capita");
            break;
        default:
            printf("Erro ao carregar atributo 1.\n");
    }

    // ===== Mapeamento dos valores do 2º atributo =====
    switch(player2) {
        case 1:
            valor1_attr2 = populacao1, valor2_attr2 = populacao2;
            strcpy(nomeAttr2, "Populacao");
            break;
        case 2:
            valor1_attr2 = area1, valor2_attr2 = area2;
            strcpy(nomeAttr2, "Area");
            break;
        case 3:
            valor1_attr2 = pib1, valor2_attr2 = pib2;
            strcpy(nomeAttr2, "PIB");
            break;
        case 4:
            valor1_attr2 = pontosTuristicos1, valor2_attr2 = pontosTuristicos2;
            strcpy(nomeAttr2, "Pontos Turisticos");
            break;
        case 5:
            valor1_attr2 = densidade1, valor2_attr2 = densidade2;
            strcpy(nomeAttr2, "Densidade Populacional");
            break;
        case 6:
            valor1_attr2 = pibPerCapita1, valor2_attr2 = pibPerCapita2;
            strcpy(nomeAttr2, "PIB per Capita");
            break;
        default:
            printf("Erro ao carregar atributo 2.\n");
    }

    // ===== Comparação de Cartas =====
    // Utiliza o operador ternário para comparar os atributos individualmente
    // Densidade: menor vence. Demais atributos: maior vence.
    // Empate tratado explicitamente (retorna 0)

    int venc_attr1 = (player1 == 5)
        ? (valor1_attr1 < valor2_attr1 ? 1 : (valor1_attr1 > valor2_attr1 ? 2 : 0))
        : (valor1_attr1 > valor2_attr1 ? 1 : (valor1_attr1 < valor2_attr1 ? 2 : 0));

    int venc_attr2 = (player2 == 5)
        ? (valor1_attr2 < valor2_attr2 ? 1 : (valor1_attr2 > valor2_attr2 ? 2 : 0))
        : (valor1_attr2 > valor2_attr2 ? 1 : (valor1_attr2 < valor2_attr2 ? 2 : 0));

    // ===== Soma dos atributos de cada carta =====
    float soma1 = valor1_attr1 + valor1_attr2;   // Soma da Carta 1
    float soma2 = valor2_attr1 + valor2_attr2;   // Soma da Carta 2

    // ===== Exibição dos Resultados =====
    // Exibe claramente qual carta venceu e com base em qual atributo
    printf("\n========== RESULTADO ==========\n");

    // Resultado do Atributo 1
    printf("\nAtributo 1 %s:\n", nomeAttr1);
    printf("  %s: %s: %.2f\n", pais1, cidade1, valor1_attr1);
    printf("  %s: %s: %.2f\n", pais2, cidade2, valor2_attr1);
    printf("  Vencedor: %s\n",
        venc_attr1 == 1 ? cidade1 :
        venc_attr1 == 2 ? cidade2 : "Empate");

    // Resultado do Atributo 2
    printf("\nAtributo 2 %s:\n", nomeAttr2);
    printf("  %s: %s: %.2f\n", pais1, cidade1, valor1_attr2);
    printf("  %s: %s: %.2f\n", pais2, cidade2, valor2_attr2);
    printf("  Vencedor: %s\n",
        venc_attr2 == 1 ? cidade1 :
        venc_attr2 == 2 ? cidade2 : "Empate");

    // Soma dos atributos
    printf("\nSoma dos atributos:\n");
    printf("  %s: %s - Carta 1: %.2f\n", pais1, cidade1, soma1);
    printf("  %s: %s - Carta 2: %.2f\n", pais2, cidade2, soma2);

    // A cidade vencedora é determinada pela maior soma dos atributos
    if(soma1 > soma2) {
        printf("\nA cidade vencedora e: %s - %s Carta 1!\n", pais1, cidade1);
    } else if(soma2 > soma1) {
        printf("\nA cidade vencedora e: %s - %s Carta 2!\n", pais2, cidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;                                    // Fim de Execução
}
