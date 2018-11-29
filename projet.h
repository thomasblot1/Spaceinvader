#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED
typedef struct joueur{
    int touche;
};
typedef struct invader{
    int pv;
    int positioncentrale;
    int invid;
};
void cleanse(int grille_plateau[64][128]);
void affichage(int grille_plateau[64][128]);
void invdeath(int*num, *grille[4][8]);

int defeat(struct joueur *j1, int *fin)
int victory(int grille[4][8],int *jeu)
#endif
