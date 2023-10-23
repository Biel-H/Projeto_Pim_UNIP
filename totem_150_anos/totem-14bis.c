#include <stdio.h>
#include <locale.h>

int main(){
    char dumont;
    char grand;

    setlocale (LC_ALL,"Portuguese");
    printf ("o avião 14 bis com essa invenção revolucionou o mundo e a aeronáutica para sempre.");
	printf("Em 23 de outubro de 1906 fez seu primeiro voo na cidade de Paris. Com isso");
	printf("conquistou o prêmio Archdeacon (Comissão Cientifica do Aero Club).\n");
    
    printf ("\n Em que dia Santos Dumont fez seu primeiro voo com o 14bis? \n (A)  26 de outubro de 1907?\n (B) 23 de novembro de 1906?\n (C) 23 de outubro de 1906?\n\n <> ");
    
    scanf ("%c",&dumont);
    fflush(stdin);

    switch (dumont) {
        case 'a': 
            printf ("\nIncorreto\n\n");
            break;
        case 'b' : 
            printf("\nIncorreto, a resposta certa é a (C)\n\n");
            break;
        case 'c' :
            printf("\nCorreto!\n\n");
        break;
    }
}