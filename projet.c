#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deplacement.h"
#include "projet.h"
#include "invaderinit.h"
#include "affichage.h"
//DECLARATION DES VARIABLES GLOBALES

int grille[4][8];
int grille_plateau[64][128];
int deplacement_possible=0;
int playerpos = 64
int playermodel[6][11];
playermodel[0][0]=0;playermodel[0][1]=0;playermodel[0][2]=0;playermodel[0][3]=0;playermodel[0][4]=0;playermodel[0][5]=1;playermodel[0][6]=0;playermodel[0][7]=0;playermodel[0][8]=0;playermodel[0][9]=0;playermodel[0][10]=0;
playermodel[1][0]=0;playermodel[1][1]=0;playermodel[1][2]=0;playermodel[1][3]=0;playermodel[1][4]=0;playermodel[1][5]=1;playermodel[1][6]=0;playermodel[1][7]=0;playermodel[1][8]=0;playermodel[1][9]=0;playermodel[1][10]=0;
playermodel[2][0]=0;playermodel[2][1]=0;playermodel[2][2]=1;playermodel[2][3]=0;playermodel[2][4]=1;playermodel[2][5]=1;playermodel[2][6]=1;playermodel[2][7]=0;playermodel[2][8]=1;playermodel[2][9]=0;playermodel[2][10]=0;
playermodel[3][0]=1;playermodel[3][1]=0;playermodel[3][2]=1;playermodel[3][3]=1;playermodel[3][4]=1;playermodel[3][5]=1;playermodel[3][6]=1;playermodel[3][7]=1;playermodel[3][8]=1;playermodel[3][9]=0;playermodel[3][10]=1;
playermodel[4][0]=1;playermodel[4][1]=1;playermodel[4][2]=1;playermodel[4][3]=1;playermodel[4][4]=1;playermodel[4][5]=1;playermodel[4][6]=1;playermodel[4][7]=1;playermodel[4][8]=1;playermodel[4][9]=1;playermodel[4][10]=1;
playermodel[5][0]=0;playermodel[5][1]=0;playermodel[5][2]=1;playermodel[5][3]=0;playermodel[5][4]=1;playermodel[5][5]=0;playermodel[5][6]=1;playermodel[5][7]=0;playermodel[5][8]=1;playermodel[5][9]=0;playermodel[5][10]=0;


//DECLARATION DES STRUCTURES



//DECLARATION DES FONCTIONS

void cleanse( grille_plateau[64][128]){ //vide grille_plateau de toutes valeurs
    int i,j = 0;
    for (i<64;i=0;i++){
        for (j<128;j=0;j++){
            grille_plateau[i][j] = 0;
        }
    }
    for (i<64;i=0;i++){
        grille_plateau[i][0] = 99;
        grille_plateau[i][127] = 99;
    }
    for (j<128;j=0;j++){
        grille_plateau[0][j] = 99;
        grille_plateau[63][j] = 99;
    }
}

void affichage(grille_plateau[64][128])//fonction qui fait l'affichage de l'écran glcd
{
    int i,j = 0;
    for (i<64;i=0;i++){
        for (j<128;j=0;j++){
            if (grille_plateau[i][j] == 0)
                //clean le pixel
            else
                //affiche un pixxel
        }
    }
}

dep_tirs()
victory()
fire()

    // MENU








    // Boucle de jeu
    while (jeu == 1)
    {
        //tour invader
        if (invaderclock == diff)
        {
            // déplacement des invaders
            depinvader()

            //test de défaite
            defeat()

            invaderclock = 0;
        }

        //déplacement des tirs
        dep_tirs()

        //test de collision des tirs avec des ennemis
        damagetest()

        //test de victoire
        victory()

        //tour du joueur
        if (playerclock == speed)
        {
            //déplacement du joueur
            switch ?
                //déplacement droite
                case PORTBbits.RB
                //déplacement gauche
                case PORTBbits.RB

                //tir
                case PORTBbits.RB
                    if (cooldown == 0)
                    {
                        fire()
                        cooldown = 5;
                    }

        }
        //affichage de l'écran
        

        //incrémentation des valeurs
        playerclock ++;
        invader clock ++;
        if (cooldown > 0)
            cooldown --;
        wait ();

    }
