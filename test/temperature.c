# include <stdio.h>
# include <stdlib.h>

int temperature;

main () {
    system("cls");
    printf("Saisir la température\n");
	scanf("%d", &temperature);

    if (temperature <= 0) {
        printf("C'est de la glace\n");
    } else {
        if (temperature < 100) {
            printf("Eau\n");
        } else {
            printf("Vapeur\n");
        }
    }
    system("pause");
}