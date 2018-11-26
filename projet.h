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
void cleanse( grille_plateau[64][128]);
void init_inv(grille=[4][8]);
void affichage(grille_plateau[64][128]);
void invdeath(num, *grille[4][8]);
#endif
