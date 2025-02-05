
//Írjon olyan függvényt vagy metódust, amely egy karakterláncból vagy sztringbõl eltávolítja
//egy megadott karakter összes elõfordulását!


#include <stdio.h>
#include <string.h>

// Függvény, amely eltávolít egy megadott karaktert egy sztringbõl
void remove_character(char *str, char ch) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100], ch;
    printf("Adja meg a sztringet: ");
    fgets(str, sizeof(str), stdin);

    printf("Adja meg az eltavolitando karaktert: ");
    scanf("%c", &ch);

    remove_character(str, ch);
    printf("Atalaktott sztring: %s\n", str);

    return 0;
}
