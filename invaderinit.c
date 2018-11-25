#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "invaderinit.h"

int invmod[8][11];

invmod[0][0]=0;invmod[0][1]=0;invmod[0][2]=1;invmod[0][3]=0;invmod[0][4]=0;invmod[0][5]=0;invmod[0][6]=0;invmod[0][7]=0;invmod[0][8]=1;invmod[0][9]=0;invmod[0][10]=0;
invmod[1][0]=0;invmod[1][1]=0;invmod[1][2]=0;invmod[1][3]=1;invmod[1][4]=0;invmod[1][5]=0;invmod[1][6]=0;invmod[1][7]=1;invmod[1][8]=0;invmod[1][9]=0;invmod[1][10]=0;
invmod[2][0]=0;invmod[2][1]=0;invmod[2][2]=1;invmod[2][3]=1;invmod[2][4]=1;invmod[2][5]=1;invmod[2][6]=1;invmod[2][7]=1;invmod[2][8]=1;invmod[2][9]=0;invmod[2][10]=0;
invmod[3][0]=0;invmod[3][1]=1;invmod[3][2]=1;invmod[3][3]=0;invmod[3][4]=1;invmod[3][5]=1;invmod[3][6]=1;invmod[3][7]=0;invmod[3][8]=1;invmod[3][9]=1;invmod[3][10]=0;
invmod[4][0]=1;invmod[4][1]=1;invmod[4][2]=1;invmod[4][3]=1;invmod[4][4]=1;invmod[4][5]=1;invmod[4][6]=1;invmod[4][7]=1;invmod[4][8]=1;invmod[4][9]=1;invmod[4][10]=1;
invmod[5][0]=1;invmod[5][1]=0;invmod[5][2]=1;invmod[5][3]=1;invmod[5][4]=1;invmod[5][5]=1;invmod[5][6]=1;invmod[5][7]=1;invmod[5][8]=1;invmod[5][9]=0;invmod[5][10]=1;
invmod[6][0]=1;invmod[6][1]=0;invmod[6][2]=1;invmod[6][3]=0;invmod[6][4]=0;invmod[6][5]=0;invmod[6][6]=0;invmod[6][7]=0;invmod[6][8]=1;invmod[6][9]=0;invmod[6][10]=1;
invmod[7][0]=0;invmod[7][1]=0;invmod[7][2]=0;invmod[7][3]=1;invmod[7][4]=1;invmod[7][5]=0;invmod[7][6]=1;invmod[7][7]=1;invmod[7][8]=0;invmod[7][9]=0;invmod[7][10]=0;

void init_inv(grille=[4][8]){ //initialise le premier niveau
    grille[0][0]=0; grille[0][1]=0; grille[0][2]=0; grille[0][3]=0; grille[0][4]=0; grille[0][5]=0; grille[0][6]=0; grille[0][7]=0;
    grille[1][0]=0; grille[1][1]=0; grille[1][2]=0; grille[1][3]=0; grille[1][4]=0; grille[1][5]=0; grille[1][6]=0; grille[1][7]=0;
    grille[2][0]=0; grille[2][1]=0; grille[2][2]=0; grille[2][3]=0; grille[2][4]=0; grille[2][5]=0; grille[2][6]=0; grille[2][7]=0;
    grille[3][0]=0; grille[3][1]=0; grille[3][2]=0; grille[3][3]=0; grille[3][4]=0; grille[3][5]=0; grille[3][6]=0; grille[3][7]=0;
}
void aff_invader(invmod[8][11])
{
    int x_start = 13;
    int y_start = 1;
}
