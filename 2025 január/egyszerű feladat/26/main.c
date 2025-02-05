
//.Adjon metódust vagy függvényt, ami a paraméterként kapott, egészekbõl álló rendezett
//tömbben a tömb hosszának logaritmusával arányos lépésszám alatt megkeresi a
//paraméterként kapott egész elsõ elõfordulásának indexét, illetve ha nincs ilyen, akkor -1-et
//ad vissza. (pl. a bináris keresés)

#include <stdio.h>

int binarySearchFirstOccurrence(int arr[], int size, int target) {
    int left = 0, right = size - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // Folytatjuk a keresést balra az elsõ elõfordulás megtalálásához
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int result = binarySearchFirstOccurrence(arr, size, target);
    if (result != -1) {
        printf("A keresett elem (%d) elso elofordulasanak indexe: %d\n", target, result);
    } else {
        printf("A keresett elem (%d) nem talalhato a tombben.\n", target);
    }
    return 0;
}
