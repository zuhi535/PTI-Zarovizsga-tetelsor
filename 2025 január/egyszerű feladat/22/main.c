
//Adjon olyan met�dust vagy f�ggv�nyt, ami eld�nti, hogy a param�terek�nt megadott
//(pozit�v eg�szekb�l �ll�) nem�res t�mbben van-e olyan sz�m, ami az �sszes t�bbin�l
//t�bbsz�r fordul el�.

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
