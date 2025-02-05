
//Írjon függvényt vagy metódust, mely valós típusú paraméterének azt a számjegyét adja
//vissza, amelyik a tizedes pont után áll! (a megoldás során ne használjon
//sztringeket/karaktertömböket)


#include <stdio.h>

int getFirstDecimalDigit(double num) {
    num = num - (int)num;  // Levágjuk az egész részt
    return (int)(num * 10) % 10;  // Az elsõ tizedesjegy kinyerése
}

int main() {
    double num = 12.345;
    int digit = getFirstDecimalDigit(num);
    printf("A tizedes pont utani elso szamjegy: %d\n", digit);
    return 0;
}
