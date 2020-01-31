#include <stdio.h>
#include <stdlib.h>
 
int nb_copie;
float calc1;
float calc2;
float calc3;
float prix1;
float prix2;
float prix3;
float prx_tot;
 
main() {
    system("cls");
    printf("Saisir le nombre de copie =");
    scanf("%d", &nb_copie);
    prix2=0;
    prix3=0;
    if (nb_copie < 10) {
        prix1 = nb_copie * 0.1;
    }  
 
    if (nb_copie > 10 && nb_copie < 30) {
        calc1 = 10;
        calc2 = nb_copie - calc1;
        prix1 = calc1 * 0.1;
        prix2 = calc2 * 0.09;
    }
 
    if (nb_copie > 30) {
        calc1 = 10;
        calc2 = 20;
        calc3 = nb_copie - (calc1 + calc2);
        prix1 = calc1 * 0.1;
        prix2 = calc2 * 0.09;
        prix3 = calc3 * 0.08;
    }
 
    prx_tot = prix1 + prix2 + prix3;
    system("cls");
    printf("Voici le total = %.2f\n", prx_tot);
    system("pause");
}