
//Adjon olyan függvényt vagy metódust, ami adott két pozitív egész paramétere esetén
//megadja (n alatt a k)=n!/(k!*(n-k)!) értékét. Használjon rekurziót!


#include <stdio.h>

unsigned long long binomial_coefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomial_coefficient(n - 1, k - 1) + binomial_coefficient(n - 1, k);
}

int main() {
    int n, k;
    printf("Enter values for n and k: ");
    scanf("%d %d", &n, &k);

    if (n < 0 || k < 0 || k > n) {
        printf("Invalid input. Ensure that 0 <= k <= n.\n");
        return 1;
    }

    printf("Binomial coefficient (%d choose %d) = %llu\n", n, k, binomial_coefficient(n, k));
    return 0;
}
