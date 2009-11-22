#include "OperacoesGraficas.h"
#include <math.h>

/*[INICIO]Obsoleta=====================================================================================*/
void inicializaEstrutura(void)
{
#if 0
	preenche o nome com vazio
	memset(forma.nome,0,TAMANHO_MAXIMO_NOME*sizeof(char));
	preenche a matriz com ZERO literal
	memset(forma.matriz_pontos,'0',TAMANHO_MAXIMO_MATRIZ*TAMANHO_MAXIMO_MATRIZ*sizeof(char));
#endif
}
/*[FIM]Obsoleta========================================================================================*/



void limpaSprite()
{
	int contadorColunas,contadorLinhas ;

    for( contadorLinhas = 0 ; contadorLinhas < (TAMANHO_MAXIMO_MATRIZ_LINHAS-1) ; contadorLinhas++ )
    {
        for( contadorColunas = 0 ; contadorColunas < (TAMANHO_MAXIMO_MATRIZ_COLUNAS-1) ; contadorColunas++ )
        {
			sprite[contadorLinhas][contadorColunas] = '.';
        }
    }
	system(CLEAR_SCREEN);
}

void desenhaNoSprite()
{
	int ponto=0;
	int x=1;
	int y=0;
	int temp_x=0;
	int temp_y=0;

	for(ponto=0; ponto<qtd_pontos; ponto++){
		temp_x=figura[ponto][x];
		temp_y=figura[ponto][y];

		/* Aredondando os valores*/
		if((figura[ponto][x] - temp_x) > 0.5)
		{
			temp_x++;
		}

		if((figura[ponto][y] - temp_y) > 0.5)
		{
			temp_y++;
		}

		/* Aplicando escala*/
		temp_x *= scale;
		temp_y *= scale;

		/* Movendo a figura para a posição indicada*/
		temp_x += fig_pos[x];
		temp_y += fig_pos[y];

		/*Os pontos só devem ser desenhados se estiverem dentro do sprite*/
		if((temp_x >= 0 && temp_x < TAMANHO_MAXIMO_MATRIZ_COLUNAS) && (temp_y >= 0 && temp_y < TAMANHO_MAXIMO_MATRIZ_LINHAS))
        {
            sprite[temp_y][temp_x] = CARACTERE_DESENHO;
        }
	}
}

void movefigura()
{
	int ponto=0;
	int comando = 0;
	int x=1;
	int y=0;
	int angulo = 0;
	float temp_x=0;
	float temp_y=0;

	comando = getch();

    switch(comando)
    {
        case 27 : /* ESC */
        {
            exit(0);
            break;
        }

        case 45 : /* Menos*/
        {
            scale -= 0.3;
            break;
        }

        case 43 : /* Mais*/
        {
            scale += 0.3;
            break;
        }

        case 52 : /* esquerda*/
        {
            fig_pos[x]--;
            break;
        }

        case 54:/* direita*/
        {
            fig_pos[x]++;
            break;
        }

        case 56:/* acima*/
        {
            fig_pos[y]--;
            break;
        }

        case 50:/* abaixo*/
        {
            fig_pos[y]++;
            break;
        }

        case 55:/* Roda sentido ant-horario*/
        {
            angulo = -30;
            for(ponto=0; ponto<qtd_pontos; ponto++){

                figura[ponto][x] -= rot_pos[x];
                figura[ponto][y] -= rot_pos[y];

                temp_x = (figura[ponto][x])* cos(angulo*3.14/180) - (figura[ponto][y])* sin(angulo*3.14/180);
                temp_y = (figura[ponto][x]) * sin(angulo*3.14/180) + (figura[ponto][y]) * cos(angulo*3.14/180);

                figura[ponto][x] = temp_x + rot_pos[x];
                figura[ponto][y] = temp_y + rot_pos[y];
            }
            break;
        }

        case 57:/* Roda sentido horario*/
        {
            angulo = 30;
            for(ponto=0; ponto<qtd_pontos; ponto++){
                figura[ponto][x] -= rot_pos[x];
                figura[ponto][y] -= rot_pos[y];

                temp_x = (figura[ponto][x])* cos(angulo*3.14/180) - (figura[ponto][y])* sin(angulo*3.14/180);	/*Rotação de X*/
                temp_y = (figura[ponto][x]) * sin(angulo*3.14/180) + (figura[ponto][y]) * cos(angulo*3.14/180);	/*Rotaçao de Y*/

                figura[ponto][x] = temp_x + rot_pos[x];
                figura[ponto][y] = temp_y + rot_pos[y];
            }
            break;
        }

        default:
        {
            break;
        }
    }







/*75 esquerda*/
/*77 direita*/
}

void imprimeSprite()
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



