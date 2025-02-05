
//�rjon f�ggv�nyt vagy met�dust, mely val�s t�pus� param�ter�nek azt a sz�mjegy�t adja
//vissza, amelyik a tizedes pont ut�n �ll! (a megold�s sor�n ne haszn�ljon
//sztringeket/karaktert�mb�ket)


#include <stdio.h>

int getFirstDecimalDigit(double num) {
    num = num - (int)num;  // Lev�gjuk az eg�sz r�szt
    return (int)(num * 10) % 10;  // Az els� tizedesjegy kinyer�se
}

int main() {
    double num = 12.345;
    int digit = getFirstDecimalDigit(num);
    printf("A tizedes pont utani elso szamjegy: %d\n", digit);
    return 0;
}
