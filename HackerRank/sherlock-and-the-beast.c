#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, i, a, j, k;
    scanf("%d",&t);
    for(a=0; a<t; a++){
        int n;
        scanf("%d",&n);
        if(n<3 || n==4){
            printf("-1\n");
        }
        else if(n%3==0){
            for(i=0; i<n; i++){
                printf("5");
            }
            printf("\n");
        }
        else{
            int x=1, count=0;
            for(k=0; k<n/5; k++){
                if((n-5*x)%3==0){
                    for(j=0; j<n-5*x; j++){
                        printf("5");
                    }
                    for(j=0; j<5*x; j++){
                        printf("3");
                    }
                    count = 1;
                    printf("\n");
                    break;
                }
                else{
                    count = 0;
                }
                x++;
            }
            if(count==0){
                printf("-1\n");
            }
        }
    }
    return 0;
}
