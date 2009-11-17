#include "util.h"

//implementação do gotoxy para windows
void gotoxy(int linha,int coluna)
{
	COORD coord;
	coord.X = coluna;
	coord.Y = linha;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 