
//Adjon olyan f�ggv�nyt vagy met�dust, ami adott k�t pozit�v eg�sz param�tere eset�n
//megadja (n alatt a k)=n!/(k!*(n-k)!) �rt�k�t. Haszn�ljon rekurzi�t!


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
