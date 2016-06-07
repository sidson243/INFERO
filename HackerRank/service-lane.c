#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int t, a; 
    scanf("%d %d",&n,&t);
    int width[n];
    for(a = 0; a < n; a++){
       scanf("%d",&width[a]);
    }
    for(int a0 = 0; a0 < t; a0++){
        int i; 
        int j; 
        scanf("%d %d",&i,&j);
        int min = width[i];
        for(a=i; a<j+1; a++){
            if(width[a]<min){
                min = width[a];
            }
        }
        printf("%d\n", min);
    }
    return 0;
}

