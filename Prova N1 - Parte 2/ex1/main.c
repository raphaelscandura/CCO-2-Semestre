//Aluno: Raphael Scandura da Cunha
//  Coment�rios: O c�digo inteiro foi testado inumeras vezes com entradas diferentes em copiladores diferentes, tanto no repl.it quanto no codeblocks, qualquer diverg�ncia, favor entrar em contato
//-------------------------------------------------------------------------------------------------------------------------------------
//  Upgrade obrigat�rio #1: Criar um menu inicial usando la�os de repeti��o com as tr�s op��es: Primeira
//  op��o � inserir os dados (deve permitir inserir os dados de 1 at� 5 funcion�rios,
//  pois dever� ter uma condi��o de parada caso o usu�rio deseja inserir menos de 5
//  dados e n�o permitir que mais de 5 funcion�rios possam ser inseridos.) dos funcion�rios da empresa, a Segunda op��o � exibir os funcion�rios j�
//  cadastrados (deve prever o envio de uma mensagem de erro, caso o usu�rio tente
//  listar os funcion�rios, mas n�o foi inserido nenhum conte�do ainda.) e a Terceira op��o � sair do programa.

//  L�gica executada:
//      Primeiramente eu criei um loop DO...WHILE junto com o SWITCH...CASE para a cria��o do menu interativo, onde, caso a
//  entrada do usu�rio for diferente das op��es apresentadas, o loop se repete para que o usu�rio possa tentar completar a a��o novamente.
//      Ao selecionar uma das op��es (Digitando 1,2 ou 3), o case respectivo passa a ser executado, onde, caso seja a primeira op��o, a variavel
//  cadastrarFuncionario se torna verdadeira e passa a ser executada, caso a segunda op��o for selecionada, a variavel listarFuncionarios
//  se torna verdadeira, e caso a terceira op��o for selecionada, o programa encerra a execu��o.
//      Depois disso, vem a primeira condicional IF, onde � validado se a var�vel cadastrarFuncionario � verdadeira ou falsa, caso ela seja verdadeira,
//  o programa passa a executar o processo de cadastro do funcionario, e caso seja falsa, o programa pula essa instru��o e pula para a pr�xima.
//      Dentro da primeira condicional, temos uma verifica��o de quantos funcionarios o usu�rio quer cadastrar, e eu tamb�m utilizei outra condicional
//  para verificar se a entrada do us�rio estava entre os valores aceitados, tudo isso estando envolvido em um loop DO...WHILE, para que, caso a entrada do
//  usu�rio n�o seja v�lida, o processo se repita para que ele possa inserir valores v�lidos. Ao inserir um valor v�lido nessa verifica��o, a entrada do usu�rio
//  � salva em uma vari�vel, que ser� usada para limitar a quantidade de repeti��es do la�o FOR que vem a seguir, garantindo que o programa cadastre precisamente a
//  quantidade de funcionarios que o usu�rio quer (contanto que esteja entre os par�metros j� validados anteriormente).
//      Ap�s essa verifica��o, vem o primeiro grande loop FOR, onde ele se repete a quantidade de vezes que o usu�rio escolheu. A vari�vel "posi��o" � usada somente
//  para melhorar a visualiza��o do usu�rio, que enxerga "funcionario n�mero 1" ao inv�s de "funcionario n�mero 0", sem interferir na execu��o do c�digo. A forma
//  que eu escolhi trabalhar com esses valores foi a seguinte: Salvar os valores num�ricos em uma matriz do tipo long long chamada funcionarios, que tem 5 linhas (funcionarios)
//  e 6 colunas (ID, CPF, DIA, M�S E ANO de nascimento respectivamente), e uma outra matr�z do tipo char chamada nomeFuncionarios com 5 linhas (funcionarios) e 50 colunas (caract�res).
//      Ent�o, eu atribui um valor neutro para a matr�z "funcionarios" onde funcionarios[cont][1] corresponde ao ID daquele usu�rio espec�fico, somente para evitar lixo de mem�ria.
//  Em seguida, eu pe�o para o usu�rio digitar o nome do funcionario que ele deseja cadastrar, e fa�o as verifica��es necess�rias para que o nome possa ser adicionado com
//  sucesso (vide upgrade obrigat�rio #2 para mais detalhes).
//      Depois disso, eu pe�o ao usu�rio para entrar com o CPF daquele funcionario e salvo na segunda coluna daquela linha na matriz, depois, fa�o o mesmo com o dia, m�s e ano de nascimento
//  do funcion�rio e imprimo os valores cadastrados para visualiza��o do usu�rio, repito esse processo pela quantidade de vezes que o usu�rio deseja cadastrar um funcion�rio.
//      Ao fim do loop, quando a quantidade de vezes que o usu�rio deseja cadastrar um funcion�rio chegou ao fim e todos os usu�rios foram cadastrados com sucesso, eu alterei o valora da
//  variavel funcionarioCadastrado para verdadeiro, o que agora, ao selecionar a op��o dois do menu "listar funcionarios" o usu�rio ir� receber uma lista dos usu�rios que ele cadastrou at� ent�o
//  e caso ele tente acessar a lista de funcionarios sem cadastrar nenhum funcionario, ser� contemplado com uma mensagem de erro.
//      Toda a l�gica est� envolvida em um outro loop DO...WHILE, o que garante ao usu�rio retornar ao menu e realizar a��es diferentes quantas vezes quiser, inclusive sair do programa e fechar o
//  loop.
//-------------------------------------------------------------------------------------------------------------------------------------
//  Upgrade obrigat�rio #2: Verificar se o nome do funcion�rio inserido cont�m somente letras mai�sculas ou
//  min�sculas do alfabeto ingl�s (sem acentua��o gr�fica e caracteres especial) e espa�o
//  em branco e Ignorar nomes maiores do que 50 caracteres.

