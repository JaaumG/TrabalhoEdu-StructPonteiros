#include <stdio.h>

struct{
    char nome[30];
    float nota[4]
}typedef RgAluno;


int main() {
    RgAluno  aluno;
    printf("Digite o nome\n");
    scanf("%s", &aluno.nome);
    printf("Digite a primeira nota\n");
    scanf("%f", &aluno.nota[0]);
    printf("Digite a segunda nota\n");
    scanf("%f", &aluno.nota[1]);
    printf("Digite a terceira nota\n");
    scanf("%f", &aluno.nota[2]);
    printf("Digite a quarta nota\n");
    scanf("%f", &aluno.nota[3]);
    float media = aluno.nota[0]+aluno.nota[1]+aluno.nota[2]+aluno.nota[3];
    media /= 4;
    printf("Média de %s: %.2f", aluno.nome, media);

    return 0;
}
