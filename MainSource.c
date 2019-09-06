/* Ce programme affiche un message à l'écran */


/* accès au bibliotèque des fonction */
# include <stdio.h>
# include <stdlib.h>



/* Declaration des variables */

int a;
int b;
int c;
int temp;




main() // Procédure principal + autre forme de commentaire
{
	system("cls");
	// Valeur A
	printf("Saisir la valeur de a ");
	scanf("%d", &a);
	system("cls");

	// Valeur B
	printf("Saisir la valeur de b ");
	scanf("%d", &b);
	system("cls");


	// Affichage des varaiable avant permutation
	printf("== Avant de permuter ==");
	printf("\n\nLa valeur de A est = %d", a);
	printf("\nLa valeur de B est = %d", b);
	printf("\n\n==============\n");
	system("pause");
	
	// Permutation
	temp = b;
	b = a;
	a = temp;

	// Affichage du résultat
	system("cls");
	printf("==============\n\n");
	printf("La valeur de A est = %d", a);
	printf("\nLa valeur de B est = %d", b);
	printf("\n\n==============\n");


	// pause de l'affichage
	system("pause");
}
