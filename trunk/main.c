#include <stdio.h>

/*static char *sprite;
sprite = malloc(TAMANHO_MAXIMO_MATRIZ_LINHAS * TAMANHO_MAXIMO_MATRIZ_COLUNAS * sizeof(char));
menset(sprite, 0, TAMANHO_MAXIMO_MATRIZ_LINHAS * TAMANHO_MAXIMO_MATRIZ_COLUNAS * sizeof(char));*/

#include "OperacoesGraficas.h"

int main(void)
{
	while(1){
		limpaSprite();
		desenhaSprite();
		imprimeSprite();
		rodafigura();
	}
	

    //dgetch();
	//system("pause");
	getch();
	

}
