#include <stdio.h>

int main() {
    int i;
    double n;

    for(i = 0; i < 100; i++){
        scanf("%lf", &n);
        if(n < 11) printf("A[%d] = %.1f\n", i, n);
    }

    return 0;
}
