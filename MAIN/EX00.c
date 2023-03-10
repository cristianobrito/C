/********************************************************************
*   --- REFATORADO 2023 ---
*   -TAB 4 OU 2 ESPAÇOS
*   -USANDO A TABULAÇÃO DO PYTHON
*   -USANDO AS PAGINAS PARA MARCAR
*   -USANDO FUNÇÕES E ARQUIVOS EXTERNOS
*   -CRIANDO UMA DOCUMENTAÇÃO
*   -COMENTARIOS NA COLUNA 40 OU 80 EM LINHAS MAIORES
********************************************************************/

#include <stdio.h>                     // IMPORTAÇÕES DAS BIBLIOTECAS
#include <stdlib.h>
#include <conio.h>
#include "EX00.h"                      // MEU ARQUIVO.H

#define AUTOR "CRISTIANO"              // DECLARA UMA CONSTANTE GLOBAL EM QUALQUER LUGAR DO CODE VAI TER ESSE VALOR

/**********************************************************
*
*                      CONFIGURAÇÃO
*
***********************************************************/
void CONFIG(void)
{
    system("title C PARA LEIGOS");     // TITULO DA JANELA
    system("color 1e");                // COR DA JANELA
    printf("\t\t%s", AUTOR);           // TABULAÇÃO USA A CONSTANTE AUTOR
    puts("\n");
}
/**********************************************************
*                      APRESENTAÇÃO
***********************************************************/
void EX00(void)
{
   char apresentar[] = "BEM VINDO A PROGRAMACAO EM C";
   int  x = 0;

   while(apresentar[x] != '\0')
   {
       putchar(apresentar[x]);
       usleep(1);                      // use sleep(500); e Sleep(500); com windows.h
       x++;
   }
    puts("\n**************************************************************\n");
}

/*********************************************************
*                      APRESETAÇÃO 2
**********************************************************/
void EX00_1(void)
{
    printf("EX00_1\n");
    char fala[] = "AKILLES\nJOYCE\nNANO\n";
    int  y = 0;

    while(fala[y] != '\0')             // CARACTERE NULO \0 FIM DA PALAVRA
    {
        putchar(fala[y]);
        usleep(55000);                 // MILESEGUNDOS SETADOS
        y++;
    }
    puts("\n**************************************************************\n");
}

/*****************************************************************
*                      PG:74 - 75
******************************************************************/
void EX00_2(void)
{
    char   c;                          // DECLARAÇÃO DE VARIAVEIS
    int    i;                          // DECLARAÇÃO DE VARIAVEIS
    float  f;                          // DECLARAÇÃO DE VARIAVEIS
    double d;                          // DECLARAÇÃO DE VARIAVEIS

    c = 'a';                           // INICIALIZAÇÃO DE VARIAVEIS
    i = 1;                             // INICIALIZAÇÃO DE VARIAVEIS
    f = 19.0;                          // INICIALIZAÇÃO DE VARIAVEIS
    d = 20000.009;                     // INICIALIZAÇÃO DE VARIAVEIS

    printf("EX00_2\n");
    printf("%c\n",c);                  // %c char
    printf("%d\n",i);                  // %d ou %i int
    printf("%f\n",f);                  // %f float ou double
    printf("%f\n",d);                  // %f float ou double
    puts("\n**************************************************************\n");
}
/************************************************************
    \b retrocesso
    \f alimentaçao de formulario
    \r retorno de carro
    \t tabulação horizontal
    \v tabulação vertical
    \a alerta
    \n nova linha
**************************************************************/
void EX00_3(void)
{
    printf("EX00_3\n");
    char falando[] = "\tOla novo mundo porra\b\b\b\b\bapaguei\n\tcaralho\b\b\b\b\b\b\b puta\b\b\b\b\btomar no\b\bcu\b\bsuco\r\r\n\tagora foram\r\n\tremovidos os palavroes\r\r\f\f";
    int x = 0;                         // SÓ UM CONTADOR

    while(falando[x] != '\0')
    {
        putchar(falando[x]);
        Sleep(1);                      // usleep(5000);
        x++;
    }
    puts("\n**************************************************************\n");
}
//***************************************************************
void EX00_4(void)
{
    printf("EX00_4\n");
    printf("meu nome e Cristiano sou programador\n\n");

    puts("\n**************************************************************\n");
}
//***************************************************************

