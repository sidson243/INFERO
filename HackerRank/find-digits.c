#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, temp, a; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n, total=0; 
        scanf("%d",&n);
        temp=n;
        while(temp!=0){
            a=temp%10;
            if(a!=0){
                if(n%a==0){
                    total+=1;
                }
            }
            temp = temp/10;
        }
        printf("%d\n", total);
    }
    return 0;
}

