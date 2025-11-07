#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int hours = (N / 60) % 24;
    int minutes = N % 60;

    printf("%d %d\n", hours, minutes);
    return 0;
}
