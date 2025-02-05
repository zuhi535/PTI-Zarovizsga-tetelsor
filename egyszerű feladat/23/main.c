
//Adjon olyan metódust vagy függvényt, ami visszaadja, hogy a paramétereként megadott
//(pozitív egészekbõl álló) nemüres tömbben melyik index az, ahol a leghosszabb
//folyamatosan növekvõ részsorozat kezdõdik. Ha több ilyen index is van, az utolsót adja
//vissza.

#include <stdio.h>

int find_longest_increasing_subarray_start(int arr[], int n) {
    int max_length = 1, current_length = 1;
    int max_start_index = 0, current_start_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current_length++;
        } else {
            if (current_length >= max_length) {
                max_length = current_length;
                max_start_index = current_start_index;
            }
            current_length = 1;
            current_start_index = i;
        }
    }

    if (current_length >= max_length) {
        max_start_index = current_start_index;
    }

    return max_start_index;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = find_longest_increasing_subarray_start(arr, n);
    printf("A leghosszabb novekvo reszsorozat utolso kezdoindexe: %d\n", index);
    return 0;
}
