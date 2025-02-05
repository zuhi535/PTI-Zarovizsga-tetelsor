
//A k�vetkez� k�zel�t� formul�t haszn�lva �rjon f�ggv�nyt vagy met�dust, amely egy val�s
//sz�m n�gyzetgy�k�t adja vissza! Haszn�lja az xk+1=1/2*(xk+a/xk) sorozatot, amely a
//n�gyzetgy�k�hez konverg�l, ha x1=1.

#include <stdio.h>

// Newton-m�dszerrel sz�m�tott n�gyzetgy�k f�ggv�ny
double sqrt_newton(double a) {
    if (a < 0) {
        printf("Negat�v sz�mnak nincs val�s n�gyzetgy�ke!\n");
        return -1; // Hibakezel�s: negat�v sz�m eset�n nincs val�s n�gyzetgy�k
    }

    double xk = 1.0; // Kezdeti �rt�k
    double epsilon = 1e-6; // Pontoss�g

    while (1) {
        double xk1 = 0.5 * (xk + a / xk); // Iter�ci�s formula
        if (fabs(xk1 - xk) < epsilon) { // Ha az eredm�ny kell�en pontos, kil�p�nk
            return xk1;
        }
        xk = xk1; // Friss�t�s
    }
}

int main() {
    double num;
    printf("Adj meg egy sz�mot: ");
    scanf("%lf", &num);

    double result = sqrt_newton(num);
    if (result != -1) {
        printf("A %.6f n�gyzetgy�ke: %.6f\n", num, result);
    }

    return 0;
}
