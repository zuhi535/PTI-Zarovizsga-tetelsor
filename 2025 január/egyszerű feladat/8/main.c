
//�rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�m eset�n ki�rja, hogy a 9-es
//sz�mjegyb�l h�ny darabot tartalmaz (ne alak�tsa �t sztringg�/karaktert�mbb�)!


#include <stdio.h>

// F�ggv�ny, amely megsz�molja a 9-es sz�mjegyeket egy term�szetes sz�mban
int szamol_kilenceseket(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == 9) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int szam;
    printf("Adja meg a szamot: ");
    scanf("%d", &szam);

    printf("A szam %d darab 9-es szamjegyet tartalmaz.\n", szamol_kilenceseket(szam));
    return 0;
}
