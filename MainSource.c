/* Ce programme affiche un message � l'�cran */


/* acc�s au bibliot�que des fonction */
# include <stdio.h>
# include <stdlib.h>



/* Declaration des variables */

int a;
//int b;




main() // Proc�dure principal + autre forme de commentaire
{
	// Calcule de A
	a = 1;
	//printf("contenu de la variable a = %d", a ,"\n");
	printf("Saisir la valeur de a ");
	scanf("%d", &a);
	a = a + 5;
	system("color F");
	printf("Valeur de a = %d\n", a);

	system("pause");
}
