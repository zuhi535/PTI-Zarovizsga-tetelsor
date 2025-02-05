
//�rjon olyan f�ggv�nyt vagy met�dust, amely megsz�molja egy adott karakterl�nc vagy
//sztring �sszes el�fordul�s�t egy m�sik karakterl�ncban vagy sztringben!



#include <stdio.h>
#include <string.h>

int count_substring_occurrences(const char *str, const char *substr) {
    int count = 0;
    const char *temp = str;
    size_t substr_len = strlen(substr);

    if (substr_len == 0) {
        return 0;
    }

    while ((temp = strstr(temp, substr)) != NULL) {
        count++;
        temp += substr_len; // Move pointer forward to continue searching
    }

    return count;
}

int main() {
    const char *text = "abc abc abc";
    const char *word = "abc";

    int occurrences = count_substring_occurrences(text, word);
    printf("A '%s' sztring %d alkalommal fordul elo a '%s' sztringben.\n", word, occurrences, text);

    return 0;
}
