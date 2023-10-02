#include<stdio.h>

// 4) Farb Meister Arbeitskosten, Umsatzsteuer und Gesamtbruttopreis ausrechnen

void clearStorag() {
    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)
};

void printNewLine(){
    printf("\n");
}

void printDotLine(){
    printf("\n---------------------\n");
}

int main(){

    double flaechenLaenge = 0; // Abfrage: Flächenlänge
    double flaechenBreite = 0; // Abfrage: Flächenbreite
    double farbeProQuadratmeter = 0; // Abfrage: Farbpreis pro quadratmeter

    double flaecheGesamt = 0; // Gesamtfläche
    double arbeitzeitStundensatz = 2.5; // Arbeitszeitkosten pro Stunde
    double umsatzsteuer = 0; // Umsatzsteuer: (materialkosten und arbeitskosten) / 100 * 19
    double gesamtBruttoPreis = 0; // Gesamtpreis: (Netto => materialkosten und arbeitskosten) + Umsatzsteuer

    double materialkosten = 0; // Materialkostem (Fläche Gesamt * Preis pro QM)
    double arbeitskosten = 0; // Arbeitskosten (Fläche Gesamt * 2,5 €)


    printf("Bitte geben Sie eine Kommazahl fuer Ihren flaechenlaenge ein:\n"); // Eingabeaufforderung für Flächenlänge
    scanf("%lf", & flaechenLaenge); // Einlesen der Benutzereingabe

    clearStorag();

    printf("Bitte geben Sie eine Kommazahl fuer Ihren flaechenbreite ein:\n"); // Eingabeaufforderung für Flächenbreite
    scanf("%lf", & flaechenBreite); // Einlesen der Benutzereingabe

    clearStorag();

    printf("Bitte geben Sie den Preis fuer die Farbe pro Quadratmeter ein:\n"); // Eingabeaufforderung für Farbpreis pro Quadratmeter
    scanf("%lf", & farbeProQuadratmeter); // Einlesen der Benutzereingabe

    clearStorag();

    // Berechnung Gesamtfläche
    flaecheGesamt = flaechenLaenge * flaechenBreite;

    // Berechnung Materialkosten
    materialkosten = farbeProQuadratmeter * flaecheGesamt;

    // Berechnung Arbeitskosten
    arbeitskosten = (flaechenLaenge * flaechenBreite) * arbeitzeitStundensatz;

    // Berechnung Umsatzsteuer
    umsatzsteuer = (materialkosten + arbeitskosten) / 100 * 19;

    // Berechung Gesamtbruttopreis
    gesamtBruttoPreis = (materialkosten + arbeitskosten) + umsatzsteuer;

    printNewLine();
    printDotLine();
    printf("Flaechenlenage: %.2lf \nFlaechenbreite: %.2lf \n ---------------------\nDie Gesamtflaeche die zu streichen ist betraegt: %.2lf \n", flaechenLaenge, flaechenBreite, flaecheGesamt);
    printNewLine();

    printDotLine();
    printf("Materialkosten: %.2lf", materialkosten);
    printNewLine();
    printf("Arbeitskosten: %.2lf", arbeitskosten);
    printNewLine();
    printf("Umsatzsteuer: %.2lf", umsatzsteuer);
    printDotLine();
    printf("Gesamtbuttopreis: %.2lf", gesamtBruttoPreis);


    getchar();
    return 0;
}