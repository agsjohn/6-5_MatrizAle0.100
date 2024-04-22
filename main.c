#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4
#define ALE 101

main() {
  int l, c, m[TAM][TAM], maior, menor, mac, mal, mec, mel;
  srand(time(NULL));
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      m[l][c] = rand() % ALE;
    }
  }
  printf("Matriz: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c == 0 && l == 0){
        maior = m[l][c];
        mac = c;
        mal = l;
        menor = m[l][c];
        mec = c;
        mel = l;
      }
      if(maior < m[l][c]){
        maior = m[l][c];
        mac = c;
        mal = l;
      }
      if(menor > m[l][c]){
        menor = m[l][c];
        mec = c;
        mel = l;
      }
    }
  }
  printf("Maior valor: %i da posição %i:%i\n", maior, mac, mal);
  printf("Menor valor: %i da posição %i:%i\n", menor, mec, mel);
  getchar();
}