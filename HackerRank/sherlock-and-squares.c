#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, t, a, b, count=0, ar[100000];
    for(i=0; i<100000; i++){
        ar[i] = pow(i,2);
    }
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d %d", &a, &b);
        for(j=0; j<100000; j++){
            if(ar[j]>=a && ar[j]<=b){
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }
        
    
    
    
    return 0;
}

