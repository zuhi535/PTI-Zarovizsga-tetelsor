
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncban vagy sztringben
//v�letlenszer�en �sszekeveri a karaktereket (v�letlensz�m�gener�tor haszn�lhat�)!


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Karakterl�nc v�letlenszer� �sszekever�se
void shuffle_string(char *str) {
    if (str == NULL) return;

    size_t len = strlen(str);
    if (len < 2) return;

    srand(time(NULL)); // V�letlensz�m-gener�tor inicializ�l�sa

    for (size_t i = len - 1; i > 0; i--) {
        size_t j = rand() % (i + 1);

        // K�t karakter cser�je
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Eredeti: %s\n", str);

    shuffle_string(str);
    printf("�sszekevert: %s\n", str);

    return 0;
}
