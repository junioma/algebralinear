#include "OperacoesGraficas.h"
void inicializaEstrutura(void)
{
	//preenche o nome com vazio
	memset(forma.nome,0,TAMANHO_MAXIMO_NOME*sizeof(char));
	//preenche a matriz com ZERO literal
	memset(forma.matriz_pontos,'0',TAMANHO_MAXIMO_MATRIZ*TAMANHO_MAXIMO_MATRIZ*sizeof(char));
}