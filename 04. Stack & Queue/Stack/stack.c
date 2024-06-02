//#include <stdio.h>
//#include <stdlib.h>
//#include "stack.h"
//
//void init(stack *s, int max) {
//    s->ptr = 0;
//    s->data = calloc(max, sizeof(int));
//    s->init_max = max;
//    s->max = max;
//}
//
//void push(stack *s, int x) {
//    if (s->ptr >= s->max) {
//        s->data = realloc(s->data, (++s->max) * sizeof(int));
//    }
//    s->data[s->ptr++] = x;
//}
//
//int pop(stack *s) {
//    if (s->ptr <= 0) return -1;
//    return s->data[--s->ptr];
//}
//
//int peek(const stack *s) {
//    if (s->ptr <= 0) return -1;
//    return s->data[s->ptr-1];
//}
//
//void clear(stack *s) {
//    s->ptr = 0;
//    s->max = s->init_max;
//}
//
//int capacity(const stack *s) { // max length
//    return s->max;
//}
//
//int size(const stack *s) { // current length
//    return s->ptr;
//}
//
//int search(const stack *s, int x) {
//    int left = 0;
//    int right = s->ptr - 1;
//
//    while (left <= right) {
//        int mid = (left + right) / 2;
//
//        if (s->data[mid] == x) {
//            return mid;
//        } else if (s->data[mid] < x) {
//            left = mid + 1;
//        } else {
//            right = mid - 1;
//        }
//    }
//    return -1;
//}
//
//void printStack(const stack *s) {
//    printf("{ ");
//    for (int i = 0; i < s->ptr; i++) {
//        printf("%d", s->data[i]);
//        if (i < s->ptr - 1) {
//            printf(", ");
//        }
//    }
//    printf(" }\n");
//}