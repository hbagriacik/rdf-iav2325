#include<stdio.h>

// 3) Umsatzseuer ausrechnen mit Abfrage
int main(){

    double nettopreis = 0; // Nettopreis
    double bruttopreis = 0; // Bruttopreis
    double umsatzsteuer = 0; // Umsatzsteuer


    printf("Bitte geben Sie eine Kommazahl fuer Ihren Nettopreis ein:\n"); // Eingabeaufforderung
    scanf("%lf", & nettopreis); // Einlesen der Benutzereingabe

    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)

    umsatzsteuer = nettopreis / 100 * 19; // Umsatzsteuer ausrechnen

    bruttopreis = nettopreis + umsatzsteuer; // 1.) Ausrechnung Bruttopreis = nettopreis + umsatzsteuer
    bruttopreis = nettopreis * 1.19; // 2.) Ausrechnung Bruttopreis = nettopreis * 1.19

    printf("Nettopreis: %.2lf \n(+) Umsatzsteuer: %.2lf \n--------------------------------\nBruttopreis: %.2lf ", nettopreis, umsatzsteuer, bruttopreis);

    getchar();
    return 0;
}