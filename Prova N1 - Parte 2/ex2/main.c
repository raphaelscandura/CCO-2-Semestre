//Aluno: Raphael Scandura da Cunha
//  Comentários: O código inteiro foi testado inumeras vezes com entradas diferentes em compiladores diferentes, tanto no repl.it quanto no codeblocks, qualquer divergência, favor entrar em contato
//-------------------------------------------------------------------------------------------------------------------------------------

// Upgrade obrigatório #1: Não diferenciar letras maiúsculas e minúsculas, assim contabilizado em contadores distintos

//  Lógica executada:
//      A função calcularOcorrencias() se encontra na biblioteca externa, com o código fonte localizado no arquivo "funcoes_ocorrencias.c". Essa função recebe como parâmetro um vetor de chars de 200
//  colunas e realiza um loop FOR para verificar se a entrada do usuário é uma letra, e qual letra (seja ela maiúscula ou minúscula). Essa função trabalha com outro vetor, que se chama "ocorrências"
//  esse vetor tem 26 colunas, todas elas com valor inicial de zero, e caso, durante o FOR, um caractere inserido seja correspondente a uma letra do alfabeto maíscula ou minuscula, é adicionado uma unidade
//  na coluna correspondente à posição da letra do alfabeto. Depois de calcular as ocorrências de letras correspondentes na entrada do usuário, é hora de imprimir os resultados, usando a função externa
//  imprimirResultados(), que tem dois loops FOR, um que imprime as letras do alfabeto(vetor alfabeto de 26 colunas presetado com as letras do alfabeto), e o outro que imrpime a quantidade de vezes que
//  essa letra apareceu na entrada do usuário.

//  Upgrade obrigatório #2: Ignorar qualquer Enter ou \n no texto digitado pelo usuário (1 ponto). Para finalizar a digitação,
//  escolha outro critério.

//  Lógica executada:
//      Na main, a função responsável por isso é a "leituraDaEntradaDoUsuario()", que está também localizada no arquivo externo "funcoes_ocorrencias.c". Nessa função, eu uso um loop while
//  que tem como prâmetro função getchar(), que por sua vez irá pegar cada entrada do usuário e verificar se é igual a "#", o loop HILE se repete até o usuário entrar o caractere especial, ou atingir
//  o limite de caracteres, dessa forma, ele pode digitar o que quiser, e apertar enter o quanto for necessário, que a função só vai parar quando atingir o limite de caracteres ou o usuário
//  digitar #. Essa função retorna um ponteiro que aponta para a variável estática stringTexto, e então, na main, eu igualo o endereço de memória que o ponteiroTexto aponta com o da variável
//  da função. Por fim, copio a string do ponteiro para o vetor texto usando a função strcpy e envio para a função que calcula as ocorrências.

//  Upgrade livre #3: Criação de uma biblioteca externa para armazenar as funções

//  Lógica executada:
//      Um bom exemplo de uso das boas práticas é a criação de um arquivo cabeçalho para o armazenamento das funções do código. O programa redigido abaixo é consideravelmente extenso
//  um total aproximado de 120+ linhas que foram reduzidos para 14 na main. Isso melhora a visualização e manutenção do código, principalmente pelo fato das funções terem nomes
//  intuitivos e explícitos. Para a implementeção desse upgrade foi necessário a criação do arquivo "funcoes_ocorrencias.h", sendo ele o arquivo cabeçalho, onde as funções vão ser declaradas
//  para serem importadas para a main, e em seguida a criação do arquivo fonte "funcoes_ocorrencias.c", que contém a propriedade intelectual das funções do cabeçalho. Após a criação dos dois
//  arquivos externos, eu criei 3 funções (declaradas no header e redigidas no arquivo ".c") que foram implementadas na main usando o #include "funcoes_ocorrencias.h".

//  Upgrade livre #4: Validação de quantidade de caractéres

//  Lógica executada:
//      Tanto no enunciado da questão, quanto no executável do repl.it, não é proposto uma validação concreta na quantidade de caractéres que serão contabilizados. Se eu inserir mais de 200
//  caracteres no arquivo executável ele apresenta o seguinte erro: "Segmentation fault (core dumped)" e encerra a execução. Isso pode ser resolvido com uma validação de caracteres. Eu fiz
//  da seguinte maneira, durante a leitura das entradas do usuário, toda vez que ele entra com um valor no getchar e esse valor é salvo em uma posição do vetor stringTexto, ele passa por um contador
//  esse contador se autoincrementa toda vez que essa ação é realizada com sucesso, então quando essa ação for realizada com sucesso 200 vezes (200 caracteres salvos no vetor) a condicional IF
//  retorna um valor falso, e passa para o ELSE, que por sua vez imprime uma mensagem de erro pro usuário e encerra a execução com a função exit(0).

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
