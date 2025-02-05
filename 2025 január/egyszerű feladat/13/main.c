
//Írjon olyan függvényt vagy metódust, amely egy karakterláncról vagy sztringrõl eldönti,
//hogy palindróma-e! (Balról olvasva ugyanaz, mint jobbról olvasva.)


#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Függvény, amely eldönti, hogy egy sztring palindróma-e
int palindroma_e(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Adja meg a sztringet: ");
    scanf("%99s", str);

    if (palindroma_e(str)) {
        printf("A megadott sztring palindroma.\n");
    } else {
        printf("A megadott sztring nem palindroma.\n");
    }

    return 0;
}
