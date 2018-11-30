#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "endgametest.h"
#include "projet.h"

int defeat_test( int grille_plateau[64][128])
{
    int i = 0;
    int defeat = 0;
    for (i=0;i<128;i++){
        if (grille_plateau[55][i] <= 32 && grille_plateau[55][i] >= 1){
            defeat = 1;
            break;
        }
    }
    return defeat;
}

int victory_test(int grille[4][8])
{
    int victory = 1;
    int i,j = 0;
    for (i=0;i<4;i++){
        for (j=0;j<8;j++){
            if (grille[i][j] != 0){
                victory = 0;
                break;
            }
        if (victory == 0)
                break;
        }
    }
    return victory;
}


        
          
           
            
