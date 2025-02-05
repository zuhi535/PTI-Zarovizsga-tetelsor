
//�rjon olyan f�ggv�nyt vagy met�dust, amely ki�rja az angol kisbet�s �b�c� azon bet�it,
//melyek ASCII k�dja n�gyzetsz�m!

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
    printf("Az angol kisbet�s �b�c� azon bet�i, melyek ASCII k�dja n�gyzetsz�m:\n");
    print_square_ascii_letters();
    return 0;
}
