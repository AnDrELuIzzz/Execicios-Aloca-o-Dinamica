/*3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço de uma pessoa.
Agora, escreva uma função que receba um inteiro positivo N e retorne o ponteiro para um vetor de tamanho N, alocado
dinamicamente, dessa estrutura. Solicite também que o usuário digite os dados desse vetordentro da função.*/
include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Cadastro
{
    char nome[80];
    char endereco[100];
    int idade;
};

typedef struct Cadastro cadastro;

cadastro *F_CAD(int nr);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cadastro *CAD = NULL;
    int N1;

    printf("Digite o numero de cadastros: ");
    scanf("%d", &N1);

    CAD = F_CAD(N1);

    for (int j = 0; j < N1; j++)
    {
        printf("\n---CADASTRO N. %d---", (j + 1));
        printf("\nNome: %s", CAD[j].nome);
        printf("\nIdade: %d", CAD[j].idade);
        printf("\nEndereco: %s\n", CAD[j].endereco);
    }

    system("pause");
    return 0;
}

cadastro *F_CAD(int nr)
{
    cadastro *vet_cad;
    vet_cad = (cadastro *)malloc(nr * sizeof(cadastro));
    if (vet_cad == NULL)
    {
        perror("Memória insuficiente!!");
        exit(1);
    }

    for (int i = 0; i < nr; i++)
    {
        printf("\nDigite o nome: ");
        fflush(stdin);
        fgets(vet_cad[i].nome, sizeof(vet_cad[i].nome), stdin);
        printf("Digite a idade: ");
        scanf("%d", &vet_cad[i].idade);
        printf("Digite o endereço: ");
        fflush(stdin);
        fgets(vet_cad[i].endereco, sizeof(vet_cad[i].endereco), stdin);
    }

    return vet_cad;
}