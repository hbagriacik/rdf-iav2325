#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void clearStorag() {
    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)
};

int main() {

    srand(time(0)); //Wichtig: damit die Zahl zufällig generiert werden kann

    int groessteZahlWuerfel = 6;

    int zufallWuerferZahl = rand() % groessteZahlWuerfel + 1;
    int gewuerfelteZahlSpieler1 = 0;
    int gewuerfelteZahlSpieler2 = 0;

    char spielerAuswahl;
    char wiederholtWuerfeln;

    printf("\n------------------------------\n");
    printf("Willkommen zur Spielewelt");
    printf("\n------------------------------\n");

    do {
        printf("\n> Spielerauswahl <\n");
        printf("> Spieler A (A) | Spieler B (B):\n");
        scanf("%c", &spielerAuswahl);
        printf("\n");
        clearStorag();
    } while (spielerAuswahl != 'A' && spielerAuswahl != 'B');

    if(spielerAuswahl == 'A') {
        printf("Spieler A ist am Zug\n");
        gewuerfelteZahlSpieler1 = zufallWuerferZahl;
        printf("%i", gewuerfelteZahlSpieler1);
    } else {
        printf("> Spieler B ist am Zug");
    }

    getchar();
    return 0;
}
