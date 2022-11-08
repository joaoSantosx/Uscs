// João Victor Ferreira dos Santos. Objetivo: Imprimir os primeiros 16 caracteres e 25 no segundo

#include <stdio.h>
int imprime (char var, int x) {
    for (int l=1; l<=x; l++){
        for (int c=1; c<=x; c++){
            printf ("%c", var);
        }
        printf ("\n");
    }
    return x * x;
}

int main() {
    int quantidade;
    qtde = imprime ('/',4);
    
    printf ("Foram Mostrados %d caracteres no primeiro e %d no segundo", quantidade, imprime ('!',5) );
    return 0;
}

