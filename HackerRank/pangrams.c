#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    char a[1001];
    gets(a);
    //printf("%s\n" ,a);
    int len=0, c=0;
    while(a[c]!='\0'){
        len++;
        c++;
    }
    //printf("%d\n", len);
    int count[26]={0};
    for(i=0; i<len; i++){
        if(a[i]!=' '){
            if(a[i]>='a' && a[i]<='z'){
                count[a[i]-97]++;
            }
            if(a[i]>='A' && a[i]<='Z'){
                count[a[i]-65]++;
            }
        }
    }
    int j;
    /*for(i=0; i<26; i++){
        printf("%d\n", count[i]);
    }*/
    int tp;
    for(i=0; i<26; i++){
        if(count[i]==0){
            tp = 0;
            break;
        }
        else{
            tp = 1;
        }
    }
    if(tp == 1){
        printf("pangram");
    }
    else{
        printf("not pangram");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
