#include <stdio.h>
#include <time.h>
#include <stdlib.h>


char activite()
{
	char activite_A[100];
	char activite_B[100];
	char activite_C[100];

	printf("entrez votre activité n1 : ");
	fgets(activite_A, sizeof(activite_A), stdin);

	printf("entrez votre activité n-2 : ");
	fgets(activite_B, sizeof(activite_B), stdin);

	printf("entrez votre activité n-3 : ");
	fgets(activite_B, sizeof(activite_B), stdin);

	srand(time(NULL));

	int random = rand() % 3;

	printf("Activite choisie aleatoirement : ");
	if (random == 0) {
		printf("%s", activite_A);
	}
	else if (random == 1) {
		printf("%s", activite_B);
	}
	else {
		printf("%s", activite_C);
	}


	return 0;

}

char objet()
{
	char objet_A[100];
	char objet_B[100];
	char objet_C[100];

	printf("entrez votre activité n°1 : ");
	fgets(objet_A, sizeof(objet_A), stdin);

	printf("entrez votre activité n°1 : ");
	fgets(objet_B, sizeof(objet_B), stdin);

	printf("entrez votre activité n°1 : ");
	fgets(objet_B, sizeof(objet_B), stdin);

	srand(time(NULL));

	int random = rand() % 3;

	printf("Activite choisie aleatoirement : ");
	if (random == 0) {
		return objet_A;
	}
	else if (random == 1) {
		return objet_B;
	}
	else {
		return objet_C;
	}
}

int main()
{
	char activite[100] = activite();
	char objet[100] = objet();
	printf("%s et %s", activite, objet);
}