//  L�gica executada:
//      A valida��o da entrada nome no formul�rio de cadastro foi feita da seguinte maneira, primeiro eu peguei a entrada de texto do usu�rio com gets e salvei em uma variavel intermediaria
//  depois disso, usei uma condicional IF com a fun��o strlen da biblioteca <string.h> que basicamente conta os caracteres da string (sem contar o '/0'), se a entrada do usu�rio passar essa
//  verifica��o, a variavel � encaminhada para um loop for que verifica se cada letra que o usu�rio inseriu � uma letra maiuscula ou minuscula do alfabeto ingles. Essa valida��o est� dentro
//  de um loop DO...WHILE para que, enquanto o usu�rio n�o digite o nome de acordo com as valida��es exigidas ele n�o possa prosseguir, mas ao digitar corretamente, ele prossegue.
//-------------------------------------------------------------------------------------------------------------------------------------
//  Upgrade livre #3: Cria��o de FILE para manter o log de cadastro de funcion�rios

//  L�gica executada:
//      Eu decidi criar um arquivo para manter o log dos processos de cadastro dos funcion�rios, uma vez que esses dados podem ser necess�rios para serem revisados e guardados. Esses dados s�o guardados
//  em um arquivo txt externo, que � criado usando a fun��o fopen(), e os dados s�o escritos usando a fun��o fprintf(), alguns elementos visuais s�o utilizados para garantir a leitura melhor do arquivo txt
//  e os dados do cadastro, ao serem impressos na tela ap�s as entradas do usu�rio, tamb�m s�o escritos no arquivo txt em cada execu��o do loop de cadastro. Por fim, a fun��o fclose() � utilizada para salvar e fechar
//  o arquivo txt, garantindo que as informa��es sejam salvas, e est� implementada em todos meios que o usu�rio tem de sair do programa. Ent�o a menos que ele feche o prompt de comando, os dados ser�o salvos corretamente no arquivo externo.
//-------------------------------------------------------------------------------------------------------------------------------------

//  Upgrade livre #4: Valida��o de maioriedade

