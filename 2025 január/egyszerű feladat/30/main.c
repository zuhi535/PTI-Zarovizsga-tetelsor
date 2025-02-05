
//�rjon f�ggv�nyt vagy met�dust, mely pozit�v eg�sz param�ter�t ford�tva adja vissza, pl.
//fordit(234) eredm�nye 432! (a megold�s sor�n ne haszn�ljon sztringeket/karaktert�mb�ket)

#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num = 234;
    int reversed = reverseNumber(num);
    printf("A szam forditottja: %d\n", reversed);
    return 0;
}
