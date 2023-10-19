#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int op, oa, ol;
	char x[40];
 	char z[40];
	
	setlocale(LC_ALL,"Portuguese");
    
    printf("\tOBRIGADO POR NOS VISITAR, SE POSSIVEL DEIXE SUA AVALIAÇÃO ABAIXO. \n\n");   
    system("pause");
    system("cls");
	printf("100 anos da semana de arte moderna\n");
    printf("O QUE VOCÊ ACHOU DE NOSSAS EXPOSIÇÕES? \n");
    printf("1 -> EXCELENTE \n");
    printf("2 -> BOA \n");
    printf("3 -> RUIM \n");
    printf("4 -> PÉSSIMA\n\n>>> ");

    scanf("%d", &op);
    fflush(stdin);
    
    //while(op<=0&&op>=5){
	    switch(op){	
	        case 1:
	        	printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
	        	Sleep(700);
	        	system("cls");
			break;
	              
	        case 2: 
	            printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
	            Sleep(700);
	        	system("cls");
	        break;
	              
	        case 3:
	            printf("\tQUE PENA QUE VOCÊ NÃO TENHA GOSTADO!\n\n");
	            printf(" O QUE PODEMOS MELHORAR?\n\n");
	            fgets(z, 40, stdin);
	            fflush(stdin);
	            printf("Obrigado pelo Feedback!!");
	            Sleep(700);
	            system("cls");
	        break;
	        
	        case 4:
	        	printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
	            printf(" O QUE PODEMOS MELHORAR??\n\n"); 
	            fgets(x, 40, stdin);
	            fflush(stdin);
	        	printf("Obrigado pelo Feedback!!");
	            Sleep(700);
	            system("cls");
	        break;   
		}                

    printf("\tJogos olímpicos de Paris 2024 \n\n");
    printf("O QUE VC ACHOU DE NOSSAS EXPOSIÇÕES? \n");
    printf("1 -> EXCELENTE \n");
    printf("2 -> BOA \n");
    printf("3 -> RUIM \n");
    printf("4 -> PÉSSIMA\n\n>>> ");

    
    scanf("%d", &oa);
    fflush(stdin);

    switch(oa){
        case 1:
            printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
	        Sleep(700);
	        system("cls");
        break;
              
        case 2: 
        	printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
	        Sleep(700);
	        system("cls");
        break;
              
        case 3:
            printf("\tQUE PENA QUE VOCÊ NÃO TENHA GOSTADO!\n\n");
            printf("O QUE PODEMOS MELHORAR?\n\n");
            fgets(z, 40, stdin);
	        fflush(stdin);
	        printf("Obrigado pelo Feedback!!");
	        Sleep(700);
	        system("cls");
        break;
        
        case 4:
	        printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
	        printf(" O QUE PODEMOS MELHORAR??\n\n"); 
	        fgets(x, 40, stdin);
	        fflush(stdin);
	        printf("Obrigado pelo Feedback!!");
	        Sleep(700);
	        system("cls");
        break;	    
}
  

    printf("\t150 anos de Santos Dumont \n\n");
    printf("O QUE VC ACHOU DE NOSSAS EXPOSIÇÕES? \n");
    printf("1 -> EXCELENTE \n");
    printf("2 -> BOA \n");
    printf("3 -> RUIM \n");
    printf("4 -> PÉSSIMA\n\n>>> ");

    scanf("%d", &ol);
    fflush(stdin);

    switch(ol){
    	
        case 1:
            printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
	        Sleep(700);
	        system("cls");
        break;
              
        case 2: 
        	printf("\tOBRIGADO! FICAMOS FELIZ QUE VOCÊ TENHA GOSTADO!\n\n");
	        Sleep(700);
	        system("cls");
        break;
              
        case 3:
            printf("\tQUE PENA QUE VOCÊ NÃO TENHA GOSTADO!\n\n");
            printf(" O QUE PODEMOS MELHORAR??\n\n");
            fgets(z, 40, stdin);
	        fflush(stdin);
	        printf("Obrigado pelo Feedback!!");
	        Sleep(700);
	        system("cls");
        break;
              
        case 4:
        	printf("\tQUE PENA QUE VC NAO TENHA GOSTADO!\n\n");
            printf(" O QUE PODEMOS MELHORAR?\n\n");
            fgets(z, 40, stdin);
	        fflush(stdin);
	        printf("Obrigado pelo Feedback!!");
	        Sleep(700);
	        system("cls");
        break;
        }
    //}

	
}