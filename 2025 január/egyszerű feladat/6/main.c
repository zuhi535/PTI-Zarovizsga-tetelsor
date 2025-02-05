
//Írjon függvényt vagy metódust, amely kiszámolja az n-edik Fibonacci számot! A Fibonacci
//sorozatot az an=an-2+an-1 rekurzióval definiálja (n>2), ahol a1=a2=1.

#include <stdio.h>
#include <stdlib.h>

// Rekurzív Fibonacci függvény
int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Hibakezelés: nincs értelmezett Fibonacci szám 0 vagy negatív esetén
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Adja meg az n erteket: ");
    scanf("%d", &n);

    printf("A %d. Fibonacci szam: %d\n", n, fibonacci(n));
    return 0;
}
