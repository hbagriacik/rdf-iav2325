#include <stdio.h>

void eingabe(char *kundenName, double *laenge, double *breite, double *quadratPreis);
void berechnen(double laenge, double breite, double quadratPreis, double *quadratMeter, double *materialKosten, double *arbeitskosten, double *nettopreis, double *umsatzsteuer, double *bruttopreis);
void ausgabe(double quadratMeter, double materialKosten, double arbeitskosten, double umsatzsteuer, double bruttopreis);
void clearStorage() {
    while (getchar() != '\n');
}


int main () {

    char kundenName[40] = {0};
    double laenge = 0;
    double breite = 0;
    double quadratMeter = 0;
    double quadratPreis = 0;
    double materialKosten = 0;
    double arbeitskosten = 0;
    double nettopreis = 0;
    double umsatzsteuer = 0;
    double bruttopreis = 0;

    eingabe(kundenName, &laenge, &breite, &quadratPreis);
    berechnen(laenge, breite, quadratPreis, &quadratMeter, &materialKosten, &arbeitskosten, &nettopreis, &umsatzsteuer, &bruttopreis);
    ausgabe(quadratMeter, materialKosten, arbeitskosten, umsatzsteuer, bruttopreis);

    getchar();
    return 0;
}

void eingabe(char *kundenName, double *laenge, double *breite, double *quadratPreis){
    printf("Bitte gebe den Kunden Name ein:");
    scanf("%s", kundenName);
    clearStorage();

    printf("Bitte gebe die Laenge ein:");
    scanf("%lf", laenge);
    clearStorage();

    printf("Bitte gebe die Breite ein:");
    scanf("%lf", breite);
    clearStorage();

    printf("Bitte gebe den Quadratmeterpreis ein:");
    scanf("%lf", quadratPreis);
    clearStorage();
}

void berechnen(double laenge, double breite, double quadratPreis, double *quadratMeter, double *materialKosten, double *arbeitskosten, double *nettopreis, double *umsatzsteuer, double *bruttopreis){
    *quadratMeter = (laenge * breite) + ((laenge * breite) / 100 * 8);
    *materialKosten = *quadratMeter * quadratPreis;
    *arbeitskosten = 10.56 * *quadratMeter;
    *nettopreis = *materialKosten + *arbeitskosten;
    *umsatzsteuer = *nettopreis * 0.19;
    *bruttopreis = *nettopreis + *umsatzsteuer;
}

void ausgabe(double quadratMeter, double materialKosten, double arbeitskosten, double umsatzsteuer, double bruttopreis){
    printf("-------------------------------------------------");
    printf("\nQuadratmerter: %.2f\n", quadratMeter);
    printf("Materialkosten: %.2f\n", materialKosten);
    printf("Arbeitskosten: %.2f\n", arbeitskosten);
    printf("Bruttopreis: %.2f\n", bruttopreis);
    printf("Umsatzsteuer: %.2f\n", umsatzsteuer);
    printf("-------------------------------------------------");
}