/******************************************************************************
 João Victor Ferreira dos Santos 19/09/22 - Impressao de Quadrado de Caracteres
*******************************************************************************/
#include <stdio.h>
int imprime (char var, int x) {
    for (int z=1; z<=x; z++){
        for (int c=1; c<=z; c++){
            printf ("%c", var);
        }
        printf ("\n");
    }
    return x * x;
}

int main() {
    imprime ('*',5);
}
