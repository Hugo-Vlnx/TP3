#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
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
		printf("%s", objet_A);
	}
	else if (random == 1) {
		printf("%s", objet_B);
	}
	else {
		printf("%s", objet_C);
	}


	return 0;

}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
	char activite_A[100];
	char activite_B[100];
	char activite_C[100];

	printf("entrez votre activité n°1 : ");
	fgets(activite_A, sizeof(activite_A), stdin);

	printf("entrez votre activité n°1 : ");
	fgets(activite_B, sizeof(activite_B), stdin);

	printf("entrez votre activité n°1 : ");
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