#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "invaderinit.h"
#include "projet.h"


void init_inv(grille=[4][8]){ //initialise le premier niveau
    grille[0][0]=1; grille[0][1]=2; grille[0][2]=3; grille[0][3]=4; grille[0][4]=5; grille[0][5]=6; grille[0][6]=7; grille[0][7]=8;
    grille[1][0]=9; grille[1][1]=10; grille[1][2]=11; grille[1][3]=12; grille[1][4]=13; grille[1][5]=14; grille[1][6]=15; grille[1][7]=16;
    grille[2][0]=17; grille[2][1]=18; grille[2][2]=19; grille[2][3]=20; grille[2][4]=21; grille[2][5]=22; grille[2][6]=23; grille[2][7]=24;
    grille[3][0]=25; grille[3][1]=26; grille[3][2]=28; grille[3][3]=28; grille[3][4]=29; grille[3][5]=30; grille[3][6]=31; grille[3][7]=32;
}
void aff_invader(grille_plateau[64][128], grille[4][8])  //imprime un invader dans la grille_plateau avec son numero
{
    int invmod[8][11];
    invmod[0][0]=0;invmod[0][1]=0;invmod[0][2]=1;invmod[0][3]=0;invmod[0][4]=0;invmod[0][5]=0;invmod[0][6]=0;invmod[0][7]=0;invmod[0][8]=1;invmod[0][9]=0;invmod[0][10]=0;
    invmod[1][0]=0;invmod[1][1]=0;invmod[1][2]=0;invmod[1][3]=1;invmod[1][4]=0;invmod[1][5]=0;invmod[1][6]=0;invmod[1][7]=1;invmod[1][8]=0;invmod[1][9]=0;invmod[1][10]=0;
    invmod[2][0]=0;invmod[2][1]=0;invmod[2][2]=1;invmod[2][3]=1;invmod[2][4]=1;invmod[2][5]=1;invmod[2][6]=1;invmod[2][7]=1;invmod[2][8]=1;invmod[2][9]=0;invmod[2][10]=0;
    invmod[3][0]=0;invmod[3][1]=1;invmod[3][2]=1;invmod[3][3]=0;invmod[3][4]=1;invmod[3][5]=1;invmod[3][6]=1;invmod[3][7]=0;invmod[3][8]=1;invmod[3][9]=1;invmod[3][10]=0;
    invmod[4][0]=1;invmod[4][1]=1;invmod[4][2]=1;invmod[4][3]=1;invmod[4][4]=1;invmod[4][5]=1;invmod[4][6]=1;invmod[4][7]=1;invmod[4][8]=1;invmod[4][9]=1;invmod[4][10]=1;
    invmod[5][0]=1;invmod[5][1]=0;invmod[5][2]=1;invmod[5][3]=1;invmod[5][4]=1;invmod[5][5]=1;invmod[5][6]=1;invmod[5][7]=1;invmod[5][8]=1;invmod[5][9]=0;invmod[5][10]=1;
    invmod[6][0]=1;invmod[6][1]=0;invmod[6][2]=1;invmod[6][3]=0;invmod[6][4]=0;invmod[6][5]=0;invmod[6][6]=0;invmod[6][7]=0;invmod[6][8]=1;invmod[6][9]=0;invmod[6][10]=1;
    invmod[7][0]=0;invmod[7][1]=0;invmod[7][2]=0;invmod[7][3]=1;invmod[7][4]=1;invmod[7][5]=0;invmod[7][6]=1;invmod[7][7]=1;invmod[7][8]=0;invmod[7][9]=0;invmod[7][10]=0;
    int i,j,k,l = 0;
    int x = 13;
    int y = 1;
    for (k=0;k<4;k++){
        for (l=0;l<8;l++){
            for (i=0;i<8;i++){
                for (j=0;j<11;j++){
                    if (invmod[i][j] && (grille[k][l] != 0))
                        grille_plateau[y + i + 9 * k][x + j + 13 * l] = grille[k][l];
                }
            }
        }
    }
}
