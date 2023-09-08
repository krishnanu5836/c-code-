#include <stdio.h>

int main() {
    int t;
    int N;
    int i = 1;
    scanf("%d\n", &t );
    while ( i <= t) {

        scanf("%d", &N);
        printf("%d\n", N*-1 );
        i = i+1;
    }
    return 0;
}
