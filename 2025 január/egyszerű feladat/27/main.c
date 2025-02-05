
//Írjon függvényt vagy metódust, mely visszaadja két egész paramétere szorzatának balról
//második számjegyét! (a megoldás során ne használjon sztringeket/karaktertömböket)


#include <stdio.h>

int getSecondLeftmostDigit(int a, int b) {
    long long product = (long long)a * b;
    while (product >= 100) {
        product /= 10;
    }
    return (product / 10) % 10;
}

int main() {
    int a = 1234, b = 5678;
    int result = getSecondLeftmostDigit(a, b);
    printf("A szorzat balrol masodik szamjegye: %d\n", result);
    return 0;
}
