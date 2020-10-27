#include <stdio.h>

int sum(int* x, int len) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        total += x[i];
    }
    return total;
}

int main() {
    int x[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    printf("sum = %d\n", sum(x, 9));
}
