
//Adjon egy metódust vagy függvényt, ami paraméterként adott s sztring/karaktertömb, c
//karakter és n pozitív egész szám esetén megadja, hogy a c karakter n-edik elõfordulása
//hányadik pozíción van az „s” sztringben.

#include <stdio.h>
#include <string.h>

int findNthOccurrence(const char *s, char c, int n) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
            if (count == n) {
                return i;
            }
        }
    }
    return -1; // Ha nincs ilyen elõfordulás
}

int main() {
    const char *s = "hello world, hello again";
    char c = 'o';
    int n = 2;
    int result = findNthOccurrence(s, c, n);
    if (result != -1) {
        printf("A(z) %d. '%c' karakter pozicioja: %d\n", n, c, result);
    } else {
        printf("A karakter nem fordul elo %d-szer.\n", n);
    }
    return 0;
}
