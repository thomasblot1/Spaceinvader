#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DECLARATION DES VARIABLES GLOBALES

int grille[4][8];
int grille_plateau[64][128];
int deplacement_possible=0;
int invmod[
//DECLARATION DES STRUCTURES
typedef struct joueur{
    int touche;
};
typedef struct invader{
    int pv;
    int positioncentrale;
    int numero_d_identification;
};


//DECLARATION DES FONCTIONS
void aff_invader(){ //imprime un invader dans la grille_plateau avec son numéro

}
void cleanse( grille_plateau[64][128]){ //vide grille_plateau de toutes valeurs
    int i,j = 0;
    for (i<64;i=0;i++){
        for (j<128;j=0;j++){
            grille_plateau[i][j] = 0;
        }
    }
}


void init_inv(grille=[4][8]){ //initialise le premier niveau
    grille[0][0]=0; grille[0][1]=0; grille[0][2]=0; grille[0][3]=0; grille[0][4]=0; grille[0][5]=0; grille[0][6]=0; grille[0][7]=0;
    grille[1][0]=0; grille[1][1]=0; grille[1][2]=0; grille[1][3]=0; grille[1][4]=0; grille[1][5]=0; grille[1][6]=0; grille[1][7]=0;
    grille[2][0]=0; grille[2][1]=0; grille[2][2]=0; grille[2][3]=0; grille[2][4]=0; grille[2][5]=0; grille[2][6]=0; grille[2][7]=0;
    grille[3][0]=0; grille[3][1]=0; grille[3][2]=0; grille[3][3]=0; grille[3][4]=0; grille[3][5]=0; grille[3][6]=0; grille[3][7]=0;
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

depinvader()
defeat()
dep_tirs()
damagetest()
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
        affichage (grille_plateau)

        //incrémentation des valeurs
        playerclock ++;
        invader clock ++;
        if (cooldown < 0)
            cooldown --;
        wait ();

    }
