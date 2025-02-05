
//Írjon olyan függvényt vagy metódust, amely egy karakterláncból vagy sztringbõl a
//számjegyek kivételével minden karaktert eltávolít!


#include <stdio.h>
#include <ctype.h>

// Függvény, amely eltávolítja a nem számjegy karaktereket egy sztringbõl
void csak_szamjegyek(char *str) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Adja meg a sztringet: ");
    scanf("%99s", str);

    csak_szamjegyek(str);
    printf("Szamjegyeket tartalmazo sztring: %s\n", str);
    return 0;
}
