/*
*************Aten��o!
Para realizar a compila��o no LINUX, comente a linha 2 do cabe�alho util.h
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
