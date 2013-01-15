#include <stdio.h>

unsigned long long modExp (unsigned long long base, unsigned long long exp, unsigned long long mod) {

    if (exp == 0)
        return 1;

    else if (exp%2 == 0) {
        unsigned long long sqrt = modExp(base, exp/2, mod);
        return (sqrt*sqrt)%mod;
    }

    else
        return (base*modExp(base, exp-1, mod))%mod;

}


int main () {

    unsigned long long n, k;
    unsigned long long mod = 10000007;
    //printf ("%ld\n", modExp(41, 18676666, 95657653));

    while (1) {

        scanf ("%lld%lld", &n, &k);
        if (n == 0 && k == 0)
            break;

        else {

            unsigned long long a = modExp(n, n, mod);
            unsigned long long b = modExp(n, k, mod);
            unsigned long long c = modExp(n-1, n-1, mod);
            unsigned long long d = modExp(n-1, k, mod);

            printf ("%lld\n", (a+b+2*(c+d))%mod);
        }
    }

    return 0;

}
