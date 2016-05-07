#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    float pos=0, neg=0, zero=0;
    int n;
    float f1, f2, f3;
    scanf("%d",&n);
    float arr[n];
    for(int i = 0; i < n; i++){
       scanf("%f",&arr[i]);
        if(arr[i]>0){
            pos=pos+1;
        }
        else if(arr[i]<0){
            neg+=1;
        }
        else{
            zero+=1;
        }
    }
    f1=pos/n;
    f2=neg/n;
    f3=zero/n;
    printf("%f \n%f \n%f \n", f1, f2, f3);
    return 0;
}

