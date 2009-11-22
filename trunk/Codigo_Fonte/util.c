#include "util.h"

#if defined(SO_WINDOWS)

/*implementação do gotoxy para windows*/
void gotoxy(int linha,int coluna)
{
	COORD coord;
	coord.X = coluna;
	coord.Y = linha;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

#else


/*
*Implemetação obtida do site : http://blog.jorgepereira.com.br/2008/07/29/getch-no-linux/
*para manter compatibilidade entre windows e linux


*/
keybd_t getch (void)
{
	struct termio old_tty;	 /* current terminal settings */
	struct termio new_tty;	 /* new terminal settings     */
	keybd_t	key = 0;         /* character "buffer"	      */

	if (ioctl(STDIN_FILENO, TCGETA, &old_tty) < 0)
	{
		fprintf(stderr,"Port ioctl(TCGETA) it's failed, exiting...\n");
		exit(EXIT_FAILURE);
	}

	new_tty 	 = old_tty;		/* copy terminal settings    */
	new_tty.c_lflag &= ~(ICANON | ECHO);	/* set flags in teminal      */
	new_tty.c_cc[4]  = 01;			/* struct for raw mode	     */

	if (ioctl(STDIN_FILENO, TCSETA, &new_tty) < 0)
	{
		fprintf(stderr,"Port ioctl(TCSETA) it's failed, exiting...\n");
		exit(EXIT_FAILURE);
	}

	if(read(STDIN_FILENO, &key, sizeof(key)) < 0)
	{
		fprintf(stderr,"Problems in read()\n");
		exit(EXIT_FAILURE);
	}

	if (ioctl(STDIN_FILENO, TCSETA, &old_tty) < 0)
	{
		fprintf(stderr,"Port ioctl(TCSETA) it's failed, exiting...\n");
		exit(EXIT_FAILURE);
	}

	return key;
}

#endif /* end if defined(SO_WINDOWS)*/
