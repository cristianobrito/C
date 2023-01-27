#include <stdio.h>
#include <stdlib.h>
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

void meuNome(void)
{
    printf("meu nome e Cristiano sou programador");
}
