#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Utilização da função printf para exibir o titulo do jogo
    printf("Super Trunfo - Paises\n");

    // Definição das variáveis para cada atributo da cidade:
    // Código da cidade, Nome, População, Área, PIB, Número de pontos turísticos
    char Cod_Cidade [03];
    char Nome_Cidade [30];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_Turisticos; 
        
    // Cadastro das Cartas, interação com o usuário
    // Utilização da função printf para solicitar ao usuário a informação desejada em relação à cidade
    // Utilização da função scanf para capturar a informação digitada
        
    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", &Cod_Cidade);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome_Cidade);
    printf("Digite a População: \n");
    scanf("%d", &Populacao);
    printf("Digite a Área: \n");
    scanf("%f", &Area);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    // Exibição dos Dados da Carta:
    // Utilização da função printf para exibir as informações da carta
    
    printf("Código da Cidade: %s\n", Cod_Cidade);
    printf("Nome da Cidade: %s\n", Nome_Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f m2\n", Area);
    printf("PIB: R$ %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos);

return 0;
    
}
