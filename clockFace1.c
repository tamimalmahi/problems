#include <stdio.h>

int main() {
    int H, M, S;
    scanf("%d %d %d", &H, &M, &S);

    double angle = 30.0 * H + 0.5 * M + (1.0/120.0) * S;

    printf("%.10lf\n", angle);
    return 0;
}
