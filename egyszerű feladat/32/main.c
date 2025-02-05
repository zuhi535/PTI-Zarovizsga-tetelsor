
//Írjon függvényt vagy metódust, ami visszaadja, hogy hány olyan egész szám van, ami k-nál
//nagyobb, m-nél kisebb, és pontosan n darab valódi osztója van! (k, m,n természetes számok,
//k <= m)


#include <stdio.h>

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int countNumbersWithNDivisors(int k, int m, int n) {
    int count = 0;
    for (int i = k + 1; i < m; i++) {
        if (countDivisors(i) == n) {
            count++;
        }
    }
    return count;
}

int main() {
    int k = 10, m = 50, n = 4;
    int result = countNumbersWithNDivisors(k, m, n);
    printf("%d darab szam van, amely k-nal nagyobb, m-nel kisebb, es pontosan n darab valodi osztoja van.\n", result);
    return 0;
}
