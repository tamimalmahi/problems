#include <stdio.h>

int main() {
    double alpha;
    scanf("%lf", &alpha);

    double r = fmod(alpha, 30.0);
    double fraction = r / 30.0;
    double minute_angle = fraction * 360.0;

    printf("%.10lf\n", minute_angle);
    return 0;
}
