
//rjon f�ggv�nyt vagy met�dust, amely egy val�s sz�m k�bgy�k�t adja vissza! Haszn�lja az
//xk+1=1/3*(2*xk+a/xk�2) sorozatot, amely a k�bgy�k�hez konverg�l, ha x1=1.


#include <stdio.h>
#include <math.h>

// K�bgy�k sz�m�t�sa iterat�v m�dszerrel
double cubic_root(double a) {
    if (a == 0) return 0; // Speci�lis eset kezel�se

    double xk = 1.0; // Kezd��rt�k
    double tol = 1e-6; // Pontoss�g

    while (fabs(xk * xk * xk - a) > tol) {
        xk = (2.0 * xk + a / (xk * xk)) / 3.0;
    }

    return xk;
}

int main() {
    double number;
    printf("Adj meg egy sz�mot: ");
    scanf("%lf", &number);

    printf("A(z) %.6f k�bgy�ke: %.6f\n", number, cubic_root(number));

    return 0;
}
