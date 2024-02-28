#include <stdio.h>

struct carOffer{
    char carName[30];
    double price;
    double ratePercent;
};

struct customer{
    char salutation[30];
    char lastname[30];
    double monthRate;
};


void initialCustomerData(struct customer pCustomer[3]);

void clearStorage(){
    while (getchar() != '\n');
}

void printNewLine(){
    printf("\n");
}

int main(){
    struct carOffer carArray[3];
    struct customer customerArray[3];

    // Initial array values with 0
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 30; ++j) {
            carArray[i].carName[j] = 'n';
            customerArray[i].lastname[j] = 'n';
        }
        carArray[i].price = 0;
        carArray[i].ratePercent = 0;
        customerArray[i].monthRate = 0;
    }

    //int arraySize = getSize(customerArray);
    //printf("%i", arraySize);
    initialCustomerData(customerArray);

    //ToDo: InitialCarOffer
    //ToDo: check which offer is better for customer
    //ToDo: Output


    /**for (int i = 0; i < 3; ++i) {
        printf("%.2lf", customerArray[i].monthRate);
        printf("\n");

        for (int j = 0; j < 2; ++j) {
            printf("%c", customerArray[i].name[j]);

        }
    }*/

    getchar();
    return 0;
}

int getSize(struct customer customerArray[4]){
    int size = 0;
    int runner = 1;

    for (int i = 0; i < runner; ++i) {
        if(customerArray[i].monthRate != 0){
            break;
        }

        size++;
        runner++;
    }

    return size;
}

void initialCustomerData(struct customer pCustomer[3]) {
    for (int i = 0; i < 3; ++i) {
        do {
            printf(">> Mit welcher Anrede soll wir Sie ansprechen?\n");
            printf(">> d = Dame | h = Herr \n");
            printNewLine();
            printf(">> Eingabe Anrede:");
            scanf("%c", pCustomer[i].salutation);
            clearStorage();
            printNewLine();

            if(pCustomer[i].salutation != "h" && pCustomer[i].salutation != "d"){
                printf(">> Falsche Eingabe! <<\n");
                printNewLine();
            }
        } while (pCustomer[i].salutation != "h" && pCustomer[i].salutation != "d");

        printf(">> Eingabe Nachname:");
        scanf("%s", pCustomer[i].lastname);
        clearStorage();
        printNewLine();

        printf(">> Eingabe Wert der monatlichen Rate:");
        scanf("%lf", &pCustomer[i].monthRate);
        clearStorage();
        printNewLine();
    }
}

