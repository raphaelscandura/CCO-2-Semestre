#include "funcoes_ocorrencias.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define tamanhoAlfabeto 26

int cont, ocorrencias[tamanhoAlfabeto] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
char alfabeto[tamanhoAlfabeto] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T','U', 'V', 'W', 'X', 'Y', 'Z'};

void calcularOcorrencias (char texto[200]){

    for(cont = 0;cont < strlen(texto);cont++){
        if(texto[cont] == 'a' || texto[cont] == 'A'){
          ocorrencias[0] += 1;
        }
        if(texto[cont] == 'b' || texto[cont] == 'B'){
          ocorrencias[1] += 1;
        }
        if(texto[cont] == 'c' || texto[cont] == 'C'){
          ocorrencias[2] += 1;
        }
        if(texto[cont] == 'd' || texto[cont] == 'D'){
          ocorrencias[3] += 1;
        }
        if(texto[cont] == 'e' || texto[cont] == 'E'){
          ocorrencias[4] += 1;
        }
        if(texto[cont] == 'f' || texto[cont] == 'F'){
          ocorrencias[5] += 1;
        }
        if(texto[cont] == 'g' || texto[cont] == 'G'){
          ocorrencias[6] += 1;
        }
        if(texto[cont] == 'h' || texto[cont] == 'H'){
          ocorrencias[7] += 1;
        }
        if(texto[cont] == 'i' || texto[cont] == 'I'){
          ocorrencias[8] += 1;
        }
        if(texto[cont] == 'j' || texto[cont] == 'J'){
          ocorrencias[9] += 1;
        }
        if(texto[cont] == 'k' || texto[cont] == 'K'){
          ocorrencias[10] += 1;
        }
        if(texto[cont] == 'l' || texto[cont] == 'L'){
          ocorrencias[11] += 1;
        }
        if(texto[cont] == 'm' || texto[cont] == 'M'){
          ocorrencias[12] += 1;
        }
        if(texto[cont] == 'n' || texto[cont] == 'N'){
          ocorrencias[13] += 1;
        }
        if(texto[cont] == 'o' || texto[cont] == 'O'){
          ocorrencias[14] += 1;
        }
        if(texto[cont] == 'p' || texto[cont] == 'P'){
          ocorrencias[15] += 1;
        }
        if(texto[cont] == 'q' || texto[cont] == 'Q'){
          ocorrencias[16] += 1;
        }
        if(texto[cont] == 'r' || texto[cont] == 'R'){
          ocorrencias[17] += 1;
        }
        if(texto[cont] == 's' || texto[cont] == 'S'){
          ocorrencias[18] += 1;
        }
        if(texto[cont] == 't' || texto[cont] == 'T'){
          ocorrencias[19] += 1;
        }
        if(texto[cont] == 'u' || texto[cont] == 'U'){
          ocorrencias[20] += 1;
        }
        if(texto[cont] == 'v' || texto[cont] == 'V'){
          ocorrencias[21] += 1;
        }
        if(texto[cont] == 'w' || texto[cont] == 'W'){
          ocorrencias[22] += 1;
        }
        if(texto[cont] == 'x' || texto[cont] == 'X'){
          ocorrencias[23] += 1;
        }
        if(texto[cont] == 'y' || texto[cont] == 'Y'){
          ocorrencias[24] += 1;
        }
        if(texto[cont] == 'z' || texto[cont] == 'Z'){
          ocorrencias[25] += 1;
        }
      }
}

void imprimirResultados(){
    printf("\nOcorrencias\n");
    for(cont = 0; cont < tamanhoAlfabeto;cont++){
        printf("|%c ", alfabeto[cont]);
    }
    printf("\n");
    for(cont = 0; cont < tamanhoAlfabeto;cont++){
        printf("|%i ", ocorrencias[cont]);
    }
    printf("\n");
}

char *leituraDaEntradaDoUsuario(){
    static char stringTexto[200];
    int caractereDigitado, cont = 0;

    while ((caractereDigitado = getchar()) != '#' && cont <= 201) {
        if(cont <= 200){
            stringTexto[cont] = caractereDigitado;
            cont++;
        }else{
            printf("\nVoce deve digitar no maximo 200 caracteres\n");
            exit(0);
        }
    }

return stringTexto;
}
