#include <stdio.h>
#include <locale.h>

int main(){
    char olimpico;
    char grand;

    setlocale (LC_ALL,"Portuguese");
    printf ("O Champ-de-Mars, aos pés da torre Eiffel, sediará o torneio olímpico de volei de praia durante os jogos olímpicos de 2024.\n");
    
    printf ("Se baseando nas informações acima, quantas vezes o país da França já sediou os jogos olímpicos ?\n \n (A) 1990 e 1924\n (B) 2000 e 1992\n (C) Apenas 2024\n\n <> ");
    
    scanf ("%c",&olimpico);
    fflush(stdin);

    switch (olimpico) {
        case 'a': 
            printf ("\nCorreto!\n\n");
            break;
        case 'b' : 
            printf("\nIncorreto, a resposta certa é a (A)\n\n");
            break;
        case 'c' :
            printf("\nIncorreto, a resposta certa é a (A)\n\n");
        break;
    }
}