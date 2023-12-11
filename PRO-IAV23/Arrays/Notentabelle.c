#include <stdio.h>

int main(){

    char schuelerNamen[4][40] = {0};
    int notenListeSchueler[4][3] = {0};
    char tableHeader[4][11] = {"Schueler",
                               "Deutsch",
                               "Englisch",
                               "Mathe"
    };

    for (int i = 0; i < 4; ++i) {
        printf("Bitte gebe deinen Name ein:");
        scanf("%s", schuelerNamen[i]);
        while (getchar() != '\n');
    }


    for (int i = 0; i < 4 ; ++i) {
        for (int j = 1; j < 4; ++j) {
            printf("\nEingabe fuer %i Note:", j);
            scanf("%i", &notenListeSchueler[i][j-1]);
            while (getchar() != '\n');
        }
    }

    for (int i = 0; i < 4; ++i) {
        printf("%-9s\t", tableHeader[i]);
    }

    printf("\n");

    for (int i = 0; i < 4; ++i){
        printf("%s\t\t", schuelerNamen[i]);
        for (int j = 0; j < 3; ++j) {
            printf("%i\t\t", notenListeSchueler[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}

