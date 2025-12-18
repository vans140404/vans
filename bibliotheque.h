#ifndef __MY_MATH_LIB_H 
#define __MY_MATH_LIB_H 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ); 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow );
// Définition d'une fonction de permutation 
void permutation(int *a, int *b);
// Définition d'une fonction du second dégrer
void equationSecondDegre(float a, float b, float c, float *x1, float *x2, float *re, float *im, int *nombreSolutions);
// Définition d'une foncion qui lit un entier positif et vérifie si celui-ci est premier 
int PremierOuNon(int n);
// Definition d'une fonction qui calcule et affiche une distance 
int CalculeEtAfficheDistance(float x1, float y1, float x2, float y2);
#endif
