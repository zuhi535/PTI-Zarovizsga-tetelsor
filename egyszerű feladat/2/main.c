
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�mr�l eld�nti, hogy t�k�letes sz�m-e, vagy sem! (pozit�v oszt�inak �sszege a sz�m k�tszerese)

#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int num) {
    if (num < 2) {
        return false;
    }

    int sum = 1;

    // A sz�m n�gyzetgy�k�ig megy�nk, hogy optimaliz�ljuk a keres�st
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
        printf("%d t�keletes szam.\n", number);
    } else {
        printf("%d nem t�keletes szam.\n", number);
    }

    return 0;
}
