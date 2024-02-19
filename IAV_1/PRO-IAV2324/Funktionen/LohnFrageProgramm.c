#include <stdio.h>

int selectCharacter();

double calcPayment(int character, double payment, int workValue);

void output(double payment, int selectedCharacter);

void clearStorag() {
    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)
}

int main(){

    double payment = 0;
    double workValue = 0;
    //int selectedCharacter = 0; // Initalisierung auch auf Zeile 20 möglich


    int selectedCharacter = selectCharacter(); // Auswahl 0 = Facharbeiter | 1 = Auszubildender

    if(selectedCharacter == 0) {
        printf("Please enter worked hours at the current month:\n");
        scanf("%lf", &workValue);
        clearStorag();
        output(calcPayment(selectedCharacter, payment, workValue), selectedCharacter);
    }

    if(selectedCharacter == 1) {
        do {
            printf("Please enter which year at the current year:\n");
            scanf("%lf", &workValue);
            clearStorag();
        } while (workValue != 1 && workValue != 2 && workValue != 3);
        output(calcPayment(selectedCharacter, payment, workValue), selectedCharacter);
    }

    //getchar(); Das Programm soll nach der letzten Eingabe schließen
    return 0;
}


int selectCharacter () {
    int character = 0; // Initalisierung notwendig

    do {
        printf("Please select a character \n");
        printf("0 = Facharbeiter | 1 = Auzubildener");
        scanf("%i", &character);
    } while (character != 0 && character != 1);

    return character;
}

void output(double payment, int selectedCharacter) {
    if(selectedCharacter == 0) {
        printf("Personal: %.2f", payment);
    }

    if(selectedCharacter == 1) {
        printf("Student: %.2f", payment);
    }
}

double calcPayment(int character, double payment, int workValue) {

    // 0 = Facharbeiter | 1 = Auzubildener
    if(character == 0) {
        payment = workValue * 19.0;
        return payment;
    }

    if(character == 1) {
        if(workValue == 1){
            payment = 500.0;
            return payment;
        }

        if(workValue == 2) {
            payment = 700.0;
            return payment;
        }

        if(workValue == 3){
            payment = 900.0;
            return payment;
        }
    }
}
