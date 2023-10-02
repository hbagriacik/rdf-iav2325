#include<stdio.h>

// 2) Rechteck ausrechnen mit scanf
int main(){

    double laenge = 0; // Initialisierung von variable
    double breite = 0;
    double flaeche = 0;

    // scanf Benutzereingabe
    printf("Bitte geben Sie eine Kommazahl fuer die Laenge ein:\n");
    scanf("%lf", & laenge);

    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)

    printf("Bitte geben Sie eine Kommazahl fuer die Breite ein:\n");
    scanf("%lf", & breite);

    while (getchar() != '\n') {}

    flaeche = laenge * breite;

    printf("Das Rechteck hat ein Laenge von %.2lf und einer Breite von %.2lf und eine Flaeche von %.2lf", laenge, breite, flaeche);

    getchar();
    return 0;
}