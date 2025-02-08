#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto;
    int palpite;
    int tentativas = 0;
    int limite_tentativas = 10;
    
    // Gera um número aleatório entre 1 e 100
    srand(time(NULL));
    numero_secreto = rand() % 100 + 1;
    
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");
    
    while (tentativas < limite_tentativas) {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &palpite);
        tentativas++;
        
        if (palpite == numero_secreto) {
            printf("Parabéns! Você acertou o número secreto em %d tentativas.\n", tentativas);
            return 0;
        } else if (palpite < numero_secreto) {
            printf("O número secreto é maior.\n");
        } else {
            printf("O número secreto é menor.\n");
        }
    }
    
    printf("Você excedeu o limite de tentativas. O número secreto era %d.\n", numero_secreto);
    
    return 0;
}
