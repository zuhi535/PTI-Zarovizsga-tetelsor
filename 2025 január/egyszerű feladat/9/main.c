
//Írjon olyan függvényt vagy metódust, amely egy természetes számról eldönti, hogy a kettes
//számrendszerbeli felírásában a jobbról második bitje 1 vagy 0 (ne alakítsa át sztringgé/karaktertömbbé)!

#include <stdio.h>

// Függvény, amely eldönti, hogy egy szám kettes számrendszerbeli felírásában a jobbról második bit 1 vagy 0
int masodik_bit(int n) {
    return (n & 0b10) ? 1 : 0;
}

int main() {
    int szam;
    printf("Adja meg a szamot: ");
    scanf("%d", &szam);

    printf("A szam jobbrol masodik bitje: %d\n", masodik_bit(szam));
    return 0;
}
