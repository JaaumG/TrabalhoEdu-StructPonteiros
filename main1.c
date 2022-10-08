#include <stdio.h>

struct{
    char Nome[40];
    char Endereco[40];
    int idade;
}typedef Pessoa;


int main() {
    Pessoa pessoa;
    printf("Digite o nome:\n");
    scanf("%s", pessoa.Nome);
    printf("Digite o endereço:\n");
    scanf("%s", pessoa.Endereco);
    printf("Digite a idade:\n");
    scanf("%d", &pessoa.idade);
    if(pessoa.idade>=18){
        printf("você é maior de idade.");
    }else{
        printf("você é menor de idade.");
    }


    return 0;
}
