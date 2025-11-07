#include <stdio.h>

int main() {
    int A, B, N;
    scanf("%d %d %d", &A, &B, &N);

    int price = A * 100 + B;
    int total = price * N;

    printf("%d %d\n", total / 100, total % 100);
    return 0;
}
