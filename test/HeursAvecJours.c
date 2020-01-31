# include <stdio.h>
# include <stdlib.h>

int secondes;
int minutes;
int heures;
int jours;

int secondesAjoute;
int minutesAjouter;
int heuresAjouter;


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

    system("cls");
    printf("Saisir les heures a ajouter\n");
	scanf("%d", &heuresAjouter);

    system("cls");
    printf("Saisir les minutes a ajouter\n");
	scanf("%d", &minutesAjouter);

    system("cls");
    printf("Saisir les secondes a ajouter\n");
	scanf("%d", &secondesAjoute);


    heures = heures + heuresAjouter;
    minutes = minutes + minutesAjouter;
    secondes = secondes + secondesAjoute;



    secondes = secondes + 1;
    jours = 0;
    if (secondes >= 60) {
        secondes = 0;
        minutes = minutes + 1;
    } 
    if (minutes >= 60) {
        minutes = 0;
        heures = heures + 1;
    }
    //if (heures > 23) {
    //   heures = 0;
    //    secondes = 0;
    //    minutes = 0;
    //    jours = jours + 1;
    //}

    while (heures > 23) {
        heures = heures - 24;
        jours = jours + 1;
    }

    system("cls");
    printf("Dans une seconde, il sera %d heure(s), %d minute(s) et %d seconde(s) avec %d jours supplementaire.\n", heures, minutes, secondes, jours);
    system("pause");
}

