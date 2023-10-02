#include<stdio.h>

void clearStorag() {
    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)
};

void printDotLine(){
    printf("\n---------------------\n");
}

int main(){

    double einkaufswert = 0;
    double stueckzahl = 0;
    double rechnungsbetrag = 0;
    double rabatt = 0;
    int rabattProzentSatz = 10;

    printf("Bitte geben Sie den Einkaufswert ein:");
    scanf("%lf", & einkaufswert); // Einlesen der Benutzereingabe

    clearStorag();

    printf("Bitte geben Sie den Stueckzahl ein:");
    scanf("%lf", & stueckzahl); // Einlesen der Benutzereingabe

    clearStorag();

    if (einkaufswert >= 3000 || stueckzahl > 200) {
        rabatt = einkaufswert / 100 * rabattProzentSatz;
        rechnungsbetrag = einkaufswert - rabatt;
    } else{
        rechnungsbetrag = einkaufswert;
    }

    printDotLine();
    printf("Grundwert: %.2lf", einkaufswert);
    printDotLine();
    printf("Rabatt: %.2lf\n", rabatt);
    printf("Rechnungsbetrag: %.2lf", rechnungsbetrag);

    getchar();
    return 0;
}