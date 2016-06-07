#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t, i, n, a, b, j, k, c;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);
        for(c=0; c<n; c++){
            if(a<b){
            int final = 0;
            for(j=0; j<n-1-c; j++){
                final = final + a;
            }
            for(k=0; k<c; k++){
                final = final + b;
            }
            printf("%d ", final);
            }
            else if(a>b){
                int final = 0;
            for(j=0; j<c; j++){
                final = final + a;
            }
            for(k=0; k<n-1-c; k++){
                final = final + b;
            }
            printf("%d ", final);
            }
            else{
                int final = 0;
                for(j=0; j<n-1; j++){
                    final = final + a;
                }
                printf("%d ", final);
                break;
            }
        }
        printf("\n");
    }
    
    return 0;
}

