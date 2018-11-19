#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void deplacement_horizontal_inv(char* gauche){

  int i,j = 0;

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
  char gauche='oui';
     for(int numero_invader_test=1;numero_invader_test<=40;numero_invader_test++){
        if()
     }
}
