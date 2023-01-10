/*4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em 
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o 
imprima.*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tam; 
  int *vet = NULL; //DECLARA O PONTEIRO PARA A ALOCAÇÃO 
  printf("Entre com o tamanho do vetor: ");
  scanf("%d", &tam);
  vet = (int *)calloc(tam, sizeof(int)); //ALOCA O VETOR DINAMICAMENTE
}