void EX00_5(void)
{
    printf("EX00_5\n");
    char c   = 'c';
    int i    = 123;
    float f  = 98.6;
    double d = 6.022E23;

    printf("TAMANHO DAS VARIAVEIS DESSE PC:\n");
    printf("char  \t%u\n", sizeof(c)); // sizeof() EXIBE O TAMANHO DAS VARIAVEIS STRUCTS ETC...
    printf("int   \t%u\n", sizeof(i));
    printf("float \t%u\n", sizeof(f));
    printf("double\t%u\n", sizeof(d));

    puts("\n**************************************************************\n");
}
// ************************** PG 78 - 85 ********************************
void EX00_6(void)
{
    printf("EX00_6\n");
    unsigned int ono;
    ono = -10;
    // VARIAVEL INTEIRA COM NUMEROS NEGATIVOS, NÃO PODE unsigned
    printf("o valor e %u esse numero e erro\n", ono);

    puts("\n**************************************************************\n");
}
void EX00_7()
{
    printf("EX00_7\n");
    int c;
    printf("espero um caractere: ");
    c = getchar();                     // USO DA FUNÇÃO GETCHAR();
    printf("peguei o caractere %c\n", c);

    puts("\n**************************************************************\n");
}
/**********************************************************************
*    Protótipos para getchar();
*    int	                   getchar	     (void)
*    Valor de retorno	Nome da função	Argumento
**********************************************************************/

// ************************* PG 86 ************************************
void EX00_8(void)
{
    printf("EX00_8\n");
    int ch;
    printf("Press Enter: ");
    getchar();
    ch = 'H';
    putchar(ch);                       // COLOCA UM UNICO CARACTERE NA SAIDA PADRÃO
    ch = 'i';
    putchar(ch);                       // ELE RECEBE UM CARACTERE LITERAL DENTRO DOS PARENTESIS
    putchar('!');

    puts("\n**************************************************************\n");
}
// ***********************************************************************

// ************************* PG 89 ***************************************
void EX00_9(void)
{
    printf("EX00_9\n");
    char prompt[] = "Tecle enter para explodir: ";
    printf("\n%s", prompt);            // CARACTERE DE CONVERSÃO DE STRING %S
    getchar();                         // PAUSA O PROGRAMA

    puts("\n**************************************************************\n");
}

// ************************* PG 91 ***************************************
void EX00_10(void)
{
    printf("EX00_10\n");
    char nome[15];
    printf("DIGITE SEU NOME: ");
    scanf("%s", nome);                 // SCANF() LE A ENTRADA DO TECLADO
    printf("Seja Bem Vindo %s.\n", nome);

    puts("\n**************************************************************\n");
}

// ************************* PG 94 ***************************************
void EX00_11(void)
{
    printf("EX00_11\n");
    char nome[10];                     // QUANTIDADE DE ENTRADA DE TEXTO + 1
    printf("Quem e voce? ");
    fgets(nome,10,stdin);              // FGETS LE UM A MENOS PORTANTO 9
    printf("eu sou %s.\n", nome);      // EXIBE

    puts("\n**************************************************************\n");
}

/************************************************************
*
*                      AULA DE PONTEIROS
*
************************************************************/
void EX00_12(void)
{
    printf("EX00_12\n");
    int v[10];
    char nome[] = "onze de setembro";
    char *pn;                          // CRIA OS PONTEIROS LE SE PONTEIRO PRA CHAR
    int  *pv;
    int b;                             // CRIA OS PONTEIROS LE SE PONTEIRO PRA INT

    pv=&v[0];                          // LEMBRE PONTEIRO SO ACEITA ENDEREÇOS DE MEMORIA
    pn=&nome[0];                       // SEMPRE INICIAMOS PEGANDO A PRIMEIRA POSIÇÃO DE UM CHAR[0]

    for(b=0;b<10;b++){                 // TEMOS QUE USAR O LAÇO PARA PERCORRER O ARRAY
        v[b] = b*b;
    }
    for(b=0;b<10;b++){
        printf("\n%d %d",*pv++, v[b]);
    }
    while(*pn){
        printf("\n%c", *pn++);
    }

    puts("\n**************************************************************\n");

}

