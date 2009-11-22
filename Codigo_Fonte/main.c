/*
*************Atenção!
Para realizar a compilação no LINUX, comente a linha 2 do cabeçalho util.h
*/

#include <stdio.h>
#include "OperacoesGraficas.h"

int main(void)
{
	while(1){
		limpaSprite();		/*Preenche o sprite com pontos*/
		desenhaNoSprite();
		imprimeSprite();
		movefigura();
	}

	getch();


}
