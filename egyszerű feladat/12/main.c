
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy karakterl�ncb�l vagy sztringb�l a
//sz�mjegyek kiv�tel�vel minden karaktert elt�vol�t!


#include <stdio.h>
#include <ctype.h>

// F�ggv�ny, amely elt�vol�tja a nem sz�mjegy karaktereket egy sztringb�l
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