// ******************** PONTEIRO PARA ESTRUTURAS *****************************
void EX00_13(void)
{
    printf("EX00_13\n");
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };
    struct horario agora, *depois;     // CRIA 2 STRUTURAS DO TIPO HORARIO SENDO UMA UM POTEIRO PRA HORARIO

    int hora    = 200;                 // ATRIBUINDO VALORES AOS MENBROS DA STRUCT
    int minuto  = 300;
    int segundo = 300;

    depois = &agora;                   // & OPERADOR DE LOCAL DE MEMORIA

    depois->hora    = 10;              // ACESSANDO OS MENBROS DA ESTRUTURA PELO PONTEIRO
    depois->minuto  = 20;
    depois->segundo = 30;

    printf("\n%i : %i : %i\n", agora.hora, agora.minuto, agora.segundo);

    puts("\n**************************************************************\n");
}
//********************* PONTEIROS ***********************************************
void EX00_14(void)
{
        printf("EX00_14\n");
        struct horario{
            int *phora;                // PONTEIROS DENTRO DE STRUCTS
            int *pminuto;
            int *psegundo;
        };
    struct horario hoje;               // CRIA UMA VARIAVEL DO TIPO HORARIO COM O NOME "HOJE"

    int hora    = 200;                 // INICIALIZANDO AS VARIAVEIS
    int minuto  = 300;
    int segundo = 300;

    hoje.phora    = &hora;             // STRUCT HOJE ACESSANDO SEUS MENBROS DO TIPO PONTEIROS PRA HORARIO
    hoje.pminuto  = &minuto;           // ENDERÇO DE MEMORIA DAS VARIAVEIS
    hoje.psegundo = &segundo;

    printf("HORA:    %i\n", *hoje.phora);
    printf("MINUTO:  %i\n", *hoje.pminuto);
    printf("SEGUNDO: %i\n", *hoje.psegundo);

    *hoje.psegundo=1000;               // ALTERA O VALOR EM TEMPO DE EXECUÇÃO
    printf("SEGUNDO ALTERADO: %i\n", *hoje.psegundo);

    puts("\n**************************************************************\n");
}

// ************************ PONTEIROS PARA FUNÇÃO *********************
//************************* INICIO DA FUNÇÃO SOMAR ********************
int soma(int a, int b)                 // ELA RETORNA UM INTEIRO E RECEBE 2 INTEIROS a,b COMO PARAMETOS DE ENTRADA
{
    return a+b;                        // FUNÇÃO SOMAR RETORNA A SOMA DE a+b
}
//************************* FIM DA FUNÇÃO SOMAR ***********************
void EX00_21()
{
    int x,y,z;
    int (*p)(int,int);                 // PONTEIRO GUARDA O ENDEREÇO DE MEMORIA DA FUNÇÃO O TIPO DE RETORNO E OS PARAMETROS DEVEM SER DO MESMO TIPO DA FUNÇÃO
    printf("EX00_21\n");
    printf("DIGITE 2 NUMEROS: (TECLE ENTER PARA CADA UM)");
    scanf("%d %d",&x,&y);
    p=soma;                            // PONTEIRO RECEBE O ENDEREÇO DA FUNÇÃO
    z=p(x,y);                          // VARIAVEL RECEBE O VALOR DA SOMA PELO ENDEREÇO QUE O PONTEIRO PASSA
    printf("Soma = %d\n",z);

    puts("\n**************************************************************\n");
}
// ************************ EX00_22 ***********************************
// CONSIDERE O SEGUINTE PONTEIRO PRA FUNÇÃO int (*ptr)(int, int);

int executa(int (*ptr)(int, int), int x, int y)            // A FUNÇÃO RECEBE COMO PARAMETRO O PONTEIRO PARA A FUNÇÃO UM VALOR X E UM VALOR Y
{
    return ptr(x,y);                                       // RETORNA O RESULTADO DA FUNÇÃO QUE ESTA ASSOCIADA AO POTEIRO
}
// ************************ FUNÇÕES MAX E SUB *************************
int max(int a, int b){ return (a>b) ? a : b; }             // FUNÇÃO PARA CALCULAR O MAIOR VALOR ENTRE A E B
int sub(int a, int b){ return a-b; }                       // SUBTRAÇÃO DE A E B
// ********************************************************************
void EX00_22()
{
    int x,y,z;
    int (*p)(int,int);
    printf("EX00_22\n");
    printf("DIGITE 2 NUMEROS: (tecle enter para cada numero)");
    scanf("%d %d",&x,&y);

    printf("MAIOR       = %d\n",executa(max,x,y));
    printf("SUBTRACAO   = %d\n",executa(sub,x,y));

    puts("\n**************************************************************\n");

}
// ************************ PG 254 ************************************
void EX00_15(void)
{
    printf("EX00_15\n");
    char string[] = "qual o tamanho de um array: ";
    printf("a string \"%s\" tem o tamanho %u.\n", string,sizeof(string));      // SIZEOF MOSTRA O TAMANHO

    puts("\n**************************************************************\n");
}

// ************************ PG 255 ************************************
void EX00_16(void)
{
    printf("EX00_16\n");
    struct robot{
        int alive;
        char name[5];
        int xpos;
        int ypos;
        int strength;
    };
    printf("tamanho da estruct robot %u.\n", sizeof(struct robot));            // %u OPERADOR DE SIZE OF

    puts("\n**************************************************************\n");
}
/********************************************************************
*
*                         CAPITULO 8
*                       IF ELSE SWITCH
*
********************************************************************/

// ************************ PG 98 ************************************
void EX00_17()
{
    printf("EX00_17\n");
    int a,b;
    a=5;
    b= a - 3;
    if(a>b)
    {
        printf("%d e maior que %d\n",a,b);
    }

    puts("\n**************************************************************\n");
}

