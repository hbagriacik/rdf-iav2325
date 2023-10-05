#include<stdio.h>

int main() {

    unsigned long long reis = 1; //Der größter Datentype in C >> long long

    for (int i = 1; i < 64; i++) {
        reis *= 2;
    }

    printf("Du hast bei 64 reiskoerner  ==  (%llu) reiskoerner.", reis);

    getchar();
    return 0;
}