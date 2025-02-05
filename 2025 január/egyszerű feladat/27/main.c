
//�rjon f�ggv�nyt vagy met�dust, mely visszaadja k�t eg�sz param�tere szorzat�nak balr�l
//m�sodik sz�mjegy�t! (a megold�s sor�n ne haszn�ljon sztringeket/karaktert�mb�ket)


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
