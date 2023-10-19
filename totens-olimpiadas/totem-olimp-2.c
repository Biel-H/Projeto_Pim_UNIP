#include <stdio.h>
#include <locale.h>

int main(){
    char olimpico;
    char grand;

    setlocale (LC_ALL,"Portuguese");
    
    printf ("No coração de Paris, o Grand Palais sediará vários eventos olímpicos e paraolímpicos em 2024.");


    printf ("\n\nQuais esportes ocorrerão no Grand Palais nos jogos olímpicos de 2024?\n\n (A) Esgrima e Taekwondo\n (B) Canoagem Slalom\n (C) Vôlei de areia\n\n <> ");
    scanf ("%c", &grand);
    switch (grand) {
        
        case 'a' :
            printf ("\nCorreto!\n\n");
        break;
        case 'b' :
            printf ("\nIncorreto, a resposta certa é a (A)\n\n");
        break;
        case 'c' : 
            printf ("\nIncorreto, a resposta certa é a (A)\n\n");
        break;
    }
}