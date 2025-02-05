
//�rjon olyan f�ggv�nyt vagy met�dust, amely a param�ter�ben megadott term�szetes sz�m
//pozit�v oszt�inak sz�m�val t�r vissza!


#include <stdio.h>

// F�ggv�ny, amely visszaadja a term�szetes sz�m pozit�v oszt�inak sz�m�t
int osztok_szama(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int szam;
    printf("Adja meg a szamot: ");
    scanf("%d", &szam);

    printf("A %d szamnak %d pozitiv osztoja van.\n", szam, osztok_szama(szam));
    return 0;
}
