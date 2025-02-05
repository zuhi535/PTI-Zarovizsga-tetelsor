
//Írjon olyan függvényt vagy metódust, amely egy természetes számról eldönti, hogy tökéletes szám-e, vagy sem! (pozitív osztóinak összege a szám kétszerese)

#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int num) {
    if (num < 2) {
        return false;
    }

    int sum = 1;

    // A szám négyzetgyökéig megyünk, hogy optimalizáljuk a keresést
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }


    return sum == num;
}

int main() {
    int number;
    printf("Adjon meg egy termeszetes szamot: ");
    scanf("%d", &number);

    if (isPerfectNumber(number)) {
        printf("%d tökeletes szam.\n", number);
    } else {
        printf("%d nem tökeletes szam.\n", number);
    }

    return 0;
}
