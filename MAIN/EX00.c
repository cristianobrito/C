#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "EX00.h"

#define AUTOR "CRISTIANO"   // declara uma constante

/** CONFIGURACAO **/
void CONFIG(void)
{
    system("title C PARA LEIGOS");  // titulo da  janela
    system("color 1e");             // cor da janela
    printf("\t\t%s", AUTOR);
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
       usleep(1);        // use sleep(500); e Sleep(500); com windows.h
       x++;
   }
    puts("\n");
}

/** APRESENTAÇÃO 2 **/
void EX00_1(void)
{
    char fala[] = "AKILLES\nJOYCE\nNANO\n";
    int  y = 0;

    while(fala[y] != '\0')
    {
        putchar(fala[y]);
        usleep(55000);     // milesegundos setados
        y++;
    }
    puts("\n");
}

/** PG:74 - 75 **/
void EX6_2(void)
{
    // DECLARAÇÃO VARIAVEIS
    char   c;
    int    i;
    float  f;
    double d;

    // INICIALIZAÇÃO DA VARIAVEIS
    c = 'a';
    i = 1;
    f = 19.0;
    d = 20000.009;

    printf("%c\n",c);   // %c char
    printf("%d\n",i);   // %d ou %i int
    printf("%f\n",f);   // %f float ou double
    printf("%f\n",d);   // %f float ou double
    puts("\n");
}
/**
    \b retrocesso
    \f alimentaçao de formulario
    \r retorno de carro
    \t tabulação horizontal
    \v tabulação vertical
    \a alerta
    \n nova linha
**/
void teste(void)
{
    char falando[] = "\tOla novo mundo porra\b\b\b\b\bapaguei\n\tcaralho\b\b\b\b\b\b\b puta\b\b\b\b\btomar no\b\bcu\b\bsuco\r\r\n\tagora foram\r\n\tremovidos os palavroes\r\r\f\f";
    int x = 0;    // SÓ UM CONTADOR

    while(falando[x] != '\0')
    {
        putchar(falando[x]);
        sleep(1);           // usleep(5000);
        x++;
    }
}
// ##################################################################
void meuNome(void)
{
    printf("meu nome e Cristiano sou programador\n\n");
}
// ######################### PG 253 ###################################

void tamanhoDaVariavel(void)
{
    char c   = 'c';
    int i    = 123;
    float f  = 98.6;
    double d = 6.022E23;

    printf("TAMANHO DAS VARIAVEIS DESSE PC:\n");
    printf("char  \t%u\n", sizeof(c));
    printf("int   \t%u\n", sizeof(i));
    printf("float \t%u\n", sizeof(f));
    printf("double\t%u\n", sizeof(d));
}
// ************************** PG 78 - 85 ********************************
void nopode(void)
{
    unsigned int ono;
    ono = -10;
    // variavel inteira com numeros negativos, não pode unsigned
    printf("o valor e %u esse numero e erro\n", ono);
}
void pg84()
{
    int c;
    printf("espero um caractere: ");
    c = getchar();     // USO DA FUNÇÃO GETCHAR();
    printf("peguei o caractere %c\n", c);
}
// **********************************************************************
/*  Protótipos para getchar();
    int	                   getchar	     (void)
    Valor de retorno	Nome da função	Argumento
*/
// **********************************************************************
// ************************* PG 86 **************************************
void PG86(void)
{
    int ch;
    printf("Press Enter: ");
    getchar();
    ch = 'H';
    putchar(ch);             // COLOCA UM UNICO CARACTERE NA SAIDA PADRÃO
    ch = 'i';
    putchar(ch);             // ELE RECEBE UM CARACTERE LITERAL DENTRO DOS PARENTESIS
    putchar('!');
}
// ***********************************************************************

// ************************* PG 89 ***************************************
void PG89(void)
{
    char prompt[] = "Tecle enter para explodir: ";
    printf("\n%s", prompt);                          // CARACTERE DE CONVERSÃO DE STRING %S
    getchar();                                     // PAUSA O PROGRAMA
}

// ************************* PG 91 ***************************************
void PG91(void)
{
    char nome[15];
    printf("DIGITE SEU NOME: ");
    scanf("%s", nome);                     // SCANF() LE A ENTRADA DO TECLADO
    printf("Seja Bem Vindo %s.\n", nome);
}

// ************************* PG 94 ***************************************
void PG94(void)
{
    char nome[10];                          // QNATIDADE DE ENTRADA DE TEXTO + 1
    printf("Quem e voce? ");
    fgets(nome,10,stdin);                   // FGETS LE UM A MENOS PORTANTO 9
    printf("eu sou %s.\n", nome);           // EXIBE
}
// ######################### AULA DE PONTEIROS ##########################

void trabalhoPonteiro(void)
{
    int v[10];
    char nome[] = "onze de setembro";
    char *pn;    //CRIA OS PONTEIROS
    int  *pv;

    pv=&v[0];    // LEMBRE PONTEIRO SO ACEITA ENDEREÇOS DE MEMORIA
    pn=&nome[0]; // para pegar o char devemos iniciar na sua primeira posição nesse caso a zero [0]

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
void ponteiroestrutura(void)
{
    struct horario{
        int hora;
        int minuto;
        int segundo;
    };
    struct horario agora, *depois;

    int hora    = 200;
    int minuto  = 300;
    int segundo = 300;

    depois = &agora;

    depois->hora    = 10;  // acessando os menbros da estruturo pelo ponteiro
    depois->minuto  = 20;
    depois->segundo = 30;

    printf("\n%i : %i : %i\n", agora.hora, agora.minuto, agora.segundo);
}
//********************* PONTEIROS ***********************************************
void ponteirosdeestruturas(void)
{
        struct horario{
            int *phora;     // ponteiros dentro de estruturas
            int *pminuto;
            int *psegundo;
        };
    struct horario hoje;    // cria uma variavel do tipo horario

    int hora    = 200;
    int minuto  = 300;
    int segundo = 300;

    hoje.phora    = &hora;  // minha estrutura hoje acessa seus menbros que são ponteiros do tipo horario
    hoje.pminuto  = &minuto;// pega o endereço de memoria das variaveis
    hoje.psegundo = &segundo;

    printf("HORA:    %i\n", *hoje.phora);
    printf("MINUTO:  %i\n", *hoje.pminuto);
    printf("SEGUNDO: %i\n", *hoje.psegundo);

    *hoje.psegundo=1000;    // alterando o valor em tempo de execução
    printf("SEGUNDO ALTERADO: %i\n", *hoje.psegundo);
}
