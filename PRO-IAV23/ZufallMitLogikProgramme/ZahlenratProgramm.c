#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void clearStorag() {
    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)
};

int main(){
    srand(time(0));

    int eingabeBenutzer = 0;
    int versucheBenutzer = 0;
    int zufallZahlGenerator = rand() % 100 + 1;


    do {
        printf("> Zahl:");
        scanf("%i", &eingabeBenutzer);
        printf("\n");
        clearStorag();

        if(zufallZahlGenerator != eingabeBenutzer) {
            printf("> Leider daneben mit der Zahl %i! Gesuchte Zahl %i\n", eingabeBenutzer, zufallZahlGenerator);
            printf("> Bitte nochmal!\n");
            srand(time(0));

            if(eingabeBenutzer > 100) {
                printf("> Die Zahl darf nicht groesser 100 sein!");
                printf("\n");
            }
        }

        versucheBenutzer++;
        printf("Versuch %i", versucheBenutzer);
        printf("\n");
        srand(time(0));
        zufallZahlGenerator = rand() % 100 + 1;

    } while (zufallZahlGenerator != eingabeBenutzer);

    printf("> Geschafft");

    getchar();
    return 0;
}