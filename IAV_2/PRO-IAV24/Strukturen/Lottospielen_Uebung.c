#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct kunde {
    char vorname[20];
    char nachname[30];
    int zahlen[6];
} kundeMueller;

void eingabe();
void zufallszahlen();
void sortieren();
void ausgabe();

struct kunde kundeMueller = {};

int main () {
    srand(time(0));

    eingabe();
    zufallszahlen();
    ausgabe();
}

void eingabe() {
    printf("Gebe deinen Vorname ein: ");
    scanf("%s", kundeMueller.vorname);
    while (getchar() != '\n');
    printf("\n");

    printf("Gebe deinen Nachname ein: ");
    scanf("%s", kundeMueller.nachname);
    while (getchar() != '\n');
    printf("\n");
}

void zufallszahlen(){
    for (int i = 0; i < 6; ++i) {
        kundeMueller.zahlen[i] = rand() % 49 + 1;
    }
}

void sortieren(){
    // bubble sort kommt hier rein
};

void ausgabe(){
    printf("---------------------------------------\n");
    printf("Vorname: %s \n", kundeMueller.vorname);
    printf("Nachname: %s \n", kundeMueller.nachname);

    for (int i = 0; i < 6; ++i) {
        if(i < 5) {
            printf("%i;\t", kundeMueller.zahlen[i]);
        } else{
            printf("%i\t", kundeMueller.zahlen[i]);
        }
    }
    printf("\n---------------------------------------");
}