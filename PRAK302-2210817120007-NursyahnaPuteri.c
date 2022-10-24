#include <stdio.h>
int main ()
{
    int nilai ;
    printf ("Masukan nilai : ");
    scanf ("%d" , &nilai);

    if (nilai >=80) {
        printf ("Predikat Nilai A\n");
     }else if (nilai >=70 && nilai <=79){
        printf ("Predikat Nilai B\n");
     }else if (nilai >=60 && nilai <=69){
        printf ("Predikat Nilai C\n");
     } else if (nilai >= 50 && nilai <=59) {
        printf ("Predikat Nilai D\n");
     }else {
        printf ("Predikat Nilai E\n") ;
     }
     printf ("\n");
     return 0;
}