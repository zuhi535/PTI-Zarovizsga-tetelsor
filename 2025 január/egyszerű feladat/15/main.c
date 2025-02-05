
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncb�l vagy sztringb�l elt�vol�tja
//egy megadott karakter �sszes el�fordul�s�t!


#include <stdio.h>
#include <string.h>

// F�ggv�ny, amely elt�vol�t egy megadott karaktert egy sztringb�l
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
