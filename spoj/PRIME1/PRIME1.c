#include <stdio.h>
#include <math.h>
int primes[100000];

int isPrime (unsigned long long n, unsigned long long sqrt) {
    int i;
    if (n < 2)
        return 0;
    for (i = 2; i <= sqrt; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main () {

    int t, sqroot, j=0;
    unsigned long long a, b, i = 2;

    /*while (i < 1000000000) {
        sqroot = sqrt(i);
        if(isPrime(i, sqroot)) {
            //printf("%d\n",i);
            //primes[j] = i;
            //j++;
            j++;
        }
        i++;
    }*/

    /*i = 0;
    while (i < 31263) {
        printf("%d\n", primes[i]);
        i++;
    }/**/

    scanf("%d", &t);

    while (t-- > 0) {
        scanf ("%lld", &a);
        scanf ("%lld", &b);

        for (i = a; i < b+1; i++) {
            if (isPrime(i, sqrt(i)))
                printf("%lld\n", i);
        }
        printf("\n");
    }/**/

    return 0;
}
