
//Írjon olyan függvényt vagy metódust, amely elõállít egy 5 karakterbõl (angol kisbetûs ábécé
//karaktereit használva) álló véletlen karakterláncot vagy sztringet! Biztosítsa, hogy minden 5
//hosszú különbözõ betûkbõl álló sztring egyenlõ valószínûséggel kerüljön kiválasztásra,
//feltéve, hogy a választott programozási nyelv véletlenszám-generátora egyenletes eloszlást
//biztosít!


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_string(char *str, size_t length) {
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    size_t alphabet_size = sizeof(alphabet) - 1;

    for (size_t i = 0; i < length; i++) {
        size_t index = rand() % (alphabet_size - i);
        str[i] = alphabet[index];

        // Swap used character with last available character
        char temp = alphabet[index];
        ((char *)alphabet)[index] = alphabet[alphabet_size - i - 1];
        ((char *)alphabet)[alphabet_size - i - 1] = temp;
    }
    str[length] = '\0';
}

int main() {
    srand((unsigned int)time(NULL));
    char random_str[6];
    generate_random_string(random_str, 5);
    printf("Random 5-character string: %s\n", random_str);
    return 0;
}
