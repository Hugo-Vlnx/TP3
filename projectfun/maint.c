#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generer_action(char* action) {
    char actions[3][100];

    printf("Entrez l'action 1 : ");
    fgets(actions[0], sizeof(actions[0]), stdin);

    printf("Entrez l'action 2 : ");
    fgets(actions[1], sizeof(actions[1]), stdin);

    printf("Entrez l'action 3 : ");
    fgets(actions[2], sizeof(actions[2]), stdin);

    int random = rand() % 3;
    printf(action, 100, "%s", actions[random]);
}


void generer_objet(char* objet) {
    char objets[3][100];

    printf("Entrez le nom de l'objet 1 : ");
    fgets(objets[0], sizeof(objets[0]), stdin);

    printf("Entrez le nom de l'objet 2 : ");
    fgets(objets[1], sizeof(objets[1]), stdin);

    printf("Entrez le nom de l'objet 3 : ");
    fgets(objets[2], sizeof(objets[2]), stdin);

    int random = rand() % 3;
    printf(objet, 100, "%s", objets[random]);
}

int main() {
    srand(time(NULL));

    char action[100];
    char objet[100];

    
    generer_action(action);
    generer_objet(objet);

    // Génération de l'histoire
    printf("\nVoici l'histoire générée aléatoirement :\n");
    printf("Un jour, %s se rendait à %s et a %s avec %s.\n", personnage, lieu,  action, objet);

    return 0;
}