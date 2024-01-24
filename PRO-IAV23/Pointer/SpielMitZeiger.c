#include <stdio.h>

void eingabeSpielfeldWerte(int *xAchse, int *yAchse);
void clearStorage(){
    while (getchar() != '\n');
}

int main() {

    // Deklaration und Initalisierung Variablen vom Benutzer
    int enterAxisY = 0;
    int enterAxisX = 0;
    char enterUserValue = 0;

    // Deklaration und Initalisierung Variablen für Spielbeedienung
    char exitGame = 'x';
    char moveUp = 'w';
    char moveDown = 's';
    char moveRight = 'a';
    char moveLeft = 'd';


    // Aufruf: Funktionsaufruf für Benutzereingabe, welches die Werte für die Variablen enterAxisY/Y setzt via call by Reference
    eingabeSpielfeldWerte(&enterAxisY, &enterAxisX);

    // Verarbeitung: Initalisierung von Array spielfeld mit den Variablen des Benutzers
    int spielfeld[enterAxisX][enterAxisY] = {};
    printf("\n");

    // Ausgabe: Spielfeld Raster
    for (int i = 0; i < enterAxisX; ++i) {
        for (int j = 0; j < enterAxisY; ++j) {
            spielfeld[i][j] = 0;
            printf("%i ", spielfeld[i][j]);
        }
        printf("\n");
    }


    do {
        do {
            printf("Beweg mit w, a, s, d den Spieler:");
            scanf("%c", &enterUserValue);
            clearStorage();
        } while (enterUserValue != 'w'  && enterUserValue != 's' && enterUserValue != 'a' && enterUserValue != 'd');


        // Logik mit Raster;


        printf("\n");
        printf("Weiterspielen? x = ja || z = nein");
        scanf("%c", &enterUserValue);
        clearStorage();

    } while (enterUserValue != exitGame);

    printf("\nByeee!");

    getchar();
    return 0;
}




void eingabeSpielfeldWerte(int *xAchse, int *yAchse){
    printf("Spielfeldgroesse x:");
    scanf("%i", xAchse);
    clearStorage();

    printf("Spielfeldgroesse y:");
    scanf("%i", yAchse);
    clearStorage();
}

