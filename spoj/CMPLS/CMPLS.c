#include <stdio.h>
#include <math.h>

int y[100], w[100], t, s, c;

int l(int t, int s) {

    int i = 0, prod = 1;
    while (i < s) {
        prod = prod*(t - i);
        i++;
    }

    return prod;
}

int w_j(int j, int s) {

    int i = 0, prod = 1;
    while (i < s) {
        if (j != i)
            prod = prod*(j - i);
        i++;
    }

    return prod;
}

int p(int t, int y[], int s) {

    int i = 0;
    double sum = 0.0, temp;
    while (i < s) {
        temp = y[i]/(1.0*w_j(i, s)*(t - i));
        sum = sum + temp;
        i++;
    }
    sum = l(t, s)*sum;
    i = round(sum);

    return i;
}

int main () {

    int t, s, c, i, j, temp;

    scanf("%d", &t);

    while (t-- > 0) {

        scanf("%d%d", &s, &c);

        i = 0;
        while (i++ < s) {
            scanf("%d", &y[i - 1]);
        }

        j = 0;
        while (j < c) {
            printf("%d ", p(s + j, y, s));
            j++;
        }

        printf("\n");
    }

    return 0;
}
