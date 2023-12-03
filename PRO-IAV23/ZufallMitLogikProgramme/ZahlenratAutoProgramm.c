#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void clearStorag() {
    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)
};


int main(){
    srand(time(0));

    int versucheBenutzer = 0;
    int zufallZahlGeneratorMaschine = rand() % 100 + 1;
    int zufallZahlGeneratorBenutzer = rand() % 100 + 1;


    for (int i = 0; i < 100; i++) {
        do {
            if (zufallZahlGeneratorMaschine != zufallZahlGeneratorBenutzer) {
                printf("> Leider daneben mit der Zahl %i! Gesuchte Zahl %i\n", zufallZahlGeneratorBenutzer, zufallZahlGeneratorMaschine);
                printf("> Bitte nochmal!\n");
                int zufallZahlGeneratorBenutzer = rand() % 100 + 1;

                if (zufallZahlGeneratorBenutzer > 100) {
                    printf("> Die Zahl darf nicht groesser 100 sein!");
                    printf("\n");
                }
            }

            versucheBenutzer++;
            printf("Versuch %i", versucheBenutzer);
            printf("\n");

            zufallZahlGeneratorMaschine = rand() % 100 + 1;
        } while (zufallZahlGeneratorMaschine != zufallZahlGeneratorBenutzer);
    }

    printf("> Geschafft");

    getchar();
    return 0;
}