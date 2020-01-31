# include <stdio.h>
# include <stdlib.h>
# include <string.h>


char client[20];
int NomFacture;
char date[20];
int TxRemise;
char ref1[50], ref2[50];
char disign1[10], disign2[10];
int qte1, qte2;
float pxu1, pxu2;
float montant1, montant2;
float remise;
float NetAPayer;


main() {

	system("cls");
	printf("Saisir le nom du client");
	scanf("%s", &client);

	system("cls");
	printf("Saisir le num de la facture");
	scanf("%d", &NomFacture);
	system("cls");
	
	system("cls");
	printf("Saisir la date de la facture");
	scanf("%s", &date);
	system("cls");

	system("cls");
	printf("Saisir la remise de la facture");
	scanf("%d", &TxRemise);
	system("cls");

	system("cls");
	printf("Saisir la remise de la facture");
	scanf("%d", &TxRemise);
	system("cls");

	system("cls");
	printf("Saisir la 1er référence");
	scanf("%s", &ref1);
	system("cls");

	system("cls");
	printf("Saisir la 2eme référence");
	scanf("%s", &ref2);
	system("cls");

	system("cls");
	printf("Saisir la quantité de la première référence");
	scanf("%d", &qte1);
	system("cls");

	system("cls");
	printf("Saisir la quantité de la deuxième référence");
	scanf("%d", &qte2);
	system("cls");

	system("cls");
	printf("Saisir la quantité de la deuxième référence");
	scanf("%d", &qte2);
	system("cls");
	
	// Calcule 

	system("pause");
}