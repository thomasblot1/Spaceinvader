#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projet.h"



int playermodel[6][11];
playermodel[0][0]=0;playermodel[0][1]=0;playermodel[0][2]=0;playermodel[0][3]=0;playermodel[0][4]=0;playermodel[0][5]=1;playermodel[0][6]=0;playermodel[0][7]=0;playermodel[0][8]=0;playermodel[0][9]=0;playermodel[0][10]=0;
playermodel[1][0]=0;playermodel[1][1]=0;playermodel[1][2]=0;playermodel[1][3]=0;playermodel[1][4]=0;playermodel[1][5]=1;playermodel[1][6]=0;playermodel[1][7]=0;playermodel[1][8]=0;playermodel[1][9]=0;playermodel[1][10]=0;
playermodel[2][0]=0;playermodel[2][1]=0;playermodel[2][2]=1;playermodel[2][3]=0;playermodel[2][4]=1;playermodel[2][5]=1;playermodel[2][6]=1;playermodel[2][7]=0;playermodel[2][8]=1;playermodel[2][9]=0;playermodel[2][10]=0;
playermodel[3][0]=1;playermodel[3][1]=0;playermodel[3][2]=1;playermodel[3][3]=1;playermodel[3][4]=1;playermodel[3][5]=1;playermodel[3][6]=1;playermodel[3][7]=1;playermodel[3][8]=1;playermodel[3][9]=0;playermodel[3][10]=1;
playermodel[4][0]=1;playermodel[4][1]=1;playermodel[4][2]=1;playermodel[4][3]=1;playermodel[4][4]=1;playermodel[4][5]=1;playermodel[4][6]=1;playermodel[4][7]=1;playermodel[4][8]=1;playermodel[4][9]=1;playermodel[4][10]=1;
playermodel[5][0]=0;playermodel[5][1]=0;playermodel[5][2]=1;playermodel[5][3]=0;playermodel[5][4]=1;playermodel[5][5]=0;playermodel[5][6]=1;playermodel[5][7]=0;playermodel[5][8]=1;playermodel[5][9]=0;playermodel[5][10]=0;



void fire(playerpos, grille_plateau[64][128]){
    grille_plateau[56][playerpos] = 66;
    grille_plateau[57][playerpos] = 66;
}
void dep_tirs(grille_plateau[64][128], *grille[4][8]){
    int i,j = 0;
    for (i=0;i<64;i++){
        for (j=0;j<128;j++){
            if (grille_plateau[i][j]==66){
                if (grille_plateau[i-1][j] <= 32 && grille plateau >= 1){
                    invdeath(num, *grille[4][8]);
                    grille_plateau[i][j] = 0;
                    grille_plateau[i+1][j] = 0;
                }
                else if(i-1 == 0){
                    grille_plateau[i][j] = 0;
                    grille_plateau[i+1][j] = 0;
                }
                else{
                    grille_plateau[i-1][j] = 66;
                    grille_plateau[i+1][j] = 0;
                }
            }
        }
    }
}
