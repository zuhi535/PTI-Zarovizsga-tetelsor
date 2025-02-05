
//�rjon olyan f�ggv�nyt vagy met�dust, amelynek param�tere egy 1 < x < 10 term�szetes
//sz�m, �s ki�rja az 1,3,4,6,7,9,10,12,... sorozat els� �t x-szel oszthat� elem�t, azaz a sorozat
//i+1-edik tagja 2-vel nagyobb az i-edikn�l, ha i p�ratlan, s eggyel nagyobb az i-edikn�l, ha i
//p�ros!

#include <stdio.h>

// F�ggv�ny, amely ki�rja a sorozat els� �t x-szel oszthat� elem�t
void kiir_sorozat(int x) {
    int szam = 1;
    int count = 0;

    while (count < 5) {
        if (szam % x == 0) {
            printf("%d ", szam);
            count++;
        }
        if (szam % 2 == 1) {
            szam += 2;
        } else {
            szam += 1;
        }
    }
    printf("\n");
}

int main() {
    int x;
    do {
        printf("Adja meg az x erteket (2 es 9 kozott): ");
        scanf("%d", &x);
    } while (x <= 1 || x >= 10);

    kiir_sorozat(x);
    return 0;
}
