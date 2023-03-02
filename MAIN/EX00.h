/**********************************************************************
*   qualquer duvida preste atenção na hora de criar um arquivo .h
*   note que o prorpio codeblocks adiciona o _INCLUDED então devemos
*   colocar.
*   ainda tenho que aprender adicionar arquivos externos
*
**********************************************************************/
#ifndef EX00_INCLUDED                  // ATENÇÃO O _INCLUDED DEVE ESTAR NA DECLARAÇÃO
#define EX00_INCLUDED

/**********************************************************************
*                       prototipos
***********************************************************************/
void CONFIG(void);                     // CONFIGURAÇÃO INICIAL COR ETC.. DA JANELA
void EX00(void);                       // APRESENTAÇÃO COM SLEEP
void EX00_1(void);                     // USA UM WHILE PRA ESCREVER LETRA POR LETRA
void EX00_2(void);                     // COMO DECLARAR INICIALIAR E USAR VARIAVEIS COM SEUS OPERADORES
void EX00_3(void);                     // USO DOS OPERADORES DA LINGUAGEM PARA APAGAR E REMOVER COISAS
void EX00_4(void);                     // SÓ MEU NOME
void EX00_5(void);                     // SIZEOF PARA EXIBIR O TAMANHO DAS COISAS
void EX00_12(void);                    // CRIA INICIALIZA E PERCORRE UM PONTEIRO
void EX00_6(void);                     // UNSIGNED NEGATIVO NÃO PODE
void EX00_7();                         // COMO USAR GETCHAR(); VALOR DE RETORNO NOME DA FUNÇÃO E ARGUMENTO
void EX00_8(void);                     // USO DA FUNÇÃO GETCHAR(); RETORNA UM UNICO CARACTERE RECEBE UM CARACTERE LITERAL
void EX00_9(void);                     // %S CARACTERE DE CONVERSÃO DE STRINGS
void EX00_10(void);                    // USO DO SCANF(); LER A SAIDA PADRÃO
void EX00_11(void);                    // FGETS(); LE SEMPRE UM A MENOS \0
void EX00_15(void);                    // SIZEOF PRA TAMANHO DA STRING
void EX00_16(void);                    // SIZEOF PRA TAMANHO DA STRUCT
void EX00_13(void);                    // CRIA STRUCT HORARIO  E UM PONTEIRO DO MESMO TIPO STRUCT HORARIO
void EX00_14(void);                    // CRIA PONTEIROS DENTRO DE ESTRUTURAS E USA ELES COM ->
void EX00_17();                        // IF E ELSE TOMADA DE DECISÕES SIMPLES UMA DECISÃO
void EX00_18();                        // TOMADA DE DECISÃO SIMPLES COMPARANDO VALORES
void EX00_19();                        // DEFINE UMA CONSTANTE E COMPARA OS VALORES
void EX00_20();                        // A SAIDA PODE CONFUNDIR
void EX00_21();                        // PONTEIRO PARA FUNÇÃO
void EX00_22();                        // PONTEIRO COMO PARAMETRO DE FUNÇÃO
void EX00_23();                        // MOSTRA UM DESENHO
void EX00_24();                        // CRIA DIRETORIO
void EX00_25();                        // PONTEIRO COMO NOTAÇÃO ARRAY
#endif // EX00
