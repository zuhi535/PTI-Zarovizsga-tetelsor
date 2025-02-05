
//�rjon f�ggv�nyt vagy met�dust, amely kisz�molja az n-edik Fibonacci sz�mot! A Fibonacci
//sorozatot az an=an-2+an-1 rekurzi�val defini�lja (n>2), ahol a1=a2=1.

#include <stdio.h>
#include <stdlib.h>

// Rekurz�v Fibonacci f�ggv�ny
int fibonacci(int n) {
    if (n <= 0) {
        return 0; // Hibakezel�s: nincs �rtelmezett Fibonacci sz�m 0 vagy negat�v eset�n
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
