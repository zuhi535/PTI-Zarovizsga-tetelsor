
//Írjon olyan függvényt vagy metódust, amely kiírja az angol kisbetûs ábécé azon betûit,
//melyek ASCII kódja négyzetszám!

#include <stdio.h>
#include <math.h>

void print_square_ascii_letters() {
    for (char c = 'a'; c <= 'z'; c++) {
        int ascii_value = (int)c;
        int root = (int)sqrt(ascii_value);
        if (root * root == ascii_value) {
            printf("%c ", c);
        }
    }
    printf("\n");
}

int main() {
    printf("Az angol kisbetûs ábécé azon betûi, melyek ASCII kódja négyzetszám:\n");
    print_square_ascii_letters();
    return 0;
}
