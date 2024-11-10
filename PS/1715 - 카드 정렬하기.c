#include <stdio.h>

void minHeapify(int heap[], int n, int i) {
    int min = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] < heap[min])
        min = left;
    if (right < n && heap[right] < heap[min])
        min = right;

    if (min != i) {
        int temp = heap[i];
        heap[i] = heap[min];
        heap[min] = temp;
        minHeapify(heap, n, min);
    }
}

int pop(int heap[], int *n) {
    int min = heap[0];
    heap[0] = heap[*n - 1]; (*n)--;
    minHeapify(heap, *n, 0);
    return min;
}

void insert(int heap[], int *n, int value) {
    heap[*n] = value;
    int i = *n;
    (*n)++;
    while (i != 0 && heap[(i - 1) / 2] > heap[i]) {
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;
        i = (i - 1) / 2;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int heap[100000];
    int heapSize = 0;

    for (int i = 0; i < n; i++) {
        int cardSize;
        scanf("%d", &cardSize);
        insert(heap, &heapSize, cardSize);
    }

    int result = 0;

    while (heapSize > 1) {
        int first = pop(heap, &heapSize);
        int second = pop(heap, &heapSize);

        result += first + second;
        insert(heap, &heapSize, first + second);
    }

    printf("%d\n", result);

    return 0;
}
