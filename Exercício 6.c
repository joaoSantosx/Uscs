// Lista de exercicios 4 ex7 Ler os valores e atribuí-los aos campos do registro e emitir a mensagem de “Produto em Promoção” caso o preço seja inferior a 4. Caso contrário, imprimir “Produto Cadastrado”
#include <stdio.h>

typedef struct {
       long codigo;
       char nome[99];
       float preco;
} Produto;

int main()
{
    Produto p;
    
    printf("Digite o codigo,  o nome e preco");
    scanf ("%ld %s %f", &p.codigo, p.nome, &p.preco);
    
    printf("Valores Digitados\n");
    printf ("%ld %s %.2f", p.codigo, p.nome, p.preco);

    if (p.preco < 4) printf ("Produto em Promocao");
    else             printf ("Produto Cadastrado");  

    return 0;
}

