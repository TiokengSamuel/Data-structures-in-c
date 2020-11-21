#include <stdio.h>

int main() {
    int T[6] = {100, 45, 38, 58, 34, 32};
        int i;
        printf("UnSorted Array:\n");
        for (i = 0;  i < 5; i++) {
        printf("%d\n" ,T[i]);
    }
        printf("Sorted Array: \n");
        selection_sort(T, 0, 5);
}

void selection_sort(int T[], int i, int j) {
    int k, max,pos, temp;
    for (k = j; k>i; k--) {
        max=i;
        for (pos = i; pos<= k; pos++) {
            if(T[pos] > T[max]) {
                max = pos;
                temp = T[max];
                T[max] = T[k];
                T[k] = temp;
            }
            return;
        }
    }
}
