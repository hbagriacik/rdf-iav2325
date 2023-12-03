#include <stdio.h>

double eingabe(int monat);

void clearStorage(){
    while (getchar() != '\n');
}

int main() {

    double monate[6] = {4, 5, 6, 7, 8, 9};
    double umsaetze[6];
    double maxUmsatz = 0;

    for (int i = 0; i < 6; ++i) {
        umsaetze[i] = eingabe(monate[i]);

        if(umsaetze[i] > umsaetze[i - 1]) {
            maxUmsatz = umsaetze[i];
        }
    }

    printf("Max. Umsatzzahl: %lf", maxUmsatz);

    getchar();
    return 0;
}

double eingabe (int monat) {
    double eingabe = 0;

    printf("[Konsole] >> Umsatzzahl %d. Mo:", monat);
    scanf("%lf", &eingabe);
    clearStorage();

    return eingabe;
}