/* Ce programme affiche un message à l'écran */


/* accès au bibliotèque des fonction */
# include <stdio.h>
# include <stdlib.h>



/* Declaration des variables */

int x;
int y;
int z;
float t;

// Var temp
int temp;




main() // Procédure principal + autre forme de commentaire
{
	system("cls");

	// Valeur X
	printf("Saisir la valeur de x ");
	scanf("%d", &x);
	system("cls");

	// Valeur Y
	printf("Saisir la valeur de y ");
	scanf("%d", &y);
	system("cls");

	// Valeur z
	printf("Saisir la valeur de z ");
	scanf("%d", &z);
	system("cls");

	// Affichage de toute nos variable avant de continuer
	system("cls");
	printf("Valeur de X = %d\n", x);
	printf("Valeur de y = %d\n", y);
	printf("Valeur de z = %d\n", z);
	system("pause");

	// Calcule de T
	temp = x + y;
	t = temp / z;
	system("cls");

	// Affichage de t
	printf("Valeur de T = %.2f\n", t);


	// pause de l'affichage
	system("pause");
}
