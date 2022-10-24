#include <stdio.h>
int main ()
{
    int bilangan ;

    printf ("Masukan Bilangan : ");
    scanf ("%d" , &bilangan);

    if (bilangan >= 1 && bilangan <= 9) {
        printf ("Satuan\n");
   }else if ( bilangan >=10 && bilangan <= 19){
        printf ("Belasan\n");
   }else if ( bilangan >= 20 && bilangan <= 99) {
        printf ("Puluhan\n" ) ;
   }else if ( bilangan == 0 ) {
        printf ( "Nol\n");
   }else {
        printf ("Anda Menginput Melebihi Limit Bilangan\n");
     }
     printf ("\n");
     return 0;
} 