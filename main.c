#include <stdio.h> 
#include <stdlib.h> 
#include<math.h>
#include "bibliotheque.h" 
int main( void ){
    // exemple de la fonction de calcul de factorielle.
int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 
// exemple de la fonction de l'élévation à une puissance données.
result = fact( 6 ); 
printf( "6! == %d\n", result ); 
// exemple de la fonction de permutation 
int first =16;
int second =20;
printf("first=%d #\n second=%d",first,second );
permutation(&first , &second);
printf("first=%d #\n second=%d ", first,second) ;   

// exemple de la fonction du second dégrer 
float a, b, c;
    float x1, x2, re, im;
    int nombreSolutions;

    printf("Entrer la première valeur (a) : ");
    scanf("%f", &a);

    printf("Entrer la seconde valeur (b) : ");
    scanf("%f", &b);

    printf("Entrer la troisième valeur (c) : ");
    scanf("%f", &c);

    equationSecondDegre(a, b, c, &x1, &x2, &re, &im, &nombreSolutions);

    if (nombreSolutions == 2)
        printf("On a deux solutions réelles : x1 = %.2f et x2 = %.2f\n", x1, x2);

    else if (nombreSolutions == 1)
        printf("On a une solution double : x = %.2f\n", x1);

    else if (nombreSolutions == 0)
        printf("On a deux solutions complexes : %.2f + i%.2f et %.2f - i%.2f\n",
               re, im, re, im);

    else
        printf("Ce n'est pas une équation du second degré.\n");

    return 0;
// exemple de la fonction qui lit un entier positif et vérifie si celui-ci est premier 
int nombre;
    
    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);
    
    if (nombre < 0) {
        printf("Veuillez entrer un entier positif.\n");
    } else {
        if (estPremier(nombre)) {
            printf("%d est un nombre premier.\n", nombre);
        } else {
            printf("%d n'est pas un nombre premier.\n", nombre);
        }
    }
    
    return 0;
//exemple de fonction qui calcule et affiche une distance
    float premier_point_x, premier_point_y;
    float second_point_x, second_point_y;
    printf("===== PREMIER POINT =====\n");
    printf("Coordonnee x : ");
    scanf("%f", &premier_point_x);
    printf("Coordonnee y : ");
    scanf("%f", &premier_point_y);  
    printf("\n===== DEUXIEME POINT =====\n");
    printf("Coordonnee x : ");
    scanf("%f", &second_point_x);
    printf("Coordonnee y : ");
    scanf("%f", &second_point_y);
    printf("\n==========================\n");
    calculerEtAfficherDistance(premier_point_x, premier_point_y, second_point_x, second_point_y);
    printf("==========================\n");
    
    return 0;
} 



