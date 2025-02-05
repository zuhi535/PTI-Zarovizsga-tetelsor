
//Írjon olyan függvényt vagy metódust, amely egy természetes szám esetén kiírja, hogy a 9-es
//számjegybõl hány darabot tartalmaz (ne alakítsa át sztringgé/karaktertömbbé)!


#include <stdio.h>

// Függvény, amely megszámolja a 9-es számjegyeket egy természetes számban
int szamol_kilenceseket(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == 9) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int szam;
    printf("Adja meg a szamot: ");
    scanf("%d", &szam);

    printf("A szam %d darab 9-es szamjegyet tartalmaz.\n", szamol_kilenceseket(szam));
    return 0;
}
