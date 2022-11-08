//João Victor Ferreira dos Santos. Objetivo: Fibonacci 
#include <stdio.h>


int fib (int n) {
    printf("\nDentro da função fib n=%d", n);
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    return fib(n-2) + fib(n-1);
}


int fibiterat(int n){
    int antigo = 0;
    int atual = 1;
    
    for(int i = 0; i < n; i++){
        int temp = antigo;
        antigo = atual;
        atual = temp + antigo;
    }
    return antigo;
}
int main()
{
    int aux, n;
    
    printf("Digite o valor de n: ");
    scanf ("%d", &n);
    
    aux = fibiterat(n);
    
    printf ("\n\nO valor retornado é %d", aux);

    return 0;
}



