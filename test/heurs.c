# include <stdio.h>
# include <stdlib.h>

int secondes;
int minutes;
int heures;

main () {

    system("cls");
    printf("Saisir les heures\n");
	scanf("%d", &heures);

    system("cls");
    printf("Saisir les minutes\n");
	scanf("%d", &minutes);

    system("cls");
    printf("Saisir les secondes\n");
	scanf("%d", &secondes);

    secondes = secondes + 1;

    if (secondes >= 60) {
        secondes = 0;
        minutes = minutes + 1;
    } 
    if (minutes >= 60) {
        minutes = 0;
        heures = heures + 1;
    }
    if (heures > 23) {
        heures = 0;
        secondes = 0;
        minutes = 0;
    }

    system("cls");
    printf("Dans une seconde, il sera %d heure(s), %d minute(s) et %d seconde(s).", heures, minutes, secondes);
    system("pause");
}

