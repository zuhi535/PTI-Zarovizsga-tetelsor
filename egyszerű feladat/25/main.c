
//Adjon egy met�dust vagy f�ggv�nyt, ami param�terk�nt adott s sztring/karaktert�mb, c
//karakter �s n pozit�v eg�sz sz�m eset�n megadja, hogy a c karakter n-edik el�fordul�sa
//h�nyadik poz�ci�n van az �s� sztringben.

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
    return -1; // Ha nincs ilyen el�fordul�s
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
