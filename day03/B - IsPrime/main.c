#include <stdio.h>
int main() {
    long long x, i;
    scanf("%lld", &x);
    i = 2;
    if (x <= 3) {
        printf("\"Prime\"");
        return 0;
    }
    while (i < x && i != 1000000000001LL) {
        if (x % i == 0) {
            printf("\"Not Prime\"");
            return 0;
        }
        i++;
    }
    printf("\"Prime\"");
}
