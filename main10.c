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
    RgAluno  aluno[5], *pAluno;
    int i;
    pAluno = aluno;
    float media[5];
    for (i = 0; i < 2; i++) {
        printf("Digite o nome\n");
        scanf("%s", (*pAluno).nome);
        printf("Digite a data de nascimento (dd/MM/yyyy)\n");
        scanf("%d/%d/%d", &(*pAluno).nascimento.dia,&(*pAluno).nascimento.mes,&(*pAluno).nascimento.ano);
        printf("Digite a primeira nota\n");
        scanf("%f", &(*pAluno).nota[0]);
        printf("Digite a segunda nota\n");
        scanf("%f", &(*pAluno).nota[1]);
        printf("Digite a terceira nota\n");
        scanf("%f", &(*pAluno).nota[2]);
        printf("Digite a quarta nota\n");
        scanf("%f", &(*pAluno).nota[3]);

        media[i] = (*pAluno).nota[0]+(*pAluno).nota[1]+(*pAluno).nota[2]+(*pAluno).nota[3];
        media[i] /= 4;
        ++pAluno;
    }
    pAluno=aluno;
    for (i = 0; i <2 ; i++) {
        printf("Média de %s nascido no dia: %d/%d/%d: %.2f\n",(*pAluno).nome,aluno[i].nascimento.dia,(*pAluno).nascimento.mes,(*pAluno).nascimento.ano, media[i]);
        ++pAluno;
    }

    return 0;
}
