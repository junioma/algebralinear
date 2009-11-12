#include "OperacoesGraficas.h"

//Obsoleta
void inicializaEstrutura(void)
{
	//preenche o nome com vazio
	//memset(forma.nome,0,TAMANHO_MAXIMO_NOME*sizeof(char));
	//preenche a matriz com ZERO literal
	//memset(forma.matriz_pontos,'0',TAMANHO_MAXIMO_MATRIZ*TAMANHO_MAXIMO_MATRIZ*sizeof(char));
}



void imprimeSprite(int colunas,int linhas)
{
    int contadorColunas,contadorLinhas ;

    for( contadorLinhas = 0 ; contadorLinhas < (TAMANHO_MAXIMO_MATRIZ_LINHAS-1) ; contadorLinhas++ )
    {
        for( contadorColunas = 0 ; contadorColunas < (TAMANHO_MAXIMO_MATRIZ_COLUNAS-1) ; contadorColunas++ )
        {
			printf("%c",sprite[contadorLinhas][contadorColunas]);
        }
        printf("\n");
    }
}



