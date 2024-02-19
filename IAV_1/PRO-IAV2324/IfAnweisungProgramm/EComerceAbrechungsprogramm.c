# include<stdio.h>

// if, else und else if

int main(){
    float einkaufswert = 0;
    float rechnungsbetrag = 0;

    printf("Bitte geben Sie den Einkaufswert ein:");
    scanf("%f", &einkaufswert);
    while (getchar() !='\n');

    if(einkaufswert >= 3000){
        rechnungsbetrag = (einkaufswert / 100 * 10) + einkaufswert;
        //rechnungsbetrag = einkaufswert * 0.9;
    } else if (einkaufswert >= 2000){
        rechnungsbetrag = (einkaufswert / 100 * 8) + einkaufswert;
        //[oder] rechnungsbetrag = einkaufswert * 0.92;
    } else if (einkaufswert >= 1000) {
        rechnungsbetrag = (einkaufswert / 100 * 6) + einkaufswert;
        //[oder] rechnungsbetrag = einkaufswert * 0.94;
    } else if (einkaufswert >= 500) {
        rechnungsbetrag = (einkaufswert / 100 * 4) + einkaufswert;
        //[oder] rechnungsbetrag = einkaufswert * 0.96;
    } else {
        rechnungsbetrag = einkaufswert;
    }

    printf("Der Rechnungsbetrag beträgt: %.2lf", rechnungsbetrag);

    getchar();
    return 0;
}