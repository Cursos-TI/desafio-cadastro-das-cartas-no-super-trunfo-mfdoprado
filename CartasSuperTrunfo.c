#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Utilização da função printf para exibir o titulo do jogo
    printf("Super Trunfo - Paises\n");

    // Definição das variáveis para cada atributo da cidade:
    // Código da cidade, Nome, População, Área, PIB, Número de pontos turísticos
    char Estado1;
    char Cod_Cidade1 [04];
    char Nome_Cidade1 [50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1; 
        
    char Estado2;
    char Cod_Cidade2 [04];
    char Nome_Cidade2 [50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;

    // Cadastro da Carta 1, interação com o usuário
    // Utilização da função printf para solicitar ao usuário a informação desejada em relação à cidade
    // Utilização da função scanf para capturar a informação digitada
        
    printf ("\nDados da Carta 1\n");
    printf ("Digite a Letra Correspondente ao Estado de A até H: \n");
    scanf(" %c", &Estado1);
    printf("Digite o Codigo da Cidade com 3 Digitos sendo o primeiro a letra do estado correspondente: \n");
    scanf("%3s", &Cod_Cidade1);
    printf("Digite o Nome da Cidade: \n");
    scanf("%49s", &Nome_Cidade1);
    printf("Digite a População: \n");
    scanf("%d", &Populacao1);
    printf("Digite a Área: \n");
    scanf("%f", &Area1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos1);

    // Exibição dos Dados da Carta 1:
    // Utilização da função printf para exibir as informações da carta
    
    printf("\nEstado: %c\n", Estado1);
    printf("Código da Cidade: %s\n", Cod_Cidade1);
    printf("Nome da Cidade: %s\n", Nome_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km2\n", Area1);
    printf("PIB: R$ %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos1);

    // Cadastro da Carta 2, interação com o usuário
    // Utilização da função printf para solicitar ao usuário a informação desejada em relação à cidade
    // Utilização da função scanf para capturar a informação digitada
        
    printf ("\nDados da Carta 2\n");
    printf ("Digite a Letra Correspondente ao Estado de A até H: \n");
    scanf(" %c", &Estado2);
    printf("Digite o Codigo da Cidade com 3 Digitos sendo o primeiro a letra do estado correspondente: \n");
    scanf("%3s", &Cod_Cidade2);
    printf("Digite o Nome da Cidade: \n");
    scanf("%49s", &Nome_Cidade2);
    printf("Digite a População: \n");
    scanf("%d", &Populacao2);
    printf("Digite a Área: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos2);

    // Exibição dos Dados da Carta 2:
    // Utilização da função printf para exibir as informações da carta
    
    printf("\nEstado: %c\n", Estado2);
    printf("Código da Cidade: %s\n", Cod_Cidade2);
    printf("Nome da Cidade: %s\n", Nome_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km2\n", Area2);
    printf("PIB: R$ %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);

return 0;
    
}