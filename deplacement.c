#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deplacement.h"
void deplacement_horizontal_inv(char* gauche, int grille_plateau[64][128],int*deplacement_possible){

  int i,j = 0;

  while(deplacement_possible==1){
    if(gauche=='oui'){
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
int deplacementtest(grille_plateau[64][128]){
  int i=0,y=1;

  if(gauche=='oui'){
    for(i;i<64;i++){
      if(grille_plateau[i][1]==0){

      }
      else{
        deplacement_possible=0;
      }
    }
    return(deplacement_possible);
  }

}
void deplacement( int grille_plateau[64][128],int*gagne){
  char gauche='oui';
  while(gagne==1){
    deplacementtest(grille_plateau[64][128],);
    deplacement_horizontal_inv(&gauche, grille_plateau[64][128],&deplacement_possible);

  }
}
