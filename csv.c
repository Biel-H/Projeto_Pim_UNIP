// #include <stdio.h>

// int main() {
//     // Definindo o array de frutas
//     const char *frutas[] = {"limão", "laranja", "morango", "Uva"};
//     int tamanho_array = sizeof(frutas) / sizeof(frutas[0]);

//     // Abrindo o arquivo CSV para escrita
//     FILE *fp = fopen("frutas.csv", "w");

//     if (fp == NULL) {
//         printf("Não foi possível abrir o arquivo.\n");
//         return 1;
//     }

//     // Escrevendo o cabeçalho no arquivo CSV
//     fprintf(fp, "Frutas\n");

//     // Escrevendo os elementos do array no arquivo CSV
//     for (int i = 0; i < tamanho_array; i++) {
//         fprintf(fp, "%s\n", frutas[i]);
//     }

//     // Fechando o arquivo
//     fclose(fp);

//     printf("Array exportado para frutas.csv com sucesso.\n");

//     return 0;
// }