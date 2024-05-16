#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) return -1;
    else if (x > y) return 1;
    else return 0;
}

// Binary Search
int binary_search(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    // Bubble Sort
//    for (int k = 0; k < n - 1; k++) {
//        for (int i = 0; i < n - 1 - k; i++) {
//            if (A[i] > A[i + 1]) {
//                int temp = A[i];
//                A[i] = A[i + 1];
//                A[i + 1] = temp;
//            }
//        }
//    }

    // Quick Sort
    qsort(A, n, sizeof(int), compare);

    int m;
    scanf("%d", &m);
    int B[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < m; i++)
        printf("%d\n", binary_search(A, n, B[i]));
}