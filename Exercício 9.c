//João Victor Ferreira dos Santos. Exercicio 2 Fibonacci e Fibinteratriva

#include <stdio.h>

int fibIterativa (int n) {
    printf("\nDentro da função fib n=%d", n);
    
    int termo1 = 0, termo2 = 1, retorno = 1;
    while (n>1) {
        retorno = termo1 + termo2;
        termo1 = termo2;
        termo2 = retorno;
        
        n--;
    }
    return retorno;
}

int main()
{
    int aux, n;
    
    printf("Digite o valor de n: ");
    scanf ("%d", &n);
    
    aux = fibIterativa(n);
    
    printf ("\n\nO valor retornado é %d", aux);

    return 0;
}
