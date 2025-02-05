
//Adjon olyan metódust vagy függvényt, ami visszaadja, hogy a paramétereként megadott
//(pozitív egészekbõl álló) nemüres tömbben melyik az a legkisebb index, amire az index
//lõtti elemek összege meghaladja a tömb elsõ két elemének szorzatát. Ha nincs ilyen, 0-t
//adjon vissza.

#include <stdio.h>

int findIndex(int arr[], int size) {
    if (size < 2) return 0; // Legalább két elem kell a szorzathoz

    int threshold = arr[0] * arr[1];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (i > 0 && sum > threshold) {
            return i;
        }
    }
    return 0; // Ha nincs ilyen index
}

int main() {
    int arr[] = {3, 4, 1, 2, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findIndex(arr, size);
    printf("Legkisebb index: %d\n", result);
    return 0;
}
