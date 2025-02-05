
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�mr�l eld�nti, hogy a kettes
//sz�mrendszerbeli fel�r�s�ban a jobbr�l m�sodik bitje 1 vagy 0 (ne alak�tsa �t sztringg�/karaktert�mbb�)!

#include <stdio.h>

// F�ggv�ny, amely eld�nti, hogy egy sz�m kettes sz�mrendszerbeli fel�r�s�ban a jobbr�l m�sodik bit 1 vagy 0
int masodik_bit(int n) {
    return (n & 0b10) ? 1 : 0;
}

int main() {
    int szam;
    printf("Adja meg a szamot: ");
    scanf("%d", &szam);

    printf("A szam jobbrol masodik bitje: %d\n", masodik_bit(szam));
    return 0;
}
