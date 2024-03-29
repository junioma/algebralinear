#include "util.h"

#ifndef OPERACOESGRAFICAS_H_INCLUDED
    #define OPERACOESGRAFICAS_H_INCLUDED
#endif /* OPERACOESGRAFICAS_H_INCLUDED */
#if defined(SO_WINDOWS)
    #define CLEAR_SCREEN "cls"
#else
    /*#define getch() getchar()*/ /*consegui uma implementa��o da web*/
    #define CLEAR_SCREEN "clear"
#endif



#define TAMANHO_MAXIMO_MATRIZ_COLUNAS 40
#define TAMANHO_MAXIMO_MATRIZ_LINHAS 20
#define	TAMANHO_MAXIMO_NOME 2
#define CARACTERE_DESENHO '@'
typedef enum _ENUM_TAMANHOS{
	ENUM_TAMANHO_IMAGEM_BACTERIAS = 24,
	ENUM_TAMANHO_IMAGEM_ROSTO = 34
} ENUM_TAMANHOS;
/*IMAGENS DISPON�VEIS========================*/
#define IMAGEM_BACTERIAS
/*#define IMAGEM_ROSTO*/
/*===========================================*/

/*Tipos================================================================*/

/*Prototipos===========================================================*/
static char sprite[TAMANHO_MAXIMO_MATRIZ_LINHAS][TAMANHO_MAXIMO_MATRIZ_COLUNAS] =
{
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

/*------------------ Dados da figura ----------------------------*/

/* COLONIA DE BACT�RIAS*/
#if defined(IMAGEM_BACTERIAS)
static float figura[][2] =
{
	{0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},
	{0,1},                                    {7,1},
	{0,2},                                    {7,2},
	{0,3},                                    {7,3},
	{0,4},                                    {7,4},
	{0,5},{1,5},{2,5},{3,5},{4,5},{5,5},{6,5},{7,5}
};
/* Quantidade de pontos na figura:*/
static char qtd_pontos = ENUM_TAMANHO_IMAGEM_BACTERIAS;
#elif defined(IMAGEM_ROSTO)
//{linha,coluna}

static float figura[][2] =
{
	{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},
	{1,0},                                    {1,7},
	{2,0},      {2,2},      {2,4},            {2,7},
	{3,0},                                    {3,7},
	{4,0},                                    {4,7},
	{5,0},      {5,2},{5,3},                  {5,7},
	{6,0},{6,1},{6,2},{6,3},{6,4},{6,5},{6,6},{6,7}
};
// Quantidade de pontos na figura:
static char qtd_pontos = ENUM_TAMANHO_IMAGEM_ROSTO;
#endif

/* Eixo de rota��o*/
static char rot_pos[2] = {3, 3};

/* Posi��o da figura (linha - Y, coluna - X)*/
static char fig_pos[2] = {4, 14};

/* escala*/
static float scale = 1;

/* ---------------------------------------------------------------*/

/*[INICIO]OBSOLETA===========================================*/
/*Fun��o respons�vel por limpar a �rea de mem�ria estrutura*/
void inicializaEstrutura(void);
/*[FIM]OBSOLETA===========================================*/

void limpaSprite();

void desenhaNoSprite();

void movefigura();

void imprimeSprite();
