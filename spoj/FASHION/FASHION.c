#include <stdio.h>
#include <stdlib.h>

int a[1000], b[1000];

int compare (const void * a, const void * b) {
    return (*(int*)a-*(int*)b);
}

int main () {

    int t, N, i, j, temp;
    scanf ("%d", &t);

    while (t--) {
        scanf ("%d", &N);
        for (i = 0; i < N; i++)
            scanf ("%d", &a[i]);
        for (i = 0; i < N; i++)
            scanf ("%d", &b[i]);
        qsort (a, N, sizeof(int), compare);
        qsort (b, N, sizeof(int), compare);
        temp = 0;
        for (i = 0; i < N; i++)
            temp = temp + a[i]*b[i];
        printf ("%d\n", temp);
    }

    return 0;
}
