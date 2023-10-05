#include<stdio.h>

int main() {

    int eingabe = 0;
    int ausgabe = 0;

    printf("Bitte geben Sie eine Zahl die multipliziert werden soll (1x1 table):");
    scanf("%i", &eingabe);
    while (getchar() != '\n');

    for (int zaehler = 1; zaehler <= 10; ++zaehler) {
        ausgabe = zaehler * eingabe;
        printf("%i * %i = %i\n", zaehler, eingabe, ausgabe);
    }

    getchar();
    return 0;
}