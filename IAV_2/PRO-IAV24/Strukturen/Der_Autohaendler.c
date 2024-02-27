#include <stdio.h>

struct carOffer{
    char carName[30];
    double price;
    double ratePercent;
};

struct customer{
    char salutation[30];
    char name[30];
    double monthRate;
};


void initialCustomerData(struct customer pCustomer[3]);
int getSize(struct customer customerArray[3]);

int main(){

    struct carOffer carArray[3];
    struct customer customerArray[3];

    // Initial array values with 0
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 30; ++j) {
            carArray[i].carName[j] = 'n';
            customerArray[i].name[j] = 'n';
        }
        carArray[i].price = 0;
        carArray[i].ratePercent = 0;
        customerArray[i].monthRate = 0;
    }

    int arraySize = getSize(customerArray);
    printf("%i", arraySize);
    //initialCustomerData(customerArray);

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
    /**for (int i = 0; i < ; ++i) {

    }*/
}

