
// Írjon olyan függvényt vagy metódust, amely egy természetes számhoz visszaadja azt a
// legnagyobb egész kitevõs hatványát, amely még éppen kisebb, mint 567!


#include <stdio.h>
#include <math.h>

// Függvény, amely megkeresi a legnagyobb egész kitevõs hatványt, amely kisebb, mint 567
int legnagyobb_hatvany(int base) {
    int hatvany = 1;
    while (hatvany * base < 567) {
        hatvany *= base;
    }
    return hatvany;
}

int main() {
    int base;
    printf("Adja meg az alapot: ");
    scanf("%d", &base);

    printf("A legnagyobb %d-alapu hatvany, amely kisebb, mint 567: %d\n", base, legnagyobb_hatvany(base));
    return 0;
}
