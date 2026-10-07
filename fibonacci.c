#include <stdio.h>
int main () {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        long long n;
        scanf("%lld",&n);
        long long prevprev = 0;
        long long prev = 1;
        if(n==1){
            printf("0\n");
        } else if (n==2){
            printf("0 1\n");
        } else {
            printf("0 1 ");
            
            for(int i =3; i<=n; i++) {
                long long current = prevprev + prev;
                prevprev = prev;
                prev = current;
                
                printf("%lld ", current);
            }
            printf("\n");
        }
    }
    return 0;
}
