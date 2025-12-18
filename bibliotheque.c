#include "bibliotheque.h"
#include<math.h> 
#include <stdio.h>
#include <stdlib.h> 
// Définition d'une fonction de calcul de factorielle. 
unsigned int fact( unsigned int value ) { 
unsigned int result = 1; 
while ( value > 1 ) { 
result *= value; 
value --; 
} 
return result; 
} 
// Définition d'une fonction d'élévation à une puissance données. 
int power( int value, unsigned int pow ) { 
if ( pow == 0 ) return 1; 
if ( pow == 1 ) return value; 
int accumulator = 1; 
while( pow > 0 ) { 
accumulator *= value; 
pow--; 
} 
return accumulator; 
} 
// définition d'une fonction de permutation 
void permutation(int *a, int *b)
{
  int c = 0;
      c = *a;
      *a = *b;
      *b = c;    
}
// définition d'une fonction du sécond dégrer 
void equationSecondDegre(float a, float b, float c, float *x1, float *x2, float *re, float *im, int *nombreSolutions)
{
    float d;

    if (a == 0)
    {
        *nombreSolutions = -1;
        return;
    }

    d = b*b - 4*a*c;

    if (d > 0)
    {
        *x1 = (-b + sqrt(d)) / (2*a);
        *x2 = (-b - sqrt(d)) / (2*a);
        *nombreSolutions = 2;
    }
    else if (d == 0)
    {
        *x1 = -b / (2*a);
        *nombreSolutions = 1;
    }
    else
    {
        *re = -b / (2*a);
        *im = sqrt(-d) / (2*a);
        *nombreSolutions = 0;
    }
}
// définition d'une foncion qui lit un entier positif et vérifie si celui-ci est premier
int PremierOuNon(int n) {
    int i;
    
    /* Cas particuliers */
    if (n <= 1) return 0;  /* 0 et 1 ne sont pas premiers */
    if (n == 2) return 1;  /* 2 est premier */
    if (n % 2 == 0) return 0;  /* les nombres pairs > 2 ne sont pas premiers */
    
    /* Vérifier les diviseurs impairs seulement jusqu'à vn */
    for (i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;  /* divisible donc pas premier */
        }
    }
    
    return 1;  /* premier */
}
// définition d'une fonction qui calcule et affiche une distance
int CalculeEtAfficheDistance(float x1, float y1, float x2, float y2) {
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("La distance entre les points (%.2f, %.2f) et (%.2f, %.2f) est : %.2f\n",
           x1, y1, x2, y2, distance);
    
    return 0;
}    
