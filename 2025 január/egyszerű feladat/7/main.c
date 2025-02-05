
// �rjon olyan f�ggv�nyt vagy met�dust, amely egy term�szetes sz�mhoz visszaadja azt a
// legnagyobb eg�sz kitev�s hatv�ny�t, amely m�g �ppen kisebb, mint 567!


#include <stdio.h>
#include <math.h>

// F�ggv�ny, amely megkeresi a legnagyobb eg�sz kitev�s hatv�nyt, amely kisebb, mint 567
int legnagyobb_hatvany(int base) {
    int hatvany = 1;
    while (hatvany * base < 567) {
        hatvany *= base;
    }
    return hatvany;
}

int main() {
    int base;
    printf("Adja meg az alapot: ");
    scanf("%d", &base);

    printf("A legnagyobb %d-alapu hatvany, amely kisebb, mint 567: %d\n", base, legnagyobb_hatvany(base));
    return 0;
}
