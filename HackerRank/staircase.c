#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i, j, k; 
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            printf("#");    
        }
        printf("\n");
    }
    return 0;
}

