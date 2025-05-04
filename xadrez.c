#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i = 0; // mover a torre 5 casas para a direita

for (i < 5; i++){

    printf("direita\n"); // imprime a direção do movimento 
}
  
// mover o bispo 5 casas para cima e a direita

while (i <= 5){
      printf("cima direita\n");
      i++;
}

// mover a rainha 8 casa a esquerda 

do {
   printf("esquerda\n");
   i++;
} while (i <= 8); 





return 0;
}







