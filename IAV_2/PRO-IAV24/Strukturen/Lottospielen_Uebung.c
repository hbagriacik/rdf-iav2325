#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct kunde {
    char vorname[20];
    char nachname[30];
    int zahlen[6];
};

void eingabe(struct kunde *kunde);
void zufallszahlen(struct kunde *kunde);
void sortieren();
void ausgabe(struct kunde *kunde);

int main () {
    srand(time(0));

    struct kunde kundeMueller = {{0}, {0}};

    eingabe(&kundeMueller);
    zufallszahlen(&kundeMueller);
    ausgabe(&kundeMueller);
}

void eingabe(struct kunde *fkundeMueller) {
    printf("Gebe deinen Vorname ein: ");
    scanf("%s", fkundeMueller->vorname);
    while (getchar() != '\n');
    printf("\n");

    printf("Gebe deinen Nachname ein: ");
    scanf("%s", fkundeMueller->nachname);
    while (getchar() != '\n');
    printf("\n");
}

void zufallszahlen(struct kunde *fkundeMueller){
    int zufallszahl = 0;
    for (int i = 0; i < 6; ++i) {
        zufallszahl = rand() % 49 + 1;
        fkundeMueller->zahlen[i] = zufallszahl;
        // todo: implementiere es so dass eine keine doppelten Zahlen im Array vorkommen
    }
}

void sortieren(){
    // todo: sortieren algorytmus implementieren
};

void ausgabe(struct kunde *fkundeMueller){
    printf("---------------------------------------\n");
    printf("Vorname: %s \n", fkundeMueller->vorname);
    printf("Nachname: %s \n", fkundeMueller->nachname);

    for (int i = 0; i < 6; ++i) {
        if(i < 5) {
            printf("%i;\t", fkundeMueller->zahlen[i]);
        } else{
            printf("%i\t", fkundeMueller->zahlen[i]);
        }
    }
    printf("\n---------------------------------------");
}