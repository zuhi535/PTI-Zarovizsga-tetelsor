
//Írjon olyan függvényt vagy metódust, amely egy karakterláncban vagy sztringben
//véletlenszerûen összekeveri a karaktereket (véletlenszám–generátor használható)!


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Karakterlánc véletlenszerû összekeverése
void shuffle_string(char *str) {
    if (str == NULL) return;

    size_t len = strlen(str);
    if (len < 2) return;

    srand(time(NULL)); // Véletlenszám-generátor inicializálása

    for (size_t i = len - 1; i > 0; i--) {
        size_t j = rand() % (i + 1);

        // Két karakter cseréje
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Eredeti: %s\n", str);

    shuffle_string(str);
    printf("Összekevert: %s\n", str);

    return 0;
}
