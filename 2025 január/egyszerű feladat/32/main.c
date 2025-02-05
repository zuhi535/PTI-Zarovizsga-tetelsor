
//�rjon f�ggv�nyt vagy met�dust, ami visszaadja, hogy h�ny olyan eg�sz sz�m van, ami k-n�l
//nagyobb, m-n�l kisebb, �s pontosan n darab val�di oszt�ja van! (k, m,n term�szetes sz�mok,
//k <= m)


#include <stdio.h>

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int countNumbersWithNDivisors(int k, int m, int n) {
    int count = 0;
    for (int i = k + 1; i < m; i++) {
        if (countDivisors(i) == n) {
            count++;
        }
    }
    return count;
}

int main() {
    int k = 10, m = 50, n = 4;
    int result = countNumbersWithNDivisors(k, m, n);
    printf("%d darab szam van, amely k-nal nagyobb, m-nel kisebb, es pontosan n darab valodi osztoja van.\n", result);
    return 0;
}
