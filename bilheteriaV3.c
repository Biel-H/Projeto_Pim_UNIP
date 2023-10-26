#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

int pagamento(){
    int formadepagamento, i1,i3;
    char i2[50];

    setlocale(LC_ALL, "Portuguese");

    printf("Para realizar a compra escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
    scanf("%d", &formadepagamento);
    fflush(stdin);
    system("cls");

    switch (formadepagamento){
    case 1:
        printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)\n\n");
    break;

    case 2:
        printf("Selecionado (Crédito)\n");
        printf("Digite o número do cartão: ");
        scanf("%d", &i1);
        printf("\nDigite o nome do proprietário do cartão: ");
        scanf("%s", i2);
        fflush(stdin);                       
        printf("\nDigite o CVV: ");
        scanf("%d", &i3);

        printf("\n");


        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        printf("\n");
        printf("Compra realizada!!\nObrigado e aproveite a sessão!\n\n");

    break;
        
    case 3:
        printf("Selecionado (Débito)\n");                      
        printf("Digite o número do cartão: ");
        scanf("%d", &i1);                            
        printf("\nDigite o nome do proprietário do cartão: ");
        scanf("%s", i2);
        fflush(stdin);                         
        printf("Digite o CVV: ");
        scanf("%d", &i3);        

        printf("\n");

        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500); 
        printf(".");
        printf("\nCompra realizada!!\nObrigado e aproveite a sessão!\n\n");
    break;
    }
    
}

