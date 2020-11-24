//Aluno: Raphael Scandura da Cunha
//  Comentários: O código inteiro foi testado inumeras vezes com entradas diferentes em copiladores diferentes, tanto no repl.it quanto no codeblocks, qualquer divergência, favor entrar em contato
//-------------------------------------------------------------------------------------------------------------------------------------
//  Upgrade obrigatório #1: Criar um menu inicial usando laços de repetição com as três opções: Primeira
//  opção é inserir os dados (deve permitir inserir os dados de 1 até 5 funcionários,
//  pois deverá ter uma condição de parada caso o usuário deseja inserir menos de 5
//  dados e não permitir que mais de 5 funcionários possam ser inseridos.) dos funcionários da empresa, a Segunda opção é exibir os funcionários já
//  cadastrados (deve prever o envio de uma mensagem de erro, caso o usuário tente
//  listar os funcionários, mas não foi inserido nenhum conteúdo ainda.) e a Terceira opção é sair do programa.

//  Lógica executada:
//      Primeiramente eu criei um loop DO...WHILE junto com o SWITCH...CASE para a criação do menu interativo, onde, caso a
//  entrada do usuário for diferente das opções apresentadas, o loop se repete para que o usuário possa tentar completar a ação novamente.
//      Ao selecionar uma das opções (Digitando 1,2 ou 3), o case respectivo passa a ser executado, onde, caso seja a primeira opção, a variavel
//  cadastrarFuncionario se torna verdadeira e passa a ser executada, caso a segunda opção for selecionada, a variavel listarFuncionarios
//  se torna verdadeira, e caso a terceira opção for selecionada, o programa encerra a execução.
//      Depois disso, vem a primeira condicional IF, onde é validado se a varável cadastrarFuncionario é verdadeira ou falsa, caso ela seja verdadeira,
//  o programa passa a executar o processo de cadastro do funcionario, e caso seja falsa, o programa pula essa instrução e pula para a próxima.
//      Dentro da primeira condicional, temos uma verificação de quantos funcionarios o usuário quer cadastrar, e eu também utilizei outra condicional
//  para verificar se a entrada do usário estava entre os valores aceitados, tudo isso estando envolvido em um loop DO...WHILE, para que, caso a entrada do
//  usuário não seja válida, o processo se repita para que ele possa inserir valores válidos. Ao inserir um valor válido nessa verificação, a entrada do usuário
//  é salva em uma variável, que será usada para limitar a quantidade de repetições do laço FOR que vem a seguir, garantindo que o programa cadastre precisamente a
//  quantidade de funcionarios que o usuário quer (contanto que esteja entre os parâmetros já validados anteriormente).
//      Após essa verificação, vem o primeiro grande loop FOR, onde ele se repete a quantidade de vezes que o usuário escolheu. A variável "posição" é usada somente
//  para melhorar a visualização do usuário, que enxerga "funcionario número 1" ao invés de "funcionario número 0", sem interferir na execução do código. A forma
//  que eu escolhi trabalhar com esses valores foi a seguinte: Salvar os valores numéricos em uma matriz do tipo long long chamada funcionarios, que tem 5 linhas (funcionarios)
//  e 6 colunas (ID, CPF, DIA, MÊS E ANO de nascimento respectivamente), e uma outra matríz do tipo char chamada nomeFuncionarios com 5 linhas (funcionarios) e 50 colunas (caractéres).
//      Então, eu atribui um valor neutro para a matríz "funcionarios" onde funcionarios[cont][1] corresponde ao ID daquele usuário específico, somente para evitar lixo de memória.
//  Em seguida, eu peço para o usuário digitar o nome do funcionario que ele deseja cadastrar, e faço as verificações necessárias para que o nome possa ser adicionado com
//  sucesso (vide upgrade obrigatório #2 para mais detalhes).
//      Depois disso, eu peço ao usuário para entrar com o CPF daquele funcionario e salvo na segunda coluna daquela linha na matriz, depois, faço o mesmo com o dia, mês e ano de nascimento
//  do funcionário e imprimo os valores cadastrados para visualização do usuário, repito esse processo pela quantidade de vezes que o usuário deseja cadastrar um funcionário.
//      Ao fim do loop, quando a quantidade de vezes que o usuário deseja cadastrar um funcionário chegou ao fim e todos os usuários foram cadastrados com sucesso, eu alterei o valora da
//  variavel funcionarioCadastrado para verdadeiro, o que agora, ao selecionar a opção dois do menu "listar funcionarios" o usuário irá receber uma lista dos usuários que ele cadastrou até então
//  e caso ele tente acessar a lista de funcionarios sem cadastrar nenhum funcionario, será contemplado com uma mensagem de erro.
//      Toda a lógica está envolvida em um outro loop DO...WHILE, o que garante ao usuário retornar ao menu e realizar ações diferentes quantas vezes quiser, inclusive sair do programa e fechar o
//  loop.
//-------------------------------------------------------------------------------------------------------------------------------------
//  Upgrade obrigatório #2: Verificar se o nome do funcionário inserido contém somente letras maiúsculas ou
//  minúsculas do alfabeto inglês (sem acentuação gráfica e caracteres especial) e espaço
//  em branco e Ignorar nomes maiores do que 50 caracteres.

