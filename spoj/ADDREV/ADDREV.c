#include <stdio.h>

int rev (int n) {
    int rem, num = 0;
    while (n != 0) {
        rem = n%10;
        num = num*10 + rem;
        n = n/10;
    }
    
    return num;
}


int main () {
    
    int n, a, b;
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &a);
        scanf("%d", &b);
        printf ("%d\n", rev(rev(a)+rev(b)));
    }
    return 0;
}
