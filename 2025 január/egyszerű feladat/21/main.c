
//Adjon olyan met�dust vagy f�ggv�nyt, ami eld�nti, hogy a param�terek�nt megadott
//(pozit�v eg�szekb�l �ll�) nem�res t�mbben van-e olyan sz�m, ami az �sszes t�bbit osztja.
//(Marad�ksz�m�t� f�ggv�ny haszn�lhat�)

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
