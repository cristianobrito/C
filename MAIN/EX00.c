/*
*   --- REFATORADO 2023 ---
*   -TAB 4 OU 2 ESPAÇOS
*   -USANDO A TABULAÇÃO DO PYTHON
*   -USANDO AS PAGINAS PARA MARCAR
*   -USANDO FUNÇÕES E ARQUIVOS EXTERNOS
*   -CRIANDO UMA DOCUMENTAÇÃO
*   -COMENTARIOS NA COLUNA 40 OU 80 EM LINHAS MAIORES
*/

#include <stdio.h>                     // IMPORTAÇÕES DAS BIBLIOTECAS
#include <stdlib.h>
#include <conio.h>
#include "EX00.h"                      // MEU ARQUIVO.H

#define AUTOR "CRISTIANO"              // DECLARA UMA CONSTANTE

/** CONFIGURACAO **/
void CONFIG(void)
{
    system("title C PARA LEIGOS");     // TITULO DA JANELA
    system("color 1e");                // COR DA JANELA
    printf("\t\t%s", AUTOR);           // TABULAÇÃO USA A CONSTANTE AUTOR
    puts("\n");
}
/** APRESENTACAO **/
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
    puts("\n");
}

/** APRESENTAÇÃO 2 **/
void EX00_1(void)
{
    char fala[] = "AKILLES\nJOYCE\nNANO\n";
    int  y = 0;

    while(fala[y] != '\0')             // CARACTERE NULO \0 FIM DA PALAVRA
    {
        putchar(fala[y]);
        usleep(55000);                 // MILESEGUNDOS SETADOS
        y++;
    }
    puts("\n");
}

/** PG:74 - 75 **/
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

    printf("%c\n",c);                  // %c char
    printf("%d\n",i);                  // %d ou %i int
    printf("%f\n",f);                  // %f float ou double
    printf("%f\n",d);                  // %f float ou double
    puts("\n");
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
    char falando[] = "\tOla novo mundo porra\b\b\b\b\bapaguei\n\tcaralho\b\b\b\b\b\b\b puta\b\b\b\b\btomar no\b\bcu\b\bsuco\r\r\n\tagora foram\r\n\tremovidos os palavroes\r\r\f\f";
    int x = 0;                         // SÓ UM CONTADOR

    while(falando[x] != '\0')
    {
        putchar(falando[x]);
        sleep(1);                      // usleep(5000);
        x++;
    }
}
//***************************************************************
void EX00_4(void)
{
    printf("meu nome e Cristiano sou programador\n\n");
}
//***************************************************************

void EX00_5(void)
{
    char c   = 'c';
    int i    = 123;
    float f  = 98.6;
    double d = 6.022E23;

    printf("TAMANHO DAS VARIAVEIS DESSE PC:\n");
    printf("char  \t%u\n", sizeof(c)); // sizeof() EXIBE O TAMANHO DAS VARIAVEIS STRUCTS ETC...
    printf("int   \t%u\n", sizeof(i));
    printf("float \t%u\n", sizeof(f));
    printf("double\t%u\n", sizeof(d));
}
// ************************** PG 78 - 85 ********************************
void EX00_6(void)
{
    unsigned int ono;
    ono = -10;
    // VARIAVEL INTEIRA COM NUMEROS NEGATIVOS, NÃO PODE unsigned
    printf("o valor e %u esse numero e erro\n", ono);
}
void EX00_7()
{
    int c;
    printf("espero um caractere: ");
    c = getchar();                     // USO DA FUNÇÃO GETCHAR();
    printf("peguei o caractere %c\n", c);
}
// **********************************************************************
/*  Protótipos para getchar();
    int	                   getchar	     (void)
    Valor de retorno	Nome da função	Argumento
*/
// **********************************************************************
// ************************* PG 86 **************************************
void EX00_8(void)
{
    int ch;
    printf("Press Enter: ");
    getchar();
    ch = 'H';
    putchar(ch);                       // COLOCA UM UNICO CARACTERE NA SAIDA PADRÃO
    ch = 'i';
    putchar(ch);                       // ELE RECEBE UM CARACTERE LITERAL DENTRO DOS PARENTESIS
    putchar('!');
}
// ***********************************************************************

