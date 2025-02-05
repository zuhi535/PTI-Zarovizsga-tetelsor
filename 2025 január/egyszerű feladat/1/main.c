
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�mr�l eld�nti, hogy pr�msz�m-e, vagy sem!

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    printf("Adjon meg egy termeszetes szamot: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d primszam.\n", number);
    } else {
        printf("%d nem primszam.\n", number);
    }

    return 0;
}
