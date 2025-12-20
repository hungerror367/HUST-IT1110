#include <stdio.h>
int main(){
    int i=1,n,S=0;
    scanf("%d",&n);
    while(i<=10){
        printf("\n%dx%d=%d",n,i,n*i);
        i++;
    }
    return 0;
}