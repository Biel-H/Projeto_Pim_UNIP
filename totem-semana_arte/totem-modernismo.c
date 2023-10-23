#include <stdio.h>
#include <locale.h>

int main(){
    char modernismo;
    char grand;

    setlocale (LC_ALL,"Portuguese");
    printf ("O modernismo surgiu por volta dos séculos XIX e XX, eles buscam olhar e desconstruir os sistemas estéticos da arte tradicional.\n");
	printf("Ela abraça especialmente a arquitetura, escultura, literatura e a pintura.\n");
	
    
    printf ("\n Modernismo surgiu por volta dos séculos? \n (A) X ?\n (B) XIX E XX ?\n (C) V ?\n\n <> ");
    
    scanf ("%c",&modernismo);
    fflush(stdin);

    switch (modernismo) {
        case 'a': 
            printf("\nIncorreto, a resposta certa é a (B)\n\n");
            break;
        case 'b' : 
            printf("\nCorreto!\n\n");
            break;
        case 'c' :
            printf("\nIncorreto, a resposta certa é a (B)\n\n");
        break;
    }
}