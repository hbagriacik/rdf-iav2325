#include <stdio.h>

struct customer{
    char firstname[30];
    char lastname[30];
    char selectedArea;
    double selectSquareMeterPrice
};

struct geoForm{
    double siteA;
    double siteB;
    double totalSquareMeter;
};

struct projectOffer{
    struct geoForm geoForm;
    double materialPrice;
    double workTimePrice;
    double nettoPrice;
    double brutalPrice;
    double taxPercent;
};


void clearStorage(){
    while (getchar() != '\n');
}

void printNewLine(){
    printf("\n");
}

void initCustomerData(struct customer *customer, struct geoForm *geoForm);
void calcForm(struct geoForm *geoForm, struct projectOffer *projectOffer);

int main(){

    double taxPercent = 19.0;

    struct customer customer = {{0},{0},0};
    struct geoForm geoForm = {0, 0};
    struct projectOffer projectOffer = {0, 0, 0, 0, taxPercent};

    initCustomerData(&customer, &geoForm);

    getchar();
    return 0;
}

void initCustomerData(struct customer *customer, struct geoForm *geoForm){
    printf(">> Eingabe Vorname:");
    scanf("%s", customer->firstname);
    clearStorage();

    printf(">> Eingabe Nachname:");
    scanf("%s", customer->lastname);
    clearStorage();

    do {
        printNewLine();
        printf(">> Welche Grundflaeche hat der Bode?\n");
        printf(">> d = Dreieck | r = Rechteck\n");

        printf(">> Eingabe Form:");
        scanf("%c", &customer->selectedArea);
        clearStorage();
        printNewLine();

        if(customer->selectedArea != 'r' && customer->selectedArea != 'd') {
            printNewLine();
            printf(">> Falsche Eingabe! <<\n");
        }
    } while (customer->selectedArea != 'r' && customer->selectedArea != 'd');

    if(customer->selectedArea == 'r'){
        printf(">> [Rechteck] Eingabe Laenge:");
        scanf("%lf", &geoForm->siteA);
        clearStorage();

        printNewLine();

        printf(">> [Rechteck] Eingabe Breite:");
        scanf("%lf", &geoForm->siteB);
        clearStorage();

        geoForm->totalSquareMeter = geoForm->siteA * geoForm->siteB;
        //printf("%lf", geoForm->totalSquareMeter);
    }

    if(customer->selectedArea == 'd'){
        printf(">> [Dreieck] Eingabe Seitenlaenge:");
        scanf("%lf", &geoForm->siteA);
        clearStorage();

        printNewLine();

        printf(">> [Dreieck] Eingabe Hoehenlenage:");
        scanf("%lf", &geoForm->siteB);
        clearStorage();

        geoForm->totalSquareMeter = (geoForm->siteA * geoForm->siteB) * 0.5;
        //printf("%lf", geoForm->totalSquareMeter);
    }

    printNewLine();
    printf(">> [Flaeche] Eingabe Quadratmeterpeis:");
    scanf("%lf", &customer->selectSquareMeterPrice);
}

void calcPrice(struct projectOffer *projectOffer){
    // Berechne Arbeitskosten, Materialkosten, Umsatzsteuer, Bruttopreis
}

void consoleOutput(struct customer *customer, struct projectOffer *projectOffer){
    // Ausgabe von Angebot -> Namen,
    //                        Materialkosten,
    //                        Arbeitskosten,
    //                        Bruttopreis und die Umsatzsteuer
}


