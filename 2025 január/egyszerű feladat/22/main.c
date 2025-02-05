
//Adjon olyan metódust vagy függvényt, ami eldönti, hogy a paramétereként megadott
//(pozitív egészekbõl álló) nemüres tömbben van-e olyan szám, ami az összes többinél
//többször fordul elõ.

#include <stdio.h>

int most_frequent_number(int arr[], int size) {
    int max_count = 0, most_frequent = -1;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            most_frequent = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == max_count && arr[i] != most_frequent) {
            return -1; // No unique most frequent number
        }
    }

    return most_frequent;
}

int main() {
    int arr[] = {1, 3, 3, 2, 3, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = most_frequent_number(arr, size);
    if (result != -1) {
        printf("The most frequent number is %d.\n", result);
    } else {
        printf("No unique most frequent number found.\n");
    }

    return 0;
}
