#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 0;
    int j = 0;
    int tausch = 0;
    int tempIndex = 0;

    int array[10] = {0};
    srand(time(0));

    for (i = 0;  i < 10 ; i++) {
        array[i]=rand()%20+1;
    }


    // unsortiertes array ausgeben
    for (i = 0;  i < 10 ; i++) {
        printf("%i;", array[i]);
    }


    // sortieren array nach bubble sort
    for(i=0;i<10;i++){
        tausch =0;
        for(j=0;j<9-i;j++){
            if(  array[j]  > array[j+1] ){
                tempIndex = array[j];
                array[j] = array[j+1];
                array[j+1]=tempIndex;
            }
            tausch =1;
        }
        if(tausch == 0){
            break;
        }
    }


    printf("\n");


    // sortiertes array ausgeben
    for (i = 0;  i < 10 ; i++) {
        printf("%i;", array[i]);
    }

    getchar();
    return 0;
}