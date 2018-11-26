#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deplacement.h"
#include "projet.h"
void deplacement_horizontal_inv(bool*gauche, int grille_plateau[64][128],int*deplacement_possible){

  int i,j = 0;

  while(deplacement_possible==1){
    if(gauche==true){
      for(i=0;i<64;i++){
        for(y=0;y<128;y++){
          if(grille_plateau[i][y]!=0){
            grille_plateau[i][y-1]=grille_plateau[i][y];
            grille_plateau[i][y]=0;
          }
        }
      }
    }
  else{
         for(i=0;i<64;i++){
             for(y=0;y<128;y++){
                 if(grille_plateau[i][y]!=0){
                     grille_plateau[i][y+1]=grille_plateau[i][y+1];
                     grille_plateau[i][y]=0;
                 }
             }
         }
     }
   }
}
int deplacementtest(&gauche,grille_plateau[64][128]){
  int i=0,y=1;

  if(gauche==true){
    for(i;i<64;i++){
      if(grille_plateau[i][1]!=99){

      }
      else{
        deplacement_possible=0;
      }
    }
    return(deplacement_possible);
  }

}
void deplacement(int grille_plateau[64][128],int*gagne){//deplacement des invaders et non du joueur
  bool gauche=true;
  if(deplacementtest(&gauche,grille_plateau[64][128])==0){
      deplacement_horizontal_inv(&gauche, grille_plateau[64][128],&deplacement_possible);
  }
  else{
      deplacement_vertical_inv(grille_plateau[64][128],&deplacement_possible);
      gauche=!gauche;
  }
}
