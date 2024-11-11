#include <stdio.h>
#include "heap.h"

int main() {
    heap h;

    init(&h);

    for (int i = 1; i <= 10; i++)
        insert(&h, i);

    printf("Initial Heap: ");
    printHeap(&h);
    printf("size: %d\n", h.size);

    printf("Max Value(Pop): %d\n", delete(&h));
    printHeap(&h);

    terminate(&h);
    return 0;
}