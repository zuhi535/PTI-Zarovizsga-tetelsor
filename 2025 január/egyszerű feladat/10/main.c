
//Írjon olyan függvényt vagy metódust, amelynek paramétere egy 1 < x < 10 természetes
//szám, és kiírja az 1,3,4,6,7,9,10,12,... sorozat elsõ öt x-szel osztható elemét, azaz a sorozat
//i+1-edik tagja 2-vel nagyobb az i-ediknél, ha i páratlan, s eggyel nagyobb az i-ediknél, ha i
//páros!

#include <stdio.h>

// Függvény, amely kiírja a sorozat elsõ öt x-szel osztható elemét
void kiir_sorozat(int x) {
    int szam = 1;
    int count = 0;

    while (count < 5) {
        if (szam % x == 0) {
            printf("%d ", szam);
            count++;
        }
        if (szam % 2 == 1) {
            szam += 2;
        } else {
            szam += 1;
        }
    }
    printf("\n");
}

int main() {
    int x;
    do {
        printf("Adja meg az x erteket (2 es 9 kozott): ");
        scanf("%d", &x);
    } while (x <= 1 || x >= 10);

    kiir_sorozat(x);
    return 0;
}