//  L�gica Usada:
//      Foi criada uma verifica��o para saber se o usu�rio est� cadastrando um funcionario maior ou menor de idade, caso ele seja menor de idade, o programa n�o salva o cadastro no log e
//  encerra, visto que menores de idade n�o podem trabalhar no Brasil. Para isso, eu inclui a biblioteca <time.h>, defini uma vari�vel do tipo time_t, igualei ela a fun��o time(null) para
//  pegar a hora, depois utilizei um ponteiro com a fun��o localtime que aponta para o array de dados do sistema (dia mes e ano atuais), tudo isso para pegar e colar na esturtura nomeada TM, e utilizar os dados do
//  array para fazer condicionais de verifica��o de idade. Se ele � maior de 18, OK, se ele � menor, ERRO, se o ano atual (2020 no caso) menos o ano que ele diz que nasceu resultar em 18 precisamente
//  � feito um calculo no mes, se ja passou, OK, se ainda nao chegou, ERRO e se estiver no mes do aniversario dele, � feito outro calculo no dia,se ja passou, OK, se ainda nao chegou, ERRO.
//      Isso significa que se um usu�rio abrir esse c�digo daqui 10 anos, ainda ser� eficiente calculando se o funcionario inserido � ou n�o maior de idade. Para achar os indices que eu iria utilizar, eu vasculhei
//  a documenta��o da biblioteca <time.h> que apresenta todos os comandos que precisavam ser utilizados para tornar isso poss�vel.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    int listarFuncionarios = 0, cadastrarFuncionario = 0, repetirSwitch = 0, funcionariosASeremCadastrados = 0, cont, validacaoCadastro, posicao = 0, i,
    funcionarioCadastrado = 0, validacaoNomeConfirmada = 0, aniversarioValido = 0, diaNascimento = 0, mesNascimento = 0, anoNascimento = 0;
    long long funcionarios[5][6];
    char nomeFuncionarios[5][51], continuar, validacaoNomeFuncionario[50], menuInicial;

    time_t dataLocal;
    dataLocal = time(NULL);
    struct tm tm = *localtime(&dataLocal);

    FILE *file;
    file = fopen("historico.txt", "a");

    do{
         do{
            repetirSwitch = 0;
            printf("\nO que deseja fazer?\n");
            printf("1 - Cadastrar novos funcionarios\n");
            printf("2 - Listar funcionarios\n");
            printf("3 - Sair\n\n");
            printf("Escolha uma opcao:");
            scanf(" %c", &menuInicial);


            switch(menuInicial){
            case '1':
                cadastrarFuncionario = 1;
                repetirSwitch = 0;
                break;
            case '2':
                listarFuncionarios = 1;
                repetirSwitch = 0;
                break;
            case '3':
                fclose(file);
                repetirSwitch = 0;
                return 0;
                break;
            default:
                printf("\nValor invalido, por favor insira um numero de 1 a 3 para prosseguir\n\n");
                repetirSwitch = 1;
                break;
            }
        }while(repetirSwitch);

        if(cadastrarFuncionario){
            do{
                printf("\nVoce pode cadastrar entre 1 a 5 funcionarios, quantos funcionarios voce gostaria de cadastrar agora?\n");
                scanf("%i", &funcionariosASeremCadastrados);
                if(funcionariosASeremCadastrados < 1 || funcionariosASeremCadastrados > 5){
                    printf("\nValor invalido, voce tem que cadastrar entre 1 a 5 funcionarios, por favor, tente novamente\n");
                    validacaoCadastro = 1;
                } else{
                    validacaoCadastro = 0;
                }
            }while(validacaoCadastro);

            fprintf(file,"Novo processo de cadastro ------------------------------------\n");

            for(cont = 0; cont < funcionariosASeremCadastrados; cont++){
                posicao = cont + 1;
                funcionarios[cont][1] = 0;
                getchar();
                do{
                    fflush(stdout);
                    printf("\nDigite o nome do funcionario numero %i: ", posicao);
                    gets(validacaoNomeFuncionario);
                    if(!(strlen(validacaoNomeFuncionario) > 50 || strlen(validacaoNomeFuncionario) < 2)){
                        for(i = 0; i < strlen(validacaoNomeFuncionario); i++){
                            if((validacaoNomeFuncionario[i] >= 'A' && validacaoNomeFuncionario[i] <= 'Z') || (validacaoNomeFuncionario[i] >= 'a' && validacaoNomeFuncionario[i] >= 'Z') || (validacaoNomeFuncionario[i] == ' ')){
                                strcpy(nomeFuncionarios[cont],validacaoNomeFuncionario);
                                validacaoNomeConfirmada = 1;
                            }else{
                                printf("\nErro: O nome deve conter somente letras do alfabeto ingles\n");
                                validacaoNomeConfirmada = 0;
                                break;
                            }
                        }
                    }else{
                        printf("\nErro: O nome deve estar entre 3 e 50 caracteres\n");
                        validacaoNomeConfirmada = 0;
                    }

                }while(!validacaoNomeConfirmada);

                printf("\nDigite o CPF do funcionario numero %i: ", posicao);
                scanf("%lli", &funcionarios[cont][2]);

                    printf("\nDigite o dia de nascimento do funcionario numero %i: ", posicao);
                    scanf("%d",&diaNascimento);
                    printf("\nDigite o mes de nascimento do funcionario numero %i: ", posicao);
                    scanf("%d",&mesNascimento);
                    printf("\nDigite o ano de nascimento do funcionario numero %i: ", posicao);
                    scanf("%d",&anoNascimento);

                    if(((tm.tm_year + 1900) - anoNascimento) <= 18){
                            if((((tm.tm_year + 1900) - anoNascimento) == 18) && (tm.tm_mon + 1) >= mesNascimento){
                                if((tm.tm_mday) <= diaNascimento){
                                    printf("\nErro Fatal: O funcionario nao pode ser menor de idade\n");
                                    fprintf(file,"TENTATIVA DE CADASTRO DE MENOR DE IDADE\n");
                                    fprintf(file,"Fim desse processo de cadastro ------------------------------------\n");
                                    fclose(file);
                                    return 0;
                                }else{
                                    funcionarios[cont][3] = diaNascimento;
                                    funcionarios[cont][4] = mesNascimento;
                                    funcionarios[cont][5] = anoNascimento;
                                }
                            }else{
                                    printf("\nErro Fatal: O funcionario nao pode ser menor de idade\n");
                                    fprintf(file,"TENTATIVA DE CADASTRO DE MENOR DE IDADE\n");
                                    fprintf(file,"Fim desse processo de cadastro ------------------------------------\n");
                                    fclose(file);
                                    return 0;
                            }
                    }else{
                        funcionarios[cont][3] = diaNascimento;
                        funcionarios[cont][4] = mesNascimento;
                        funcionarios[cont][5] = anoNascimento;
                    }

                funcionarios[cont][1] = cont;

                fprintf(file,"\nID: %lli\n", funcionarios[cont][1]);
                fprintf(file,"\nNome: %s\n", nomeFuncionarios[cont]);
                fprintf(file,"\nCPF: %lli\n", funcionarios[cont][2]);
                fprintf(file,"\nData de nascimento : %lli/%lli/%lli\n\n", funcionarios[cont][3], funcionarios[cont][4], funcionarios[cont][5]);

                printf("\nID: %lli\n", funcionarios[cont][1]);
                printf("\nNome: %s\n", nomeFuncionarios[cont]);
                printf("\nCPF: %lli\n", funcionarios[cont][2]);
                printf("\nData de nascimento : %lli/%lli/%lli\n\n", funcionarios[cont][3], funcionarios[cont][4], funcionarios[cont][5]);

                funcionarioCadastrado = 1;
            }
            fprintf(file,"Fim desse processo de cadastro ------------------------------------\n");
        }
        if(listarFuncionarios){
                if(funcionarioCadastrado){
                    for(cont = 0; cont < funcionariosASeremCadastrados; cont++){
                        printf("\nID: %lli\n", funcionarios[cont][1]);
                        printf("\nNome: %s\n", nomeFuncionarios[cont]);
                        printf("\nCPF: %lli\n", funcionarios[cont][2]);
                        printf("\nData de nascimento : %lli/%lli/%lli\n\n", funcionarios[cont][3], funcionarios[cont][4], funcionarios[cont][5]);
                    }
                } else {
                    printf("\nErro: Nao existem funcionarios cadastrados neste momento\n");
                }
        }

        printf("\nRetornar ao menu? s ou n\n");
        scanf(" %c", &continuar);
        if(continuar == 's'){
            system("cls");
            cadastrarFuncionario = 0;
            listarFuncionarios = 0;
        }
    }while(continuar == 's');

    fclose(file);

return 0;
}
