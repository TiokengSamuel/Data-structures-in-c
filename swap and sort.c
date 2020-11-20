#include <stdio.h>

int n = 5;
int main() {
    int max = 0;
    int i, j;
    int A[];
    for (i = 0; i<n; i++) {
        for (j = i+1; j<n; j++) {
            if (A[i] < A[j]){
                swap(A, i, j);
            }
        }
    }
    return 0;
}

void swap(int A[], int i, int j) {
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}


