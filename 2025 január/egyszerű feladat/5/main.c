
//rjon függvényt vagy metódust, amely egy valós szám köbgyökét adja vissza! Használja az
//xk+1=1/3*(2*xk+a/xk¡2) sorozatot, amely a köbgyökéhez konvergál, ha x1=1.


#include <stdio.h>
#include <math.h>

// Köbgyök számítása iteratív módszerrel
double cubic_root(double a) {
    if (a == 0) return 0; // Speciális eset kezelése

    double xk = 1.0; // Kezdõérték
    double tol = 1e-6; // Pontosság

    while (fabs(xk * xk * xk - a) > tol) {
        xk = (2.0 * xk + a / (xk * xk)) / 3.0;
    }

    return xk;
}

int main() {
    double number;
    printf("Adj meg egy számot: ");
    scanf("%lf", &number);

    printf("A(z) %.6f köbgyöke: %.6f\n", number, cubic_root(number));

    return 0;
}