//  Lógica executada:
//      A validação da entrada nome no formulário de cadastro foi feita da seguinte maneira, primeiro eu peguei a entrada de texto do usuário com gets e salvei em uma variavel intermediaria
//  depois disso, usei uma condicional IF com a função strlen da biblioteca <string.h> que basicamente conta os caracteres da string (sem contar o '/0'), se a entrada do usuário passar essa
//  verificação, a variavel é encaminhada para um loop for que verifica se cada letra que o usuário inseriu é uma letra maiuscula ou minuscula do alfabeto ingles. Essa validação está dentro
//  de um loop DO...WHILE para que, enquanto o usuário não digite o nome de acordo com as validações exigidas ele não possa prosseguir, mas ao digitar corretamente, ele prossegue.
//-------------------------------------------------------------------------------------------------------------------------------------
//  Upgrade livre #3: Criação de FILE para manter o log de cadastro de funcionários

//  Lógica executada:
//      Eu decidi criar um arquivo para manter o log dos processos de cadastro dos funcionários, uma vez que esses dados podem ser necessários para serem revisados e guardados. Esses dados são guardados
//  em um arquivo txt externo, que é criado usando a função fopen(), e os dados são escritos usando a função fprintf(), alguns elementos visuais são utilizados para garantir a leitura melhor do arquivo txt
//  e os dados do cadastro, ao serem impressos na tela após as entradas do usuário, também são escritos no arquivo txt em cada execução do loop de cadastro. Por fim, a função fclose() é utilizada para salvar e fechar
//  o arquivo txt, garantindo que as informações sejam salvas, e está implementada em todos meios que o usuário tem de sair do programa. Então a menos que ele feche o prompt de comando, os dados serão salvos corretamente no arquivo externo.
//-------------------------------------------------------------------------------------------------------------------------------------

//  Upgrade livre #4: Validação de maioriedade

//  Lógica Usada:
//      Foi criada uma verificação para saber se o usuário está cadastrando um funcionario maior ou menor de idade, caso ele seja menor de idade, o programa não salva o cadastro no log e
//  encerra, visto que menores de idade não podem trabalhar no Brasil. Para isso, eu inclui a biblioteca <time.h>, defini uma variável do tipo time_t, igualei ela a função time(null) para
//  pegar a hora, depois utilizei um ponteiro com a função localtime que aponta para o array de dados do sistema (dia mes e ano atuais), tudo isso para pegar e colar na esturtura nomeada TM, e utilizar os dados do
//  array para fazer condicionais de verificação de idade. Se ele é maior de 18, OK, se ele é menor, ERRO, se o ano atual (2020 no caso) menos o ano que ele diz que nasceu resultar em 18 precisamente
//  é feito um calculo no mes, se ja passou, OK, se ainda nao chegou, ERRO e se estiver no mes do aniversario dele, é feito outro calculo no dia,se ja passou, OK, se ainda nao chegou, ERRO.
//      Isso significa que se um usuário abrir esse código daqui 10 anos, ainda será eficiente calculando se o funcionario inserido é ou não maior de idade. Para achar os indices que eu iria utilizar, eu vasculhei
//  a documentação da biblioteca <time.h> que apresenta todos os comandos que precisavam ser utilizados para tornar isso possível.

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
