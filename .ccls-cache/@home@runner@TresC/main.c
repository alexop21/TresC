#include <stdio.h>

int main(void) {
  float nota1, nota2, nota3, nota4, media;
  char nome[50], menu = 's';
  do {
    printf("===========================\n");
    // Insecao de valores
    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite o valor da primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite o valor da segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite o valor da terceira nota: \n");
    scanf("%f", &nota3);

    printf("Digite o valor da quarta nota: \n");
    scanf("%f", &nota4);
    // Calculo da média
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    // Impressao dos resultados
    printf("===========================\n");
    printf("NOME:\n %s\n", nome);
    printf("MEDIA:\n %2.f\n", media);
    // Determinação de resultado final do aluno
    if (media < 6) {
      printf("SITUACAO:\n REPROVADO\n");
    } else if (media >= 6) {
      printf("SITUACAO:\n APROVADO\n");
    }
    // Utilização do menu para continuar o laço
    printf("===========================\n");
    printf("Deseja continuar a operação?\n");
    printf("[S/N]\n");
    scanf(" %c", &menu);
  } while (menu != 'n' && menu != 'N');

  return 0;
}