// ************************* PG 89 ***************************************
void EX00_9(void)
{
    char prompt[] = "Tecle enter para explodir: ";
    printf("\n%s", prompt);            // CARACTERE DE CONVERSÃO DE STRING %S
    getchar();                         // PAUSA O PROGRAMA
}

// ************************* PG 91 ***************************************
void EX00_10(void)
{
    char nome[15];
    printf("DIGITE SEU NOME: ");
    scanf("%s", nome);                 // SCANF() LE A ENTRADA DO TECLADO
    printf("Seja Bem Vindo %s.\n", nome);
}

// ************************* PG 94 ***************************************
void EX00_11(void)
{
    char nome[10];                     // QUANTIDADE DE ENTRADA DE TEXTO + 1
    printf("Quem e voce? ");
    fgets(nome,10,stdin);              // FGETS LE UM A MENOS PORTANTO 9
    printf("eu sou %s.\n", nome);      // EXIBE
}

// ************************ AULA DE PONTEIROS ****************************
void EX00_12(void)
{
    int v[10];
    char nome[] = "onze de setembro";
    char *pn;                          // CRIA OS PONTEIROS LE SE PONTEIRO PRA CHAR
    int  *pv;                          // CRIA OS PONTEIROS LE SE PONTEIRO PRA INT

    pv=&v[0];                          // LEMBRE PONTEIRO SO ACEITA ENDEREÇOS DE MEMORIA
    pn=&nome[0];                       // SEMPRE INICIAMOS PEGANDO A PRIMEIRA POSIÇÃO DE UM CHAR[0]

    for(int b=0;b<10;b++){
        v[b] = b*b;
    }
    for(int b=0;b<10;b++){
        printf("\n%d %d",*pv++, v[b]);
    }
    while(*pn){
        printf("\n%c", *pn++);
    }

}

// ******************** PONTEIRO PARA ESTRUTURAS *****************************
void EX00_13(void)
{
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };
    struct horario agora, *depois;     // CRIA 2 STRUTURAS DO TIPO HORARIO SENDO UMA UM POTEIRO PRA HORARIO

    int hora    = 200;
    int minuto  = 300;
    int segundo = 300;

    depois = &agora;                   // & OPERADOR DE LOCAL DE MEMORIA

    depois->hora    = 10;              // ACESSANDO OS MENBROS DA ESTRUTURA PELO PONTEIRO
    depois->minuto  = 20;
    depois->segundo = 30;

    printf("\n%i : %i : %i\n", agora.hora, agora.minuto, agora.segundo);
}
//********************* PONTEIROS ***********************************************
void EX00_14(void)
{
        struct horario{
            int *phora;                // PONTEIROS DENTRO DE STRUCTS
            int *pminuto;
            int *psegundo;
        };
    struct horario hoje;               // CRIA UMA VARIAVEL DO TIPO HORARIO COM O NOME "HOJE"

    int hora    = 200;
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
}

// ************************ PG 254 ************************************
void EX00_15(void)
{
    char string[] = "qual o tamanho de um array: ";
    printf("a string \"%s\" tem o tamanho %u.\n", string,sizeof(string));      // SIZEOF MOSTRA O TAMANHO
}

// ************************ PG 255 ************************************
void EX00_16(void)
{
    struct robot{
        int alive;
        char name[5];
        int xpos;
        int ypos;
        int strength;
    };
    printf("tamanho da estruct robot %u.\n", sizeof(struct robot));            // %u OPERADOR DE SIZE OF
}

// ************************ PG 98 ************************************
void EX00_17()
{
    int a,b;
    a=5;
    b= a - 3;
    if(a > b)
    {
        printf("%d e maior que %d\n", a,b);
    }
}
