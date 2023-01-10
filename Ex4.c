/*4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void f_preenche_vetor(int *vetor, int tamanho);        //PROTOTIPO DA FUNÇÃO RESPONSAVEL POR PREENCHER O VETOR
void f_imprime(int *vetor, int tamanho);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam;
    int *vet = NULL;        // DECLARA O PONTEIRO PARA A ALOCAÇÃO
    printf("Entre com o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = (int *)calloc(tam, sizeof(int));        // ALOCA O VETOR DINAMICAMENTE
    f_preenche_vetor(vet, tam);
    f_imprime(vet, tam);

    system("pause");
    return 0;
}
//FUNAÇÃO RESPONSÁVEL POR PREENCHER O VETOR
void f_preenche_vetor(int *vetor, int tamanho)
{
    for (int cont = 0; cont < tamanho; cont++)
    {
        printf("Digite o valor do vetor na posição %d: ", cont + 1);
        scanf("%d", &vetor[cont]);
    }
}
//FUNÇÃO RESPONSAVEL POR IMPRIMIR A FUNÇÃO 
void f_imprime(int *vetor, int tamanho)
{
    for (int cont = 0; cont < tamanho; cont++)
        printf("O vetor na posição %d é %d\n", cont + 1, vetor[cont]);
}