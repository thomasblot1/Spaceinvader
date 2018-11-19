#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//DECLARATION DES VARIABLES GLOBALES

int grille[4][8];
int grille_plateau[64][128];
int deplacement_possible=0;
int invmod[8][11];

invmod[0][0]=0;invmod[0][1]=0;invmod[0][2]=1;invmod[0][3]=0;invmod[0][4]=0;invmod[0][5]=0;invmod[0][6]=0;invmod[0][7]=0;invmod[0][8]=1;invmod[0][9]=0;invmod[0][10]=0;
invmod[1][0]=0;invmod[1][1]=0;invmod[1][2]=0;invmod[1][3]=1;invmod[1][4]=0;invmod[1][5]=0;invmod[1][6]=0;invmod[1][7]=1;invmod[1][8]=0;invmod[1][9]=0;invmod[1][10]=0;
invmod[2][0]=0;invmod[2][1]=0;invmod[2][2]=1;invmod[2][3]=1;invmod[2][4]=1;invmod[2][5]=1;invmod[2][6]=1;invmod[2][7]=1;invmod[2][8]=1;invmod[2][9]=0;invmod[2][10]=0;
invmod[3][0]=0;invmod[3][1]=1;invmod[3][2]=1;invmod[3][3]=0;invmod[3][4]=1;invmod[3][5]=1;invmod[3][6]=1;invmod[3][7]=0;invmod[3][8]=1;invmod[3][9]=1;invmod[3][10]=0;
invmod[4][0]=1;invmod[4][1]=1;invmod[4][2]=1;invmod[4][3]=1;invmod[4][4]=1;invmod[4][5]=1;invmod[4][6]=1;invmod[4][7]=1;invmod[4][8]=1;invmod[4][9]=1;invmod[4][10]=1;
invmod[5][0]=1;invmod[5][1]=0;invmod[5][2]=1;invmod[5][3]=1;invmod[5][4]=1;invmod[5][5]=1;invmod[5][6]=1;invmod[5][7]=1;invmod[5][8]=1;invmod[5][9]=0;invmod[5][10]=1;
invmod[6][0]=1;invmod[6][1]=0;invmod[6][2]=1;invmod[6][3]=0;invmod[6][4]=0;invmod[6][5]=0;invmod[6][6]=0;invmod[6][7]=0;invmod[6][8]=1;invmod[6][9]=0;invmod[6][10]=1;
invmod[7][0]=0;invmod[7][1]=0;invmod[7][2]=0;invmod[7][3]=1;invmod[7][4]=1;invmod[7][5]=0;invmod[7][6]=1;invmod[7][7]=1;invmod[7][8]=0;invmod[7][9]=0;invmod[7][10]=0;

//DECLARATION DES STRUCTURES
typedef struct joueur{
    int touche;
};
typedef struct invader{
    int pv;
    int positioncentrale;
    int invid;
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
void deplacement_horizontal_inv(){ 
  
  int i,j = 0;
  char gauche='oui';
  while(deplacement_possible==1){
    if(gauche=='oui'){
      for(i=0;i<64;i++){
        for(y=0;y<128;y++){
          if(grille_plateau[i][y]!=0){
            grille_plateau[i][y+1]=grille_plateau[i][y];
            grille_plateau[i][y]=0;
          }
        }
      }
    }
  else{
         for(i=0;i<64;i++){
             for(y=0;y<128;y++){
                 if(grille_plateau[i][y]!=0){
                     grille_plateau[i+1][y]=grille_plateau[i][y];
                     grille_plateau[i][y]=0;
                 }
             }
         }
     }
   }
}
int deplacementtest(grille_plateau[64][128]){
     for(int numero_invader_test=1;numero_invader_test<=40;numero_invader_test++){
         
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
