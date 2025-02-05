
//Írjon függvényt vagy metódust, mely a paraméterként kapott 10x10-es mátrixról eldönti,
//hogy van-e olyan eleme, mely sorában nagyobb és oszlopában pedig kisebb a többi elemnél!

#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

bool hasSaddlePoint(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            int element = matrix[i][j];
            bool isRowMax = true, isColMin = true;

            for (int k = 0; k < SIZE; k++) {
                if (matrix[i][k] > element) {
                    isRowMax = false;
                    break;
                }
            }

            for (int k = 0; k < SIZE; k++) {
                if (matrix[k][j] < element) {
                    isColMin = false;
                    break;
                }
            }

            if (isRowMax && isColMin) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {3, 8, 4, 5, 6, 7, 8, 9, 1, 2},
        {6, 7, 5, 3, 2, 9, 8, 1, 4, 0},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
        {9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
        {2, 4, 6, 8, 0, 1, 3, 5, 7, 9},
        {5, 3, 1, 7, 9, 2, 4, 6, 8, 0},
        {8, 6, 4, 2, 0, 9, 7, 5, 3, 1},
        {7, 5, 3, 1, 9, 2, 4, 6, 8, 0},
        {4, 2, 0, 8, 6, 1, 3, 5, 7, 9},
        {1, 3, 5, 7, 9, 0, 2, 4, 6, 8}
    };

    if (hasSaddlePoint(matrix)) {
        printf("Van olyan elem, amely soraban a legnagyobb es oszlopaban a legkisebb.\n");
    } else {
        printf("Nincs ilyen elem.\n");
    }

    return 0;
}
