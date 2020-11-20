#include <stdio.h>

const int n = 5;
void swap(int A[], int i, int j) {
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
void findmax (int A[]) {
    int max = 0;
    int i, j;
    for (i = 0; i<n; i++) {
        for (j = i+1; j<n; j++) {
            if (A[i] < A[j]){
                swap(A, i, j);
            }
        }
    }
}