// ************************ PG 100 ***************************************
void EX00_18()
{
    printf("EX00_18\n");
    int first,second;
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d",&first);
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d",&second);

    puts("Calculando o maior...");
    if(first<second)
    {
        printf("%d e menor que %d\n", first,second);
    }
    if(first>second)
    {
        printf("%d e maior que %d", first,second);
    }
    puts("\n**************************************************************\n");
}
// ************************ PG 101 ***************************************
#define SECRET 17                      // DEFINE UMA CONSTANTE
void EX00_19()
{
    printf("EX00_19\n");
    int guess;
    printf("ACERTE O NUMERO SECRETO: ");
    scanf("%d",&guess);                // PEGA O ENDEREÇO DE MEMORIA
    if(guess==SECRET)
    {
        printf("VOCE ACERTOU!!");
        return(0);
    }
    if(guess=SECRET)
    {
        printf("ERRROU!!");
        return(1);
    }

    puts("\n**************************************************************\n");
}
// ************************ EX00_20 **************************************
void EX00_20()
{
    int a;
    a=5;
    if(a=-3)
    {
        printf("%d igual %d\n", a,-3);
    }
    puts("\n**************************************************************\n");
}
// ************************ CAP 8 FIM ************************************

void EX00_23()
{
    printf("MOSTRA DESENHO \n");
    static int lab[10][10] = {
                            {1,1,1,1,1,1,1,1,1,1},
                            {0,0,1,0,0,0,1,0,1,1},
                            {1,0,1,0,1,0,1,0,1,1},
                            {1,0,1,0,1,0,0,0,0,1},
                            {1,0,1,1,1,0,1,1,0,1},
                            {1,0,0,0,0,0,1,0,1,1},
                            {1,0,1,0,0,1,1,0,1,1},
                            {1,0,0,1,0,1,0,0,0,1},
                            {1,0,1,1,0,0,0,1,0,0},
                            {1,1,1,1,1,1,1,1,1,1}
                          };
    int i, j;
    for(i=0; i<10; i++) {
        putchar('\n');
    for(j=0; j<10; j++)
        putchar(lab[i][j] ? 219 : 32);
    }
    puts("\n**************************************************************\n");
}
// ===============================  EX00_24 ===========================================
void EX00_24()
{
  FILE *pont_arq;                      // criando a variável ponteiro para o arquivo
  pont_arq = fopen("EX0024.txt", "a"); //abrindo o arquivo
  fclose(pont_arq);                    // fechando arquivo

  printf("O arquivo foi criado com sucesso!\n");

  puts("\n**************************************************************\n");
  system("pause");
  return(0);
}

// =============================== EX00_25 ===============================================
void EX00_25()
{
    /*
        notacao array pode ser substituida por ponteiro
        num[0]             *ptr           pega a primeira posicao do array
        num[1]             *(ptr+1)       pega a segunda posicao do array
        todo potenira aponta para a primeira posicao de um array pois um array
        e um ponteiro disfarcado
    */
    float num[5] = {75.1, 75.2, 75.3, 75.4, 75.5};
    float *ptrF;
    ptrF=num;
    printf("%.1f\n", *(ptrF+3)); // mostra o valor da terceira posicao do array
    printf("%.1f\n", *(ptrF+4)); // mostra o valora da ultima posicao do array
    printf("%.1f", *(ptrF+0));   // mostra o valora da primeira posicao do array
    puts("\n");

    char *nome = "cristiano oliveira vai vencer";
    while(putchar(*nome++));
    puts("\n***********************************************************\n");
    return(0);
}
// =============================== EX00_26 ===============================================

void EX00_26()
{
    /* array 3d */
    /* para saber quantos elementos o array tem multiplicamos eles 2*2*2 = 8 elementos */
    /* 2 niveis 2 linhas e 2 colunas */
    int arr[2][2][2]= {0,1,2,3,4,5,6,7};
    int x,y,z;

    for(x=0;x<2;x++) /* percorre os niveis */
    {
        for(y=0;y<2;y++) /* percorre as linhas */
        {
            for(z=0;z<2;z++) /* percorre as colunas */
            {
                printf("N=[%d] L=[%d] C=[%d]  %d",x,y,z, arr[x][y][z]);
                printf("\n");
            }
        }
    }
}

// ====================================================================

void EX00_27()
{
    printf("irei reformatar o monstro para 2023");
    puts("\n");
}

void EX00_28()
{
    char buffer[20];
    printf("pegando o buffer do arquivo ");
    fgets(buffer,20,stdin);
    printf("\n%s",buffer);

}
// criei um txt explicando o monstro e coloquei em readmes
// e no diretorio f: monstro
