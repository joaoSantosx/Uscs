//João Victor Ferreira dos Santos criação de uma função chamada lenota  que le uma nota e a valida - tem que estar entre 0 e 10. A função deve retornar essa nota VÁLIDA

#include <stdio.h>
#define SIZE 2
#define MEDIA(x, y) (x+y)/2

struct Aluno{
    int matricula;
    float n1, n2, media;
};

float lerNota(){
    float temp;
    scanf("%f", &temp);
    while(temp < 0 || temp > 10){
        printf("Digite um valor valido entre zero e dez: ");
        scanf("%f", &temp);
    }
    return temp;
}

int main()
{
    struct Aluno vec[SIZE];
    float soma = 0.0f;
    for(int i = 0; i < SIZE; i++){
        printf("\n-----------------------------------------");
        printf("\nMatricula: ");
        scanf("%d", &vec[i].matricula);
        printf("\nNota n1: ");
        vec[i].n1 = lerNota();
        printf("\nNota n2: ");
        vec[i].n2 = lerNota();
        vec[i].media = MEDIA(vec[i].n1, vec[i].n2);
        soma = soma + vec[i].media;
    }
    for(int i = 0; i < SIZE; i++){
        printf("\n\n||||||||||||| ALUNO %d ||||||||||||", vec[i].matricula);
        printf("\nNota da n1: %f", vec[i].n1);
        printf("\nNota da n2: %f", vec[i].n2);
        printf("\nMedia: %f %s", vec[i].media, (vec[i].media >= soma/SIZE) ? "(ACIMA DA MEDIA)" : "(ABAIXO DA MEDIA)");
    }
    printf("\n\n\nRELATÓRIO GERAL: ");
    printf("\nQuantidade de alunos na sala: %d", SIZE);
    printf("\nMedia geral da sala: %f", soma/SIZE);

    return 0;
}

