
//A következõ közelítõ formulát használva írjon függvényt vagy metódust, amely egy valós
//szám négyzetgyökét adja vissza! Használja az xk+1=1/2*(xk+a/xk) sorozatot, amely a
//négyzetgyökéhez konvergál, ha x1=1.

#include <stdio.h>

// Newton-módszerrel számított négyzetgyök függvény
double sqrt_newton(double a) {
    if (a < 0) {
        printf("Negatív számnak nincs valós négyzetgyöke!\n");
        return -1; // Hibakezelés: negatív szám esetén nincs valós négyzetgyök
    }

    double xk = 1.0; // Kezdeti érték
    double epsilon = 1e-6; // Pontosság

    while (1) {
        double xk1 = 0.5 * (xk + a / xk); // Iterációs formula
        if (fabs(xk1 - xk) < epsilon) { // Ha az eredmény kellõen pontos, kilépünk
            return xk1;
        }
        xk = xk1; // Frissítés
    }
}

int main() {
    double num;
    printf("Adj meg egy számot: ");
    scanf("%lf", &num);

    double result = sqrt_newton(num);
    if (result != -1) {
        printf("A %.6f négyzetgyöke: %.6f\n", num, result);
    }

    return 0;
}
