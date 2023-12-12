#include <stdio.h>

void berechnen(float l, float b, float h, float *ergebnis);
void eingabe(float *laenge, float *breite, float *hoehe);
void clearStorage() {
    while (getchar() != '\n');
}
void ausgabe(float ergebnis);

int main () {

    float laenge = 0;
    float breite = 0;
    float hoehe = 0;
    float ergebnis = 0;

    /*
    // Speicheradresse von Höhe
    float *ptrLaenge = &laenge;
    */

    eingabe(&laenge, &breite, &hoehe);
    berechnen(laenge, breite, hoehe, &ergebnis);
    ausgabe(ergebnis);

    getchar();
    return 0;
}

void eingabe(float *laenge, float *breite, float *hoehe){
    printf("Gebe einen Wert fuer Laenge ein:");
    scanf("%f", laenge);
    clearStorage();

    printf("Gebe einen Wert fuer Breite ein:");
    scanf("%f", breite);
    clearStorage();

    printf("Gebe einen Wert fuer Hoehe ein:");
    scanf("%f", hoehe);
    clearStorage();
}

void berechnen(float l, float b, float h, float *ergebnis) {
    // Dereferenzierung - Variable füllen mit Inhalte von l * b * h
    *ergebnis = l * b * h;
}

void ausgabe(float ergebnis) {
    printf("%f", ergebnis);
}