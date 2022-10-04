#include <stdio.h>
struct {
    int dia;
    int mes;
    int ano;
}typedef Nascimento;
struct{
    char nome[30];
    float nota[4];
    Nascimento nascimento;
}typedef RgAluno;


int main() {
    RgAluno  aluno[5];
    int i;
    float media[5];
    for (i = 0; i < 5; i++) {
        printf("Digite o nome\n");
        scanf("%s", &aluno[i].nome);
        printf("Digite a data de nascimento (dd/MM/yyyy)\n");
        scanf("%d/%d/%d", &aluno[i].nascimento.dia,&aluno[i].nascimento.mes,&aluno[i].nascimento.ano);
        printf("Digite a primeira nota\n");
        scanf("%f", &aluno[i].nota[0]);
        printf("Digite a segunda nota\n");
        scanf("%f", &aluno[i].nota[1]);
        printf("Digite a terceira nota\n");
        scanf("%f", &aluno[i].nota[2]);
        printf("Digite a quarta nota\n");
        scanf("%f", &aluno[i].nota[3]);

        media[i] = aluno[i].nota[0]+aluno[i].nota[1]+aluno[i].nota[2]+aluno[i].nota[3];
        media[i] /= 4;
    }
    for (i = 0; i <5 ; i++) {
        printf("Média de %s nascido no dia: %d/%d/%d: %.2f",aluno[i].nome,aluno[i].nascimento.dia,aluno[i].nascimento.mes,aluno[i].nascimento.ano, media[i]);
    }

    return 0;
}
