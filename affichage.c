#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glcd.h"

void convertisseur(int[64][128] grille_64_128,char[8191] logo){
  int i,y,rang_initial=0;
  char d=0x;
  for(i=0;i<64;i++){
    for(y=0;y<128;y++){
      if((i%8==0)&&(i!=0)){

void convertisseur(grille_64_128[64][128], logo[8191]){
  int i,y,rang_initial=0;
  for(i=0;i<64;i++){
    for(y=0;y<128;y++){

      if((i%8==0)&&(i!=0)){

        rang_initial;
      }

        rang_initial+=128;
      }
      logo[y]=(char)2^i
    }
  }
}
/*
sprintf(num,"%x",compteur);
char c=0x+num;
logo[rang]=(char)c;*/
