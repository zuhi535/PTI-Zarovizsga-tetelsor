
//�rjon olyan f�ggv�nyt vagy met�dust, amely el��ll�t egy 5 karakterb�l (angol kisbet�s �b�c�
//karaktereit haszn�lva) �ll� v�letlen karakterl�ncot vagy sztringet! Biztos�tsa, hogy minden 5
//hossz� k�l�nb�z� bet�kb�l �ll� sztring egyenl� val�sz�n�s�ggel ker�lj�n kiv�laszt�sra,
//felt�ve, hogy a v�lasztott programoz�si nyelv v�letlensz�m-gener�tora egyenletes eloszl�st
//biztos�t!


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
