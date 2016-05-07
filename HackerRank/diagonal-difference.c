#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i, j;
    int s1=0, s2=0, ans;
    scanf("%d", &n);
    int a[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
            if(i==j){
                s1+=a[i][j];
            }
            if(i==n-1-j){
                s2+=a[i][j];
            }
        }
    }
    ans = abs(s1-s2);
    printf("%d", ans);
   
    return 0;
}

