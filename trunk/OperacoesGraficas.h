#ifndef OPERACOESGRAFICAS_H_INCLUDED
    #define OPERACOESGRAFICAS_H_INCLUDED
#endif // OPERACOESGRAFICAS_H_INCLUDED
#define TAMANHO_MAXIMO_MATRIZ 20
#define	TAMANHO_MAXIMO_NOME 20
/*Tipos================================================================*/
struct struct_forma
{
	char matriz_pontos[TAMANHO_MAXIMO_MATRIZ][TAMANHO_MAXIMO_MATRIZ];
	char nome[TAMANHO_MAXIMO_NOME] ;
}forma;

/*Prototipos===========================================================*/

//Função responsável por limpar a área de memória estrutura
void inicializaEstrutura(void);
