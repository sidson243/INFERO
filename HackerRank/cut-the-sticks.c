#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i, j, min; 
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    int count = n;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d\n", count);
    while(count>0){
        for(i=0; i<n; i++){
            if(arr[i]>0){
                min = arr[i];
                break;
            }
        }
        for(i=0; i<n; i++){
            arr[i]-=min;
            if(arr[i]==0){
                count--;
            }
        }
        if(count>0){
            printf("%d\n", count);
        }
    }
    
    
    
    return 0;
}

