#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int nop, spcl = 0, pgno = 1;
    for(i=0; i<n; i++){
        nop = arr[i];
        int prb_no = 1;
        while(nop>0){
            for(j=0; j<k; j++){
                if(nop<=0){
                    break;
                }
                if(prb_no==pgno){
                    spcl++;
                }
                prb_no++;
                nop--;
            }
            pgno++;
        }
    }
    
    printf("%d", spcl);
    
    return 0;
}

