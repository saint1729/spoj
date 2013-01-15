#include <stdio.h>
#include <math.h>

int f (int n) {
    if (n == 1)
        return 1;
    else {
        int temp = 1, i = 2, root = (int)sqrt(n);
         while (i <= root) {
            if (n%i == 0)
                temp = temp + 1;
            i++;
        }
        return f(n-1)+temp;
    }
}

int main () {
    
    int N;
    scanf ("%d", &N);
    printf ("%d\n", f(N));
    
    return 0;
}
