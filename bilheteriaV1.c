#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

#define N 50
//int ingresso(){
//}



int main(){
    int expo, pi, qntd, value, ingressounico, ingressomais, tipodeentrada, formadepagamento, i1, i3, s1, s2, st;
    char i2[N];
    setlocale(LC_ALL, "Portuguese");

    do{

    printf("Bem vindo a bilheteria do museu!\n\nO que deseja?\n\n[1] Comprar um ingresso\n[2] Ver as exposições disponíveis\n[3] Mais informações sobre os ingressos\n\n>>> ");
    scanf("%d", &pi);
    system("cls");

        switch (pi)
        {
        case 1:
            printf("\nBem vindo a seção de ingressos!\nVocê deseja?\n\n[1] Comprar ingressos para uma única exposição\n[2] Comprar ingresso para duas ou mais exposições\n\n>>> ");
            scanf("%d", &qntd);
            fflush(stdin);
            system("cls");

            switch (qntd)
            {
            case 1:
                printf("\nÓtimo!, você desejou comprar ingressos para apenas uma exposição. Escolha a que desejar:\n\n[1] 100 anos da semana de arte moderna\n[2] 150 anos de Santos Dumont\n[3] Jogos Olímpicos de Paris 2024\n[4] Inteligência Artificial\n\n>>> ");
                scanf("%d", &ingressounico);
                system("cls");

                switch (ingressounico)
                {
                case 1:
                    printf("\n");
                    printf("Incrível, 100 anos da semana de arte moderna é uma interessante escolha!\n\n");

                    printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos)\n>>> ");
                    scanf("%d", &tipodeentrada);
                    fflush(stdin);
                    system("cls");

                    switch (tipodeentrada)
                    {
                    case 1:
                        printf("Para entrada inteira escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
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
                            printf("Compra realizada!!\nObrigado e aproveite a sessão!");

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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                            break;
                        }
                    break;
                    
                    case 2:
                        printf("---------------------------------------------------------------------------\n");
                        printf("O comprovante de meia entrada deverá ser apresentada na hora da entrada. |\n");
                        printf("---------------------------------------------------------------------------\n\n");
                        printf("Para a meia entrada escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
                        break;

                        case 2:
                            printf("Selecionado (Crédito)\n");                           
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
                            printf("\nCompra realizada!!\n\nObrigado e aproveite a sessão!");

                        break;
                        
                        case 3:
                            printf("Selecionado (Débito)\n");
                            printf("Digite o número do cartão: ");
                            scanf("%d", i1);
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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                        break;
                        }
                    case 3:
                        printf("Você selecionou a opção de isenção de taxa.\n");
                        printf("A isenção ocorre em casos de crianças menores de 12 anos e para idosos acima de 65\n\nLembre-se que você deve apresentar o RG na entrada para a confirmação da isenção");
                    break;
                    }
                break;

                case 2:
                    printf("\n");
                    printf("Ótima escolha! 150 anos de Santos Dumont é uma exposição para os mais classicos amantes da historia dos inventores Brasileiros.\n\n");
                    
                    printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos\n>>> ");
                    scanf("%d", &tipodeentrada);
                    fflush(stdin);
                    system("cls");

                    switch (tipodeentrada)
                    {
                    case 1:
                         printf("Para entrada inteira escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
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
                            printf("Compra realizada!!\nObrigado e aproveite a sessão!");

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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                            break;
                        }
                    break;
                    
                    case 2:
                        printf("---------------------------------------------------------------------------\n");
                        printf("O comprovante de meia entrada deverá ser apresentada na hora da entrada. |\n");
                        printf("---------------------------------------------------------------------------\n\n");
                        printf("Para a meia entrada escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
                        break;

                        case 2:
                            printf("Selecionado (Crédito)\n");                           
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
                            printf("\nCompra realizada!!\n\nObrigado e aproveite a sessão!");

                        break;
                        
                        case 3:
                            printf("Selecionado (Débito)\n");
                            printf("Digite o número do cartão: ");
                            scanf("%d", i1);
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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                        break;
                        }
                    case 3:
                        printf("Você selecionou a opção de isenção de taxa.\n");
                        printf("A isenção ocorre em casos de crianças menores de 12 anos e para idosos acima de 65\n\nLembre-se que você deve apresentar o RG na entrada para a confirmação da isenção");
                    break;
                    }
                break;

                case 3:
                    printf("Bem vindo a exposição dos Jogos Olímpicos. Esta é a seção dos verdadeiros amantes do esporte!!!\n\n");
                    printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos\n>>> ");
                    scanf("%d", &tipodeentrada);
                    fflush(stdin);
                    system("cls");

                    switch (tipodeentrada)
                    {
                    case 1:
                         printf("Para entrada inteira escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
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
                            printf("Compra realizada!!\nObrigado e aproveite a sessão!");

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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                            break;
                        }
                    break;
                    
                    case 2:
                        printf("---------------------------------------------------------------------------\n");
                        printf("O comprovante de meia entrada deverá ser apresentada na hora da entrada. |\n");
                        printf("---------------------------------------------------------------------------\n\n");
                        printf("Para a meia entrada escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
                        break;

                        case 2:
                            printf("Selecionado (Crédito)\n");                           
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
                            printf("\nCompra realizada!!\n\nObrigado e aproveite a sessão!");

                        break;
                        
                        case 3:
                            printf("Selecionado (Débito)\n");
                            printf("Digite o número do cartão: ");
                            scanf("%d", i1);
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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                        break;
                        }
                    case 3:
                        printf("Você selecionou a opção de isenção de taxa.\n");
                        printf("A isenção ocorre em casos de crianças menores de 12 anos e para idosos acima de 65\n\nLembre-se que você deve apresentar o RG na entrada para a confirmação da isenção");
                    break;
                    }
                break;

                case 4:
                    printf("A mais nova exposição recentemente lançada no museu, escolher a sessão de Inteligência Artificial é uma viagem no futuro!!\n\n");
                    printf("Qual será o seu tipo de entrada?\n[1] Inteira\n[2] Meia\n[3] Isenção (Para crianças menores de 12 anos e idosos maiores de 65 anos\n>>> ");
                    scanf("%d", &tipodeentrada);
                    fflush(stdin);
                    system("cls");

                    switch (tipodeentrada)
                    {
                    case 1:
                         printf("Para entrada inteira escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
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
                            printf("Compra realizada!!\nObrigado e aproveite a sessão!");

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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                            break;
                        }
                    break;
                    
                    case 2:
                        printf("---------------------------------------------------------------------------\n");
                        printf("O comprovante de meia entrada deverá ser apresentada na hora da entrada. |\n");
                        printf("---------------------------------------------------------------------------\n\n");
                        printf("Para a meia entrada escolha a forma de pagamento: \n[1] Dinheiro\n[2] Crédito\n[3] Débito\n\n>>> ");
                        scanf("%d", &formadepagamento);
                        fflush(stdin);
                        system("cls");

                        switch (formadepagamento)
                        {
                        case 1:
                            printf("Para pagamentos em dinheiro dirija-se aos balcões da bilheteria (física)");
                        break;

                        case 2:
                            printf("Selecionado (Crédito)\n");                           
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
                            printf("\nCompra realizada!!\n\nObrigado e aproveite a sessão!");

                        break;
                        
                        case 3:
                            printf("Selecionado (Débito)\n");
                            printf("Digite o número do cartão: ");
                            scanf("%d", i1);
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
                            printf("\nCompra realizada!!\nObrigado e aproveite a sessão!");
                        break;
                        }
                    case 3:
                        printf("Você selecionou a opção de isenção de taxa.\n");
                        printf("A isenção ocorre em casos de crianças menores de 12 anos e para idosos acima de 65\n\nLembre-se que você deve apresentar o RG na entrada para a confirmação da isenção");
                    break;
                    }
                break;
                }
            break;

            case 2:
            printf("\nVocê deseja comprar ingressos para mais de uma exposição.\n\nÉ possível escolher ingresso para 2 sessõoes ou para todas\n\n[1] Escolher ingresso para duas sessões\n[2] Escolher ingresso para todas as sesssões\n");
            scanf("%d", &ingressomais);
            system("cls");
            if (ingressomais == 1)
            {
                printf("As sessões disponíveis são:\n\n[1] 100 anos da semana de arte moderna\n[2] 150 anos de Santos Dumont\n[3] Jogos Olímpicos de Paris 2024\n[4] Inteligência Artificial\n\n");
                printf("Escolha a primeira sessão: \n");
                scanf("%d", &s1);
    
                scanf("%d",&s2);
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
            printf("| Inteira: R$ xxx         |\n");
            printf("|                         |\n");
            printf("| Meia: R$ xxx            |\n");
            printf("|_________________________|\n");

        break;
        }
        printf("\nDeseja voltar ao inicio ou encerrar?\n\n[1] Voltar ao inicio\n[2] Encerrar\n\n>>> ");
        scanf ("%d", &value);
        fflush(stdin);
        system("cls");

    }while (value == 1);

}