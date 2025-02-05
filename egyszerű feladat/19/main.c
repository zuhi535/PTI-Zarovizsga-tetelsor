
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncba vagy sztringbe besz�r egy
//�a� karaktert v�letlen�l v�lasztott poz�ci�ba (v�letlensz�m�gener�tor haszn�lhat�)!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

void insert_random_a(char *str, size_t length) {
    size_t insert_pos = rand() % (length + 1);
    memmove(str + insert_pos + 1, str + insert_pos, length - insert_pos + 1);
    str[insert_pos] = 'a';
}

int main() {
    srand((unsigned int)time(NULL));
    char random_str[7];
    generate_random_string(random_str, 5);
    insert_random_a(random_str, 5);
    printf("Random string with inserted 'a': %s\n", random_str);
    return 0;
}
