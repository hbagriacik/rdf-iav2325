#include<stdio.h>
#include <math.h>

void errorMessage();

void scanUserInput(int *divisior1, int *dividend1, int *divisior2, int *dividend2);

char getUserTryAgainResponse(char *userInput, int divisior1, int dividend1, int divisior2, int dividend2);

void clearStorag() {
    while (getchar() != '\n') {} // Pufferspeicher leeren (für das ausführen vom Arbeitsplatzmodus .exe)
};

void printNewLine(){
    printf("\n");
}

void printDotLine(){
    printf("\n-----------------------------------------------\n");
}

void welcomeMessage(){
    printDotLine();
    printf("> Wilkommen zur deinem Brueche Taschenrechner:");
    printDotLine();
}


int main() {

    double result = 0; // Ergebnis
    char userInput;
    int divisior1 = 0; // Nenner Zahl 1
    int dividend1 = 0; // Zähler Zahl 1
    int divisior2 = 0; // Nenner Zahl 2
    int dividend2 = 0; // Zähler Zahl 2

    welcomeMessage();

    do {
        scanUserInput(&divisior1, &dividend1, &divisior2, &dividend2);
        userInput = getUserTryAgainResponse(&userInput, divisior1, dividend1, divisior2, dividend2);

        // Sicherungsüberprüfung falls der Benutzer bei
        if (divisior1 == 0 || divisior2 == 0) {
            errorMessage();
            userInput = 'y';
            printf("> Bitte versuchen Sie es nochmal! \n");
        }

    } while (userInput == 'y');



    printf("Gut!");



    getchar();
    return 0;
}

char getUserTryAgainResponse(char *userInput, int divisior1, int dividend1, int divisior2, int dividend2) {
    printf("> Wollen Sie Ihre Eingabe bearbeiten? \n");
    printf("> Term: %i/%i + %i/%i \n", divisior1, dividend1, divisior2, dividend2);
    printf("> Ja (y) / Nein (n):");
    scanf("%c", userInput);
    clearStorag();
    return (*userInput);
}

void scanUserInput(int *divisior1, int *dividend1, int *divisior2, int *dividend2) {
    do {
        printf("Divisior1:");
        scanf("%i", divisior1);
        printNewLine();
        clearStorag();

        printf("Dividend1:");
        scanf("%i", dividend1);
        printNewLine();
        clearStorag();

        printf("Divisior2:");
        scanf("%i", divisior2);
        printNewLine();
        clearStorag();

        printf("Dividend2:");
        scanf("%i", dividend2);
        printNewLine();
        clearStorag();

    } while (divisior1 == 0 || divisior2 == 0);
}

void errorMessage() {
    printNewLine();
    printf("> Divisior mit 0 erkannt! \n");
}

