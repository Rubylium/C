# include <stdio.h>
# include <stdlib.h>



int nombre;


main() {

    system("cls");
    printf("Saisir un nombre:\n");
	scanf("%d", &nombre);

    if (nombre == 0) {
        printf("Nombre null\n");
    } else {
        if (nombre > 0) {
            printf("Nombre: +%d\n", nombre);
        } else {
            printf("Nombre: %d\n", nombre);
        }
    }
    system("pause");
}