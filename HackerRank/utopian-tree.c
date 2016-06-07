#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int final=1;
        int n; 
        scanf("%d",&n);
        if(n==0){
            printf("%d\n", final);
        }
        else{
            for(int i=1; i<n+1; i++){
                if(i%2==0){
                    final=final+1;
                }
                else{
                    final=final*2;
                }
            }
            printf("%d\n", final);
        }
    }
    return 0;
}

