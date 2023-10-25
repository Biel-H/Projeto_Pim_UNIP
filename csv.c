#include <stdio.h>

int main() {
    // Definindo o array de frutas
    const char *frutas[4] = {"1, Gabriel, 28/02/2004", "2, Vitor, 6/06/2001", "3, Ryan, 28/04/2000", "4, Giovani, 12/12/2010"};
    int tamanho_array = sizeof(frutas) / sizeof(frutas[0]);
    int i;

    // Abrindo o arquivo CSV para escrita
    FILE *fp = fopen("users.csv", "w");

    if (fp == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    // Escrevendo o cabeçalho no arquivo CSV
    fprintf(fp, "cpf, nome, email\n");

    // Escrevendo os elementos do array no arquivo CSV
    for (i = 0; i < tamanho_array; i++) {
        //for(j=0; j < ; i++){
            fprintf(fp, "%s\n", frutas[i]);
        //}
    }

    // Fechando o arquivo
    fclose(fp);
    printf("Array exportado para frutas.csv com sucesso.\n");
    return 0;
}