int main(){
    
    int pi, qntd, value, ingressounico, tipodeentrada, multiingresso, i1, i2, i3;
    int i;

    setlocale(LC_ALL,"Portuguese");
    

    do{
        printf("Bem vindo a bilheteria do museu!\n\nO que deseja?\n\n[1] Comprar um ingresso\n[2] Ver as exposições disponíveis\n[3] Mais informações sobre os ingressos\n\n>>> ");
        scanf("%d", &pi);
        system("cls");

        switch(pi){
            case 1:
                printf("\nBem vindo a seção de ingressos!\nVocê deseja?\n\n[1] Comprar ingressos para uma única exposição\n[2] Comprar ingresso para duas ou mais exposições\n\n>>> ");
                scanf("%d", &qntd);
                fflush(stdin);
                system("cls");
                
                switch (qntd){
                    case 1:
                        printf("\nÓtimo!, você desejou comprar ingressos para apenas uma exposição. Escolha a que desejar:\n\n[1] 100 anos da semana de arte moderna\n[2] 150 anos de Santos Dumont\n[3] Jogos Olímpicos de Paris 2024\n[4] Inteligência Artificial\n\n>>> ");
                        scanf("%d", &ingressounico);
                        system("cls");

                        if(ingressounico == 1){
                            printf("\n");
                            printf("Incrível, 100 anos da semana de arte moderna é uma interessante escolha!\n\n");

                            printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos)\n\n>>> ");
                            scanf("%d", &tipodeentrada);
                            fflush(stdin);
                            system("cls");
                    
                            switch (tipodeentrada){
                                case 1:
                                    printf("Ótimo, você escolheu a entrada inteira. Prossiga para a parte do pagamento!\n");
                                    Sleep(800);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	printf("\nconcluido");
	                            	Sleep(200);
	                            	system("cls");
                                    pagamento();
                                break;
                    
                                case 2:
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                    printf("| Lembre-se que com a meia entrada a carteirinha deve ser apresentada na entrada do museu! |\n");
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                                    printf("Prossiga para o pagamento!\n\n");
                                    pagamento();
                                break;

                                case 3:
                                    printf("Para receber a isenção da entrada deve-se comprovar os seguintes itens:\n\n- Deve ter idade superior a 65 anos\n- Deve ter idade inferior a 12 anos\n");
                                break;
                            } 
                        }

                        else if(ingressounico == 2){
                            printf("Ótima escolha! 150 anos de Santos Dumont é uma exposição para os mais classicos amantes da historia dos inventores Brasileiros.\n\n");

                            printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos)\n\n>>> ");
                            scanf("%d", &tipodeentrada);
                            fflush(stdin);
                            system("cls");
                    
                            switch (tipodeentrada){
                                case 1:
                                    printf("Ótimo, você escolheu a entrada inteira. Prossiga para a parte do pagamento!");
                                    pagamento();
                                break;
                    
                                case 2:
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                    printf("| Lembre-se que com a meia entrada a carteirinha deve ser apresentada na entrada do museu! |\n");
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                                    printf("Prossiga para o pagamento!\n\n");
                                    pagamento();
                                break;

                                case 3:
                                    printf("Para receber a isenção da entrada deve-se comprovar os seguintes itens:\n\n- Deve ter idade superior a 65 anos\n- Deve ter idade inferior a 12 anos\n");
                                break;
                            }
                        }

                        else if(ingressounico == 3){
                            printf("Bem vindo a exposição dos Jogos Olímpicos. Esta é a seção dos verdadeiros amantes do esporte!!!\n\n");
                            printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos\n\n>>> ");
                            scanf("%d", &tipodeentrada);
                            fflush(stdin);
                            system("cls");
                        
                            switch (tipodeentrada){
                                case 1:
                                    printf("Ótimo, você escolheu a entrada inteira. Prossiga para a parte do pagamento!");
                                    pagamento();
                                break;
                        
                                case 2:
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                    printf("| Lembre-se que com a meia entrada a carteirinha deve ser apresentada na entrada do museu! |\n");
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                                    printf("Prossiga para o pagamento!\n\n");
                                    pagamento();
                                break;

                                case 3:
                                    printf("Para receber a isenção da entrada deve-se comprovar os seguintes itens:\n\n- Deve ter idade superior a 65 anos\n- Deve ter idade inferior a 12 anos\n");
                                break;
                            }
                        }

                        else if(ingressounico == 4){
                            printf("A mais nova exposição recentemente lançada no museu, escolher a sessão de Inteligência Artificial é uma viagem no futuro!!\n\n");
                            printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos\n\n>>> ");
                            scanf("%d", &tipodeentrada);
                            fflush(stdin);
                            system("cls");

                            switch (tipodeentrada){
                                case 1:
                                    printf("Ótimo, você escolheu a entrada inteira. Prossiga para a parte do pagamento!");
                                    pagamento();
                                break;
                        
                                case 2:
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                    printf("| Lembre-se que com a meia entrada a carteirinha deve ser apresentada na entrada do museu! |\n");
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                                    printf("Prossiga para o pagamento!\n\n");
                                    pagamento();
                                break;

                                case 3:
                                    printf("Para receber a isenção da entrada deve-se comprovar os seguintes itens:\n\n- Deve ter idade superior a 65 anos\n- Deve ter idade inferior a 12 anos\n");
                                break;
                            }
                        }

                        else{
                            printf("Você digitou um valor que não consta na lista, tente novamente e digite um valor valido!");
                        }
                    break;

                    case 2:
                        printf("Você desejou comprar ingressos para mais de uma exposição!\n\nNesta opção é possível comprar ingressos somente para 2, 3 ou 4 sessões!\n");
                        printf("As exposições disponíveis são:\n\t[1] 100 Anos da semana da arte moderna\n\t[2] 150 anos de Santos Dumont\n\t[3] Jogos Olímpicos de Paris 2024\n\t[4] Inteligência Artificial\n\n");
                        printf("Escolha se deseja comprar o ingresso para\n[1] 2 exposições\n[2] 3 exposições\n[3] Todas as exposições\n\n>>> ");
                        scanf("%d", &multiingresso);
                        fflush(stdin);
                        system("cls");

                        if (multiingresso == 1 ){
                            printf("As exposições disponíveis são:\n\t[1] 100 Anos da semana da arte moderna\n\t[2] 150 anos de Santos Dumont\n\t[3] Jogos Olímpicos de Paris 2024\n\t[4] Inteligência Artificial\n\n");
                            printf("Digite a primeira escoha: ");
                            scanf("%d", &i1);
                            fflush(stdin);
                            printf("\n");
                            printf("Digite a segunda escolha: ");
                            scanf("%d", &i2);
                            fflush(stdin);

                            printf("\n");
                            printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos)\n\n>>> ");
                            scanf("%d", &tipodeentrada);
                            fflush(stdin);
                            system("cls");
                            
                            switch (tipodeentrada){
                                case 1:
                                    printf("\nÓtimo, você escolheu a entrada inteira. Prossiga para a parte do pagamento!\n");
                                    Sleep(700);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	Sleep(500);
	                            	printf(".");
	                            	printf("\nconcluido");
	                            	Sleep(200);
	                            	system("cls");
                                    pagamento();
                                break;
                        
                                case 2:
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                    printf("| Lembre-se que com a meia entrada a carteirinha deve ser apresentada na entrada do museu! |\n");
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                                    printf("Prossiga para o pagamento!\n\n");
                                    Sleep(800);
                                    pagamento();
                                break;

                                case 3:
                                    printf("Para receber a isenção da entrada deve-se comprovar os seguintes itens:\n\n- Deve ter idade superior a 65 anos\n- Deve ter idade inferior a 12 anos\n");
                                break;
                            }
                        }

                        else if (multiingresso == 2 ){
                            printf("As exposições disponíveis são:\n\t[1] 100 Anos da semana da arte moderna\n\t[2] 150 anos de Santos Dumont\n\t[3] Jogos Olímpicos de Paris 2024\n\t[4] Inteligência Artificial\n\n");
                            printf("Digite a primeira escoha: ");
                            scanf("%d", &i1);
                            fflush(stdin);
                            printf("\n");
                            printf("Digite a segunda escolha: ");
                            scanf("%d", &i2);
                            fflush(stdin);
                            printf("\n");
                            printf("Digite a terceira escolha: ");
                            scanf("%d", &i3);
                            fflush(stdin);
                            printf("\n");
                            printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos)\n\n>>> ");
                            scanf("%d", &tipodeentrada);
                            fflush(stdin);
                            system("cls");
                            
                            switch (tipodeentrada){
                                case 1:
                                    printf("\nÓtimo, você escolheu a entrada inteira. Prossiga para a parte do pagamento!\n");
                                    Sleep(700);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	Sleep(500);
	                            	printf(".");
	                            	printf("\nconcluido\n");
	                            	Sleep(200);
	                            	system("cls");
                                    pagamento();
                                break;
                        
                                case 2:
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                    printf("| Lembre-se que com a meia entrada a carteirinha deve ser apresentada na entrada do museu! |\n");
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                                    printf("Prossiga para o pagamento!\n\n");
                                    Sleep(800);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	printf("\nconcluido");
	                            	Sleep(200);
	                            	system("cls");
                                    pagamento();
                                break;

                                case 3:
                                    printf("Para receber a isenção da entrada deve-se comprovar os seguintes itens:\n\n- Deve ter idade superior a 65 anos\n- Deve ter idade inferior a 12 anos\n");
                                break;
                            }
                        }

                        else if (multiingresso == 3 ){
                            printf("As exposições disponíveis são:\n\t[1] 100 Anos da semana da arte moderna\n\t[2] 150 anos de Santos Dumont\n\t[3] Jogos Olímpicos de Paris 2024\n\t[4] Inteligência Artificial\n\n");
                            printf("\tIngressos escolhidos para todas as sessões!\n\n");
							printf("\n");
                            printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos)\n\n>>> ");
                            scanf("%d", &tipodeentrada);
                            fflush(stdin);
                            system("cls");
                            
                            switch (tipodeentrada){
                                case 1:
                                    printf("\nÓtimo, você escolheu a entrada inteira. Prossiga para a parte do pagamento!\n");
                                    Sleep(700);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	Sleep(500);
	                            	printf(".");
	                            	printf("\nconcluido");
	                            	Sleep(200);
	                            	system("cls");
                                    pagamento();
                                break;
                        
                                case 2:
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                    printf("| Lembre-se que com a meia entrada a carteirinha deve ser apresentada na entrada do museu! |\n");
                                    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                                    printf("Prossiga para o pagamento!\n\n");
                                    Sleep(800);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	Sleep(800);
	                            	printf(".");
	                            	printf("\nconcluido");
	                            	Sleep(200);
	                            	system("cls");
                                    pagamento();
                                break;

                                case 3:
                                    printf("Para receber a isenção da entrada deve-se comprovar os seguintes itens:\n\n- Deve ter idade superior a 65 anos\n- Deve ter idade inferior a 12 anos\n");
                                break;
                            }
                        }

                    break;
                }
            break;

            case 2:
                printf("\nOk, essas são as sessões disponíveis:\n\n - 100 anos da semana de arte moderna\n - 150 anos de Santos Dumont\n - Jogos Olímpicos de Paris 2024\n - Inteligência Artificial\n"); 
            break;

            case 3:
                printf("\tAqui esta a tabela com o preço dos ingressos:\n");
                printf(" _________________________\n");
                printf("| Inteira: R$ 10,00         |\n");
                printf("|                         |\n");
                printf("| Meia: R$ 5,00            |\n");
                printf("|_________________________|\n");
            break;
        }
		printf("\n\t\tDeseja voltar ao inicio ou encerrar?\n\n");
        printf("[1] Voltar ao inicio\n[2] Encerrar\n\n>>> ");
        scanf ("%d", &value);
        fflush(stdin);
        system("cls");
    }while (value == 1);
}