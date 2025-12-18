#include <stdio.h> 
#include <stdlib.h> 
#include "bibliotheque.h" 
int main( void ) { 
int result = power( 2, 3 ); 
printf( "2³ == %d\n", result ); 
result = fact( 6 ); 
printf( "6! == %d\n", result ); 
int first =16;
int second =20;
printf("first=%d #\n second=%d",first,second );
permutation(&first , &second);
printf("first=%d #\n second=%d ", first,second) ;   

return EXIT_SUCCESS; 
}