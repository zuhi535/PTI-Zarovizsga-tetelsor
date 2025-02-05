
//Adjon olyan metódust vagy függvényt, ami eldönti, hogy a paramétereként megadott
//(pozitív egészekbõl álló) nemüres tömbben van-e olyan szám, ami az összes többit osztja.
//(Maradékszámító függvény használható)

#include <stdio.h>

int is_universal_divisor(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int candidate = arr[i];
        int is_divisor = 1;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[j] % candidate != 0) {
                is_divisor = 0;
                break;
            }
        }

        if (is_divisor) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {2, 4, 8, 16};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (is_universal_divisor(arr, size)) {
        printf("There is a number that divides all others.\n");
    } else {
        printf("No number divides all others.\n");
    }

    return 0;
}
