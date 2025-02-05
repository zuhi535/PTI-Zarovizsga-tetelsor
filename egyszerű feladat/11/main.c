
//Írjon olyan függvényt vagy metódust, amely a paraméterében megadott természetes szám
//pozitív osztóinak számával tér vissza!


#include <stdio.h>

// Függvény, amely visszaadja a természetes szám pozitív osztóinak számát
int osztok_szama(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int szam;
    printf("Adja meg a szamot: ");
    scanf("%d", &szam);

    printf("A %d szamnak %d pozitiv osztoja van.\n", szam, osztok_szama(szam));
    return 0;
}
