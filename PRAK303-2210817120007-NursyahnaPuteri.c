#include <stdio.h>
int main ()
{
    int bilangan ;

    printf ("Masukan bilangan : ");
    scanf ("%d" , &bilangan);

    if (bilangan  < 0) {
        printf ("Negatif\n");
   }else if (bilangan > 0 ){
        printf ("Positif\n");
   }else {
        printf ("Nol\n") ;
     }
     printf ("\n");
     return 0;
}