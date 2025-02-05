
//.Írjon függvényt vagy metódust, mely visszaadja, hogy két pozitív egész paraméterének
//legkisebb közös többszöröse hány számjegybõl áll kettes számrendszerben.

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int binaryLength(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 2;
    }
    return count;
}

int main() {
    int a = 12, b = 18;
    int lcmValue = lcm(a, b);
    int length = binaryLength(lcmValue);
    printf("A legkisebb kozos tobbszoros (%d) kettes szamrendszerben %d szamjegybol all.\n", lcmValue, length);
    return 0;
}
