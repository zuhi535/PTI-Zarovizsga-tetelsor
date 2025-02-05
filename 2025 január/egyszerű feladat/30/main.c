
//Írjon függvényt vagy metódust, mely pozitív egész paraméterét fordítva adja vissza, pl.
//fordit(234) eredménye 432! (a megoldás során ne használjon sztringeket/karaktertömböket)

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
