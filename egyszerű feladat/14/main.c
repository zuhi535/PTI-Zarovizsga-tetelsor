
//Írjon olyan függvényt vagy metódust, amely egy, az angol ábécé betûit tartalmazó
//karakterláncban vagy sztringben minden szó kezdõbetûjét nagybetûre alakítja!

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Függvény, amely minden szó kezdõbetûjét nagybetûre alakítja
void capitalize_words(char *str) {
    int capitalize = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalize = 1;
        } else if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        }
    }
}

int main() {
    char str[100];
    printf("Adja meg a sztringet: ");
    fgets(str, sizeof(str), stdin);

    capitalize_words(str);
    printf("atalakitott sztring: %s\n", str);

    return 0;
}
