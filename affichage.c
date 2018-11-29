#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glcd.h"
void convertisseur(int grille_64_128[64][128],char logo[8191]){
  int i,y,rang_initial=0;
  for(i=0;i<8191;i++){
    logo[i]=0;
  }
  for(i=0;i<64;i++){
    for(y=0;y<128;y++){
      logo[y+rang_initial]+=(char) ((2**i)*grille_64_128[i][y]);
      if((i%8==0)&&(i!=0)){
        rang_initial+=128;
      }
    }
  }
}
/*
sprintf(num,"%x",compteur);
logo[rang]=(char)c;*/
