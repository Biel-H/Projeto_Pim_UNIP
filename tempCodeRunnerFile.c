#include <stdio.h>
#include <locale.h>


int pagamento(){

    int formadepagamento, i1,i3;
    char i2[50];

    setlocale(LC_all, "Portuguese");

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

}

int main(){
    
    int a, n1,n2;

    setlocale(LC_All,"Portuguese");
    
    printf("Olá digite a sessão que deseja ir:\n\n[1] 100 anos da semana de arte moderna\n[2] 150 anos de Santos Dumont\n[3] Jogos Olímpicos de Paris 2024\n[4] Inteligência Artificial");
    scanf("%d", &n1);

    printf("Agora com a sessão escolhida vamos ao pagamento");
    pagamento();

}