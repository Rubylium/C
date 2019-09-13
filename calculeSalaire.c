# include <stdio.h>
# include <stdlib.h>


int Nom;
int salBrut;
int salNet;
int salTotal;
float ca;
int commission;

// salaire brute 1000 chiffre affaire 10000


main() {

	system("cls");
	printf("Saisir le salaire brute (1000) ");
	scanf("%d", &salBrut);

	system("cls");

	printf("Saisir le chiffre d'affaire ( 10000 )");
	scanf("%f", &ca);

	system("cls");

	// Calcule 

	salNet = salBrut * 0.8;
	commission = ca * 1.1 - ca;
	salTotal = salNet + commission;

	printf("\tSalaire net: %d\n ", salNet);
	printf("\tCommission sur CA: %d\n ", commission);
	printf("\tSalaire total: %d\n ", salTotal);
	system("pause");
}