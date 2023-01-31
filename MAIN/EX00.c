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
    char   c;
    int    i;
    float  f;
    double d;

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
    int x = 0;

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
    char c = 'c';
    int i = 123;
    float f = 98.6;
    double d = 6.022E23;

    printf("TAMANHO DAS VARIAVEIS DESSE PC:\n");
    printf("char\t%u\n", sizeof(c));
    printf("int\t%u\n", sizeof(i));
    printf("float\t%u\n", sizeof(f));
    printf("double\t%u\ n", sizeof(d));
}
// ######################### AULA DE PONTEIROS ##########################

void trabalhoPonteiro(void)
{
    int v[10];
    char nome[] = "onze de setembro";
    char *pn;
    int  *pv;

    pv=&v[0];
    pn=&nome[0];

    for(int b=0; b<10; b++){
        v[b] = b*b;
    }
    for(int b=0; b<10; b++){
        printf("\n%d %d",*pv++, v[b]);
    }
    while(*pn){
        printf("\n%c", *pn++);
    }

}
