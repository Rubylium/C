# include <stdio.h>
# include <stdlib.h>
# include <math.h>


int capitalU;
int anne;
float calcule1;
float calcule2;
float calcule3;
float tauxAnnuel;
float tauxMensuel;

main() {
	system("cls");
	printf("Saisir le capital emprunte (100 000)\n");
	scanf("%d", &capitalU);

	// Clear du CMD
	system("cls");

	printf("Saisir le taux annuel (4.5)\n");
	scanf("%f", &tauxAnnuel);

	// Clear du CMD
	system("cls");

	printf("Saisir le nombre d'annee de remboursement\n");
	scanf("%d", &anne);


	// El Calculo

	tauxMensuel = (tauxAnnuel/12)/100;
	calcule1 = capitalU * tauxMensuel;
	calcule2 = pow(1+tauxMensuel, anne*12)/(pow(1+tauxMensuel, anne*12)-1);
	calcule3 = calcule1*calcule2;

	printf("Mensualite: %f\n", calcule3);
	system("pause");
}