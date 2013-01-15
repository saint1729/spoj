#include <stdio.h>

long long z(long x) {

    long long count = 0;

    while (x > 0) {
        count = count + x/5;
        x = x/5;
    }

    return count;
}

int main () {

    int n;
    long x;
    scanf("%d", &n);
    while(n-- > 0) {
        scanf("%ld", &x);
        printf("%lld\n", z(x));
    }

    return 0;

}
