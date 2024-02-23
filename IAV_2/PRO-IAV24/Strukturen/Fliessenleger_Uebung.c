#include <stdio.h>

struct customer{
    char firstname[30];
    char lastname[30];
    char selectedArea;
    double selectSquareMeterPrice;
};

struct geoForm{
    double siteA;
    double siteB;
    double totalSquareMeter;
};

struct projectOffer{
    double materialPrice;
    double workPrice;
    double nettoPrice;
    double brutalPrice;
    double taxPercent;
    double tax;
    double employeeMoney;
};


void clearStorage(){
    while (getchar() != '\n');
}

void printNewLine(){
    printf("\n");
}

void initCustomerData(struct customer *customer, struct geoForm *geoForm);
void calcProject(struct projectOffer *projectOffer, struct geoForm *geoForm, struct customer *customer);
void consoleOutput(struct projectOffer *projectOffer, struct customer *customer);

int main(){

    double taxPercent = 1.19;
    double employeeMoney = 10.56;

    struct customer customer = {{0},{0},0};
    struct geoForm geoForm = {0, 0};
    struct projectOffer projectOffer = { 0, 0, 0, 0, taxPercent, 0, employeeMoney};

    initCustomerData(&customer, &geoForm);
    calcProject(&projectOffer, &geoForm, &customer);
    consoleOutput(&projectOffer, &customer);

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
        geoForm->totalSquareMeter =geoForm->totalSquareMeter + (geoForm->totalSquareMeter / 100) * 8;
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
        geoForm->totalSquareMeter = geoForm->totalSquareMeter + (geoForm->totalSquareMeter / 100) * 8;
    }

    printNewLine();
    printf(">> [Flaeche] Eingabe Quadratmeterpeis:");
    scanf("%lf", &customer->selectSquareMeterPrice);
    printNewLine();
}

void calcProject(struct projectOffer *projectOffer, struct geoForm *geoForm, struct customer *customer){

    // calculate material price;
    projectOffer->materialPrice = customer->selectSquareMeterPrice * geoForm->totalSquareMeter;

    // calculate work time
    projectOffer->workPrice = geoForm->totalSquareMeter * 10.56;

    // calculate netto price of project offer
    projectOffer->nettoPrice = projectOffer->materialPrice + projectOffer->workPrice;

    // calculate brutal price of project offer
    projectOffer->brutalPrice = projectOffer->nettoPrice * projectOffer->taxPercent;

    // calculate current tax of project offer
    projectOffer->tax = projectOffer->brutalPrice - projectOffer->nettoPrice;
}


void consoleOutput(struct projectOffer *projectOffer, struct customer *customer){
    printNewLine();
    printf("Angebot fuer %s %s", customer->firstname, customer->lastname);
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printf("Vorname: %s", customer->firstname);
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printf("Nachname: %s", customer->lastname);
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printf("+ Materialkosten: %.2lf", projectOffer->materialPrice);
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printf("+ Arbeitskosten: %.2lf", projectOffer->workPrice);
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printf("+ Nettopreis: %.2lf", projectOffer->nettoPrice);
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printf("+ Umsatzsteuer: %.2lf", projectOffer->tax);
    printNewLine();
    printf("---------------------------------------|");
    printNewLine();
    printf("= Bruttopreis: %.2lf", projectOffer->brutalPrice);
    printNewLine();
    printf("---------------------------------------|");
}