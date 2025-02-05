
//Írjon függvényt vagy metódust, mely eldönti, hogy a paraméterként kapott 5x5-ös
///karakterekbõl álló/ tömbben a fõátlóban van-e olyan elem, mely a fõátlón kívül is
//megjelenik a tömbben!


#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

bool isDiagonalElementRepeated(char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        char diagonalElement = matrix[i][i];
        for (int row = 0; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                if (row != col && matrix[row][col] == diagonalElement) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    char matrix[SIZE][SIZE] = {
        {'a', 'b', 'c', 'd', 'e'},
        {'f', 'a', 'h', 'i', 'j'},
        {'k', 'l', 'm', 'n', 'o'},
        {'p', 'q', 'r', 's', 't'},
        {'u', 'v', 'w', 'x', 'y'}
    };

    if (isDiagonalElementRepeated(matrix)) {
        printf("Van olyan foatlobeli elem, amely mashol is elofordul.\n");
    } else {
        printf("Nincs olyan foatlobeli elem, amely mashol is elofordulna.\n");
    }

    return 0;
}
