//Aluno: Raphael Scandura da Cunha
//  Coment�rios: O c�digo inteiro foi testado inumeras vezes com entradas diferentes em compiladores diferentes, tanto no repl.it quanto no codeblocks, qualquer diverg�ncia, favor entrar em contato
//-------------------------------------------------------------------------------------------------------------------------------------

// Upgrade obrigat�rio #1: N�o diferenciar letras mai�sculas e min�sculas, assim contabilizado em contadores distintos

//  L�gica executada:
//      A fun��o calcularOcorrencias() se encontra na biblioteca externa, com o c�digo fonte localizado no arquivo "funcoes_ocorrencias.c". Essa fun��o recebe como par�metro um vetor de chars de 200
//  colunas e realiza um loop FOR para verificar se a entrada do usu�rio � uma letra, e qual letra (seja ela mai�scula ou min�scula). Essa fun��o trabalha com outro vetor, que se chama "ocorr�ncias"
//  esse vetor tem 26 colunas, todas elas com valor inicial de zero, e caso, durante o FOR, um caractere inserido seja correspondente a uma letra do alfabeto ma�scula ou minuscula, � adicionado uma unidade
//  na coluna correspondente � posi��o da letra do alfabeto. Depois de calcular as ocorr�ncias de letras correspondentes na entrada do usu�rio, � hora de imprimir os resultados, usando a fun��o externa
//  imprimirResultados(), que tem dois loops FOR, um que imprime as letras do alfabeto(vetor alfabeto de 26 colunas presetado com as letras do alfabeto), e o outro que imrpime a quantidade de vezes que
//  essa letra apareceu na entrada do usu�rio.

//  Upgrade obrigat�rio #2: Ignorar qualquer Enter ou \n no texto digitado pelo usu�rio (1 ponto). Para finalizar a digita��o,
//  escolha outro crit�rio.

//  L�gica executada:
//      Na main, a fun��o respons�vel por isso � a "leituraDaEntradaDoUsuario()", que est� tamb�m localizada no arquivo externo "funcoes_ocorrencias.c". Nessa fun��o, eu uso um loop while
//  que tem como pr�metro fun��o getchar(), que por sua vez ir� pegar cada entrada do usu�rio e verificar se � igual a "#", o loop HILE se repete at� o usu�rio entrar o caractere especial, ou atingir
//  o limite de caracteres, dessa forma, ele pode digitar o que quiser, e apertar enter o quanto for necess�rio, que a fun��o s� vai parar quando atingir o limite de caracteres ou o usu�rio
//  digitar #. Essa fun��o retorna um ponteiro que aponta para a vari�vel est�tica stringTexto, e ent�o, na main, eu igualo o endere�o de mem�ria que o ponteiroTexto aponta com o da vari�vel
//  da fun��o. Por fim, copio a string do ponteiro para o vetor texto usando a fun��o strcpy e envio para a fun��o que calcula as ocorr�ncias.

//  Upgrade livre #3: Cria��o de uma biblioteca externa para armazenar as fun��es

//  L�gica executada:
//      Um bom exemplo de uso das boas pr�ticas � a cria��o de um arquivo cabe�alho para o armazenamento das fun��es do c�digo. O programa redigido abaixo � consideravelmente extenso
//  um total aproximado de 120+ linhas que foram reduzidos para 14 na main. Isso melhora a visualiza��o e manuten��o do c�digo, principalmente pelo fato das fun��es terem nomes
//  intuitivos e expl�citos. Para a implemente��o desse upgrade foi necess�rio a cria��o do arquivo "funcoes_ocorrencias.h", sendo ele o arquivo cabe�alho, onde as fun��es v�o ser declaradas
//  para serem importadas para a main, e em seguida a cria��o do arquivo fonte "funcoes_ocorrencias.c", que cont�m a propriedade intelectual das fun��es do cabe�alho. Ap�s a cria��o dos dois
//  arquivos externos, eu criei 3 fun��es (declaradas no header e redigidas no arquivo ".c") que foram implementadas na main usando o #include "funcoes_ocorrencias.h".

//  Upgrade livre #4: Valida��o de quantidade de caract�res

//  L�gica executada:
//      Tanto no enunciado da quest�o, quanto no execut�vel do repl.it, n�o � proposto uma valida��o concreta na quantidade de caract�res que ser�o contabilizados. Se eu inserir mais de 200
//  caracteres no arquivo execut�vel ele apresenta o seguinte erro: "Segmentation fault (core dumped)" e encerra a execu��o. Isso pode ser resolvido com uma valida��o de caracteres. Eu fiz
//  da seguinte maneira, durante a leitura das entradas do usu�rio, toda vez que ele entra com um valor no getchar e esse valor � salvo em uma posi��o do vetor stringTexto, ele passa por um contador
//  esse contador se autoincrementa toda vez que essa a��o � realizada com sucesso, ent�o quando essa a��o for realizada com sucesso 200 vezes (200 caracteres salvos no vetor) a condicional IF
//  retorna um valor falso, e passa para o ELSE, que por sua vez imprime uma mensagem de erro pro usu�rio e encerra a execu��o com a fun��o exit(0).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes_ocorrencias.h"

int main()
{
    char texto[201], *ponteiroTexto;


    printf("Digite seu texto de ate 200 caracteres, digite # e ENTER para parar \n");

    ponteiroTexto = leituraDaEntradaDoUsuario();

    strcpy(texto,ponteiroTexto);
    calcularOcorrencias(texto);
    imprimirResultados();

return 0;
}
