#include <stdio.h>

int a[500], b[100], tmp[500][600];

void swap (int *a, int *b) {
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
    return;
}

void sort (int *a, int *b) {
    if(*a > *b) {
        swap (a, b);
    }
    return;
}

int main () {
    
    int i, j, N, N1, N2, carry, prod, sum, t, n, temp;
    
    scanf("%d", &t);
    
    while (t--) {
        
        scanf("%d", &n);
        
        i = 0;
        temp = n;
        while (temp) {
            a[i] = temp%10;
            temp = temp/10;
            i++;
        }
        
        N1 = i;
        
        n--;
        i = 0;
        temp = n;
        while (temp) {
            b[i] = temp%10;
            temp = temp/10;
            i++;
        }
        
        N2 = i;
        
        //sort (&N1, &N2);
        
        while (n) {

            sort (&N1, &N2);
            for (j = 0; j < N1; j++) {
                carry = 0;
                for (i = 0; i < N2; i++) {
                    prod = (a[i]*b[j] + carry);
                    tmp[j][i+j] = prod%10;
                    //printf ("%d", tmp[j][i+j]);
                    carry = prod/10;
                }
                tmp[j][N2+j] = carry;
                //printf ("%d\n", tmp[j][N2+j]);
            }
            
            //printf ("\n");
            
            carry = 0;
            
            for (i = 0; i < N1+N2; i++) {
                sum = carry;
                for (j = 0; j < N1; j++) {
                    sum = sum + tmp[j][i];
                    tmp[j][i] = 0;
                }
                a[i] = sum%10;
                //printf ("%d", a[i]);
                carry = sum/10;
            }
            a[N1+N2] = carry;
            //printf ("%d\n", a[N1+N2]);

            //printf ("\n");

            for (i = N1+N2; i >= 0; i--) {
                if (a[i] != 0)
                    break;
            }

            j = 0;
            while (i >= 0) {
                //printf ("%d", a[i]);
                j++;
                i--;
            }
            
            //printf("\n\n\n");

            N1 = j;

            n--;
            temp = n;
            i = 0;
            while (temp) {
                b[i] = temp%10;
                temp = temp/10;
                i++;
            }

            N2 = i;
        }
        
        for (i = N1+N2; i >= 0; i--) {
            if (a[i] != 0)
                break;
        }

        j = 0;
        while (i >= 0) {
            printf ("%d", a[i]);
            a[i] = 0;
            j++;
            i--;
        }
        printf ("\n");
        
        b[0] = 0;
        b[1] = 0;


    }

    return 0;
}
