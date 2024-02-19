#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int array[1000];
    int max = 0;
    int min;

    srand(time(0));

    for (int i = 0; i < 999; ++i) {
        array[i] = rand();
        printf("%i \n", array[i]);

        if(array[i] > max) {
            max = array[i];
        } else if (array[i] < min){
            min = array[i];
        }
    }

    printf("Min.: %i\n", min);
    printf("Max.: %i", max);
    getchar();
    return 0;
}
