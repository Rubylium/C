# include <stdio.h>
# include <stdlib.h>

int temperature;

main () {
    system("cls");
    printf("Saisir la température\n");
	scanf("%d", &temperature);

    if (temperature <= 0) {
        printf("C'est de la glace\n");
    } 
    if (temperature > 100) {
        printf("Vapeur\n");
    }
    if (temperature > 1 && temperature < 100) {
        printf("Eau\n");
    }  
    system("pause");
}