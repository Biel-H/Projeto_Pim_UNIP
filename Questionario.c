#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int nota(float grade, float lenght) {
  float result;
  result = grade / lenght;
  printf("_______________\n");
  printf("Resultado/média: %.2f\n", result);
  printf("Nota total: %.2f\n", grade);
  printf("Quantidade de votos: %.0f\n\n", lenght);
  return result;
}

int main() {  
  int op, oa, ol, ou;
  char x[40];
  char z[40];
  float notes_op = 0, notes_oa = 0, notes_ol = 0, notes_ou = 0, lenght_op = 0, lenght_oa = 0, lenght_ol = 0, lenght_ou = 0;
  int controller = 0;

  setlocale(LC_ALL, "Portuguese");

  printf("\tOBRIGADO POR NOS VISITAR, SE POSSIVEL DEIXE SUA AVALIAÇÃO ABAIXO.\n\n");
  system("pause");
  system("cls");

  while (controller <= 3) {

    printf("\t100 anos da semana de arte moderna\n\n");
    printf("O QUE VOCÊ ACHOU DE NOSSAS EXPOSIÇÕES?\n");
    printf("1 -> Péssimo\n");
    printf("2 -> Ruim\n");
    printf("3 -> Bom\n");
    printf("4 -> Excelente\n\n>>> ");

    scanf("%d", &op);
    fflush(stdin);

    switch(op){
    case 1:
      notes_op = notes_op + 1;
      lenght_op = lenght_op + 1;
      // printf("%d", notes_op);
      printf("\tQUE PENA QUE VOCÊ NÃO TENHA GOSTADO!\n\n");
      printf("O QUE PODEMOS MELHORAR?\n\nDigite sua sugestão: ");
      fgets(z, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 2:
      notes_op = notes_op + 2;
      lenght_op = lenght_op + 1;
      printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
      printf(" O QUE PODEMOS MELHORAR??\n\nDigite sua sugestão: ");
      fgets(x, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 3:
      notes_op = notes_op + 3;
      lenght_op = lenght_op + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;

    case 4:
      notes_op = notes_op + 4;
      lenght_op = lenght_op + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;
    }

    printf("\tJogos olímpicos de Paris 2024 \n\n");
    printf("O QUE VC ACHOU DE NOSSAS EXPOSIÇÕES? \n");
    printf("1 -> Péssimo \n");
    printf("2 -> Ruim\n");
    printf("3 -> Bom\n");
    printf("4 -> Excelente\n\n>>> ");

    scanf("%d", &oa);
    fflush(stdin);

    switch (oa) {
    case 1:
      notes_oa = notes_oa + 1;
      lenght_oa = lenght_oa + 1;
      printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
      printf(" O QUE PODEMOS MELHORAR??\n\nDigite sua sugestão: ");
      fgets(x, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 2:
      notes_oa = notes_oa + 2;
      lenght_oa = lenght_oa + 1;
      printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
      printf(" O QUE PODEMOS MELHORAR??\n\nDigite sua sugestão: ");
      fgets(x, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 3:
      notes_oa = notes_oa + 3;
      lenght_oa = lenght_oa + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;

    case 4:
      notes_oa = notes_oa + 4;
      lenght_oa = lenght_oa + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;
    }

    printf("\t150 anos de Santos Dumont \n\n");
    printf("O QUE VC ACHOU DE NOSSAS EXPOSIÇÕES? \n");
    printf("1 -> Péssima \n");
    printf("2 -> Ruim \n");
    printf("3 -> Boa \n");
    printf("4 -> Excelente\n\n>>> ");

    scanf("%d", &ol);
    fflush(stdin);

    switch (ol) {

    case 1:
      notes_ol = notes_ol + 1;
      lenght_ol = lenght_ol + 1;
      printf("\tQUE PENA QUE VOCÊ NÃO TENHA GOSTADO!\n\n");
      printf(" O QUE PODEMOS MELHORAR??\n\nDigite sua sugestão: ");
      fgets(z, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 2:
      notes_ol = notes_ol + 2;
      lenght_ol = lenght_ol + 1;
      printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
      printf(" O QUE PODEMOS MELHORAR?\n\nDigite sua sugestão: ");
      fgets(z, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 3:
      notes_ol = notes_ol + 3;
      lenght_ol = lenght_ol + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;

    case 4:
      notes_ol = notes_ol + 4;
      lenght_ol = lenght_ol + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;
    }
    
    printf("\tInteligência artificial\n\n");
    printf("O QUE VC ACHOU DE NOSSAS EXPOSIÇÕES? \n");
    printf("1 -> Péssima\n");
    printf("2 -> Ruim\n");
    printf("3 -> Boa\n");
    printf("4 -> Excelente\n\n>>> ");

    scanf("%d", &ou);
    fflush(stdin);

    switch (ou) {
    case 1:
      notes_ou = notes_ou + 1;
      lenght_ou = lenght_ou + 1;
      printf("\tQUE PENA QUE VOCÊ NÃO TENHA GOSTADO!\n\n");
      printf("O QUE PODEMOS MELHORAR?\n\nDigite sua sugestão: ");
      fgets(z, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 2:
      notes_ou = notes_ou + 2;
      lenght_ou = lenght_ou + 1;
      printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
      printf(" O QUE PODEMOS MELHORAR??\n\nDigite sua sugestão: ");
      fgets(x, 40, stdin);
      fflush(stdin);
      printf("\nObrigado pelo Feedback!!");
      sleep(1);
      system("cls");
      break;

    case 3:
      notes_ou = notes_ou + 3;
      lenght_ou = lenght_ou + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;

    case 4:
      notes_ou = notes_ou + 4;
      lenght_ou = lenght_ou + 1;
      printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
      sleep(1);
      system("cls");
      break;
    }
    
    controller = controller + 1;
  }
  nota(notes_op, lenght_op);
  nota(notes_oa, lenght_oa);
  nota(notes_ol, lenght_ol);
  nota(notes_ou, lenght_ou);
}
