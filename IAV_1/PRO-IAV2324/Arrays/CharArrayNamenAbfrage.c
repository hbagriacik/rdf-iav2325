#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    char name[40] = {0}; // Initalisierung vom Array mit Wert 0 -> gleich: Zeile -> siehe for(...)
    int zahl1 = 0;
    int zahl2 = 0;
    int computerErgebnis = 0;
    int userErgebnis = 0;
    char ende=0;
    char pass[10]={"abcde"};
    char userPass[10] = {0};
    int check = 1;
    int i = 0;
    char beschimpfung[10][100] = {
            "Du Vollidiot, du blöder",
            "Du bist so dumm wie ein Meter Feldweg",

    };

    //char naame[40]; // belegt einen Speicher im System! Vorsichtig

    do {
        check = 1;
        printf("Gib das Passwort ein: \n");
        scanf("%s",
              userPass); // & -> kaufmännisches "UND" nicht erforderlich, weil die variable "name" (ohne klammern) ist die referenz auf das gesamten adressbereich // Hier wird ein String erfragt
        while (getchar() != '\n');

        for (i = 0; i < 10; i++) {
            if (pass[i] != userPass[i]) {
                check = 0;
                break;
            }
        }
    } while (check != 1);


    printf("\n \nHallo %s\n", name); // Arbeitspeicher wird gelesen und ausgegeben

    do {

        srand(time(0));
        zahl1 = rand() % 20 + 1;
        zahl2 = rand() % 20 + 1;

        printf("Wieviel ist %i + %i  = ? \n", zahl1, zahl2);
        scanf("%i", &userErgebnis);
        while (getchar() != '\n');

        computerErgebnis = zahl1 + zahl2;

        if (userErgebnis == computerErgebnis) {
            printf("Toll gemacht %s! Das ist richtig!\n", name);
        } else {
            printf("%s Du bist das d\201mmste auf der Welt!!\n", name);
        }

        printf("Wollen Sie noch einmal rechnen? (j/n)\n");
        scanf("%i", &ende);
        while (getchar() != '\n');

    } while (ende == 'n');

    //for (int i = 0; i < 1000; ++i) {
    //    name[i] = 0;
    //}

    getchar();
    return 0;   
}