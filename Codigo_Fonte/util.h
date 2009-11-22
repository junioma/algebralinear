/*MANTEM COMPATIBILIDADE COM WINDOWS NO LINUX QUANDO DESABILITADA*/
#define SO_WINDOWS

#if defined(SO_WINDOWS)

#include <windows.h>
void gotoxy(int linha,int coluna);

#else
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <termios.h>
#include <sys/ioctl.h>
typedef unsigned int keybd_t;



keybd_t getch(void);


#endif
