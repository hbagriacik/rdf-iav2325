#include<stdio.h>

// 2) Rechteck ausrechnen
int r(){

    double laenge; // Deklaration der Variable
    double breite;
    double flaeche = 0; // Hinweis: Variablen beim start immer initalisieren (ein Wert zuweisen)

    laenge = 5.7; // Initialisierung
    breite = 3.8;

    flaeche = laenge * breite;

    printf("Das Rechteck hat ein Laenge von %.2lf und einer Breite von %.2lf und eine Flaeche von %.2lf", laenge, breite, flaeche);

    //getchar();
    return 0;
}