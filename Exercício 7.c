//João Victor Ferreira dos Santos. Objetivo: Pimeiro programa criação de Bandas, TESTE1

#include <stdio.h>
#include <string.h>
#define TAMANHO 3   
typedef struct banda {
    char nome[20];
    char estilo[15];
    int integrante;
    int rank;
} BANDA;
void leBanda (BANDA *v) {
  for(int i=0;i<TAMANHO;i++) {
    printf("\nNome da banda: ");   scanf("%s", v[i].nome);
    printf("\nEstilo musical: ");    scanf("%s", v[i].estilo);
    printf("\nQt de integrantes: ") ;scanf("%d",&v[i].integrante);
    printf("\nPosicao no ranking: ");scanf("%d",&v[i].rank);
  }
}
void exibeBanda (BANDA *exib) {
    for( int i=0;i <TAMANHO ; i++) {
        printf("\n\nBanda: %s",    exib[i].nome);
        printf("\nEstilo: %s",     exib[i].estilo);
        printf("\nIntegrantes: %d",exib[i].integrante);
        printf("\nPosicao: %d",    exib[i].rank);
    }
}
int main() {
    BANDA v[TAMANHO];
    leBanda (v);
    printf ("\n\nRanking De Todas As Bandas");
    exibeBanda (v);
    return 0;
}




