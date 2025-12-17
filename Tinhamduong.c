#include <stdio.h>
int main(){
    int n;
    if(scanf("%d",&n)!=1, n>0){
        printf("n la do duong");
    }else if(n<0){
        printf("n la so am");
    }else{
        printf("n bang 0");
    }
    return